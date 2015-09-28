//
//  Macro.h
//  UJob
//
//  Created by user on 15/8/27.
//  Copyright (c) 2015年 JenuryCheng. All rights reserved.
//

#ifndef UJob_Macro_h
#define UJob_Macro_h

#import "UIView+MJExtension.h"

#define BByellowcolor [UIColor colorWithRed:253.0/255.0 green:131.0/255.0 blue:58.0/255.0 alpha:1.0]
#define BBbluecolor [UIColor colorWithRed:45.0/255.0 green:175.0/255.0 blue:254.0/255.0 alpha:1.0]
#define BBgraycolor [UIColor colorWithRed:245.0/255.0 green:245.0/255.0 blue:245.0/255.0 alpha:1.0]
#define BBWidth self.view.frame.size.width
#define BBHeight  self.view.frame.size.height
#define BBBtnHeight 45
#define BBLabelHeight 25

#define iPhone4s ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size) : NO)
#define iPhone6Plus ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size) : NO)

#define NOTIFICATION_LOGOUT     @"NOTIFICATION_LOGOUT"

#define SCREEN_WIDTH [UIScreen mainScreen].bounds.size.width
#define SCREEN_HEIGHT [UIScreen mainScreen].bounds.size.height

#define COLOR_THEME         [UIColor colorWithRed:244/255.0 green:147/255.0 blue:50/255.0 alpha:1]
#define COLOR_LIGHT_GRAY    [UIColor colorWithWhite:0.95 alpha:1]
#define COLOR_DARK_GRAY     [UIColor colorWithWhite:0.5 alpha:1]

#define FONT_SMALLER    [UIFont systemFontOfSize:12]
#define FONT_SMALL      [UIFont systemFontOfSize:14]
#define FONT_MID        [UIFont systemFontOfSize:17]
#define FONT_BIG        [UIFont systemFontOfSize:20]

#define CC_SIGN    Global_Sign = YES;

#define KEY_MAP     @"e261ec894bbd26dde794faf02de4266b"

//ShareSDK  debug
#define SHARE_SDK_SMS_KEY       @"5b2655c71290"//@"aad5b98f5640"
#define SHARE_SDK_SMS_SECRET    @"55988074b9a3faadffa6f74cd3ae7845"//@"f28315a4fa8eca5fa2b6470695996d78"

#define SHARE_SDK_KEY           @"ad76ad78ad02"

#endif
