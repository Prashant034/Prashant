//
//  CCCNotificationService.h
//  CCCSDK
//
//  Created by Viggnesh K on 5/13/15.
//  Copyright (c) 2015 cccis. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Global.h"


@interface CCCNotificationService : NSObject

+ (void) fetchCCCNotificationWithSessionID :(CCC_NULLABLE NSString *) sessionID completionBlock:(CCC_NULLABLE CCCNotificationBlock)block;
+ (void) fetchCCCNotificationInBackgroundWithSessionID :(CCC_NULLABLE NSString *) sessionID completionBlock:(CCC_NULLABLE CCCNotificationBlock)block;

@end
