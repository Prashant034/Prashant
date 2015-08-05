//
//  CCCNotificationService.h
//  CCCSDK
//
//  Created by Viggnesh K on 5/13/15.
//  Copyright (c) 2015 cccis. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCCConstants.h"

@interface CCCNotificationService : NSObject

+ (void) fetchCCCNotificationWithBlock:(CCC_NULLABLE CCCNotificationBlock)block;

@end
