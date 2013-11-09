//
//  test_server.h
//  runnable-zmq
//
//  Created by builder on 13-11-9.
//  Copyright (c) 2013年 builder. All rights reserved.
//

#ifndef __runnable_zmq__test_server__
#define __runnable_zmq__test_server__

#include <iostream>

class CTestServer
{
public:
    CTestServer();
    virtual ~CTestServer();
    
public:
    bool test();
};

class CTestClient
{
public:
    CTestClient();
    virtual ~CTestClient();
    
public:
    bool test();
};



#endif /* defined(__runnable_zmq__test_server__) */
