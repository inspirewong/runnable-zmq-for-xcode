//
//  RunnableTestServer.m
//  runnable-zmq
//
//  Created by builder on 13-11-9.
//  Copyright (c) 2013年 builder. All rights reserved.
//


#include "test_server.hpp"

#import "RunnableTestServer.h"

@implementation RunnableTestServer

-(BOOL)beginTest
{
    BOOL bRet = NO;
    
    static CTestServer* pTestServer = nil;
    if( !pTestServer )
    {
        dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^(void) {
            
            pTestServer = new CTestServer();
            pTestServer->test();
            //delete pTestServer;
            
        });
    }
    
    return bRet;
}

@end
