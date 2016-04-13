//
//  ViewController.m
//  ZSSingletonTool
//
//  Created by shan on 16/4/13.
//  Copyright © 2016年 LZS. All rights reserved.
//

#import "ViewController.h"
#import "ZSTextTool.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
   
    
    
    ZSTextTool *tool = [ZSTextTool sharedshareTool];
    
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];

}

@end
