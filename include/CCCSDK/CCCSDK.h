//
//  CCCSDK.h
//  CCCSDK
//
//  Created by Prashant Kumar Singh on 8/20/15.
//  Copyright (c) 2015 Prashant Kumar Singh. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

//! Project version number for CCCSDK.
FOUNDATION_EXPORT double CCCSDKVersionNumbe;

//! Project version string for CCCSDK.
FOUNDATION_EXPORT const unsigned char CCCSDKVersionString[];



// In this header, you should import all the public headers of your framework using statements like #import <CCCSDK/PublicHeader.h>
#import "CCCAuth.h"
#import "CCCFetchEstimate.h"
#import "CCCUploadImages.h"
#import "CCCNotificationService.h"

@interface CCCSDK : NSObject

/*! Get the shared instance of the CCCSDK for iOS class. */
+ (CCCSDK *)sharedInstance;


/*! Initialize CCCCSK with environment and company code */
- (void) initializeCCCSDKWithCompanyCode :(NSString *)companyCode serverEnvironment:(NSString *) environment;



/*! set or get the environemnt to which the CCCSDK points to */
@property(nonatomic, retain) NSString *serverEnviroment;

/*! set or get the companycode to which the CCCSDK points to */
@property(nonatomic, retain) NSString *companyCode;

@end
