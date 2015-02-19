//
//  ViewController.m
//  AGDefinesExamples
//
//  Created by develop on 18/02/15.
//  Copyright (c) 2015 Allgoritm LLC. All rights reserved.
//

#import "ViewController.h"

#import "AGDefines.h"

@interface ViewController () <UIAlertViewDelegate>

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
//    AGShowAlertOK(@"AGShowAlertOK", @"msg");
//    AGShowAlertOKDelegate(@"AGShowAlertOKDelegate", @"msg2", self);
//    AGShowAlert(@"title", @"msg", self, @"cancel");
    AGShowAlertOK(@"AGShowAlertOK", @"q");
    AGShowAlertOKDelegate(@"AGShowAlertOKDelegate", @"w");
}

#pragma mark - UIAlertViewDelegate
-(void)alertView:(UIAlertView *)alertView clickedButtonAtIndex:(NSInteger)buttonIndex{
    NSLog(@"1");
}

@end
