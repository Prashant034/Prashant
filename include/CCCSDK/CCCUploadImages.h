//
//  CCCUploadImages.h
//  CCCSDK
//
//  Created by Viggnesh K on 4/22/15.
//  Copyright (c) 2015 cccis. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Global.h"
@interface CCCUploadImages : NSObject

@property (nonatomic, assign) BOOL uploadStatus;
@property (CCC_NULLABLE_PROPERTY nonatomic, assign) __block NSString *uploadStatusText;
@property (CCC_NULLABLE_PROPERTY nonatomic, assign) __block NSMutableDictionary *imageDict;



+(void) uploadImagesInBackgroundWithImageSet:(nullable NSArray *)imageSet sessionID :(nullable NSString *)ssid  completionBlock:(nullable CCCUploadImagesResultBlock)block progressBlock:(nullable CCCUploadImagesProgressHandler)progressBlock;



@end
