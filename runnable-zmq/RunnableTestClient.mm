//
//  RunnableTestClient.m
//  runnable-zmq
//
//  Created by builder on 13-11-9.
//  Copyright (c) 2013年 builder. All rights reserved.
//

#include "test_server.hpp"

#import "RunnableTestClient.h"

@implementation RunnableTestClient

-(BOOL)beginTest
{
    BOOL bRet = NO;
    
    static CTestClient* pTestClient = nil;
    if( !pTestClient )
    {
        pTestClient = new CTestClient();
    }
    
    pTestClient->test();

    return bRet;
}

@end
