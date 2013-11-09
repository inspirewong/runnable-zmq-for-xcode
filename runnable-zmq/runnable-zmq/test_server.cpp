//
//  test_server.cpp
//  runnable-zmq
//
//  Created by builder on 13-11-9.
//  Copyright (c) 2013年 builder. All rights reserved.
//

#include "test_server.hpp"

#include "zmq.hpp"
#include <string>
#include <iostream>
#include <unistd.h>

CTestServer::CTestServer()
{
}

CTestServer::~CTestServer()
{
}

bool CTestServer::test()
{
    bool bRet = false;
    
    zmq::context_t context (1);
    zmq::socket_t socket (context, ZMQ_REP);
    socket.bind ("tcp://*:5555");
    
    std::cout << "server start..." << std::endl;
    
    while (true) {
        zmq::message_t request;
        
        //  Wait for next request from client
        socket.recv (&request);
        std::cout << "Received Hello" << std::endl;
        
        //  Do some 'work'
        //sleep (1);
        
        const char *message = "{\"status\":1,\"data\":\"ok\"}";
        
        size_t slen = strlen(message);
        //Send reply back to client
        zmq::message_t reply (slen);
        
        //memcpy ((void *) reply.data (), "World", 5);
        memcpy((void *)reply.data(), message, slen);
        socket.send (reply);
    }
    
    return bRet;
}

CTestClient::CTestClient()
{
}

CTestClient::~CTestClient()
{
}

bool CTestClient::test()
{
    bool bRet = false;
    
    zmq::context_t context (1);
    zmq::socket_t socket (context, ZMQ_REQ);
    
    std::cout << "Connecting to server..." << std::endl;
    socket.connect ("tcp://localhost:5555");
    
    //  Do 10 requests, waiting each time for a response
    for (int request_nbr = 0; request_nbr != 10; request_nbr++) {
        zmq::message_t request (6);
        memcpy ((void *) request.data (), "Hello", 5);
        std::cout << "Sending Hello " << request_nbr << "..." << std::endl;
        socket.send (request);
        
        //  Get the reply.
        zmq::message_t reply;
        socket.recv (&reply);
        std::cout << "Received World " << request_nbr << std::endl;
    }
    
    return bRet;
}
