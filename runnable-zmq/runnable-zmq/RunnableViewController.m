//
//  RunnableViewController.m
//  runnable-zmq
//
//  Created by builder on 13-11-9.
//  Copyright (c) 2013年 builder. All rights reserved.
//

#import "RunnableTestServer.h"
#import "RunnableTestClient.h"

#import "RunnableViewController.h"

@interface RunnableViewController ()

@end

@implementation RunnableViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)ClickMe:(id)sender
{
    RunnableTestServer* pTestServer = [[RunnableTestServer alloc] init];
    [pTestServer beginTest];
}

- (IBAction)ClickMe2:(id)sender
{
    RunnableTestClient* pTestClient = [[RunnableTestClient alloc] init];
    [pTestClient beginTest];
}

@end
