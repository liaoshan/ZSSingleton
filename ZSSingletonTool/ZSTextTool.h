//
//  ZSTextTool.h
//  ZSSingletonTool
//
//  Created by shan on 16/4/13.
//  Copyright © 2016年 LZS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "ZSSingletonTool.h"

@interface ZSTextTool : NSObject

/**
 *  使用：导入"ZSSingletonTool.h"
    在.h文件 使用ZSSingleton_h
    在.m文件 使用ZSSingleton_m
 
    在.m文件中，已经判断了是ARC，或者是MRC了
 */

ZSSingleton_h(shareTool)

@end
