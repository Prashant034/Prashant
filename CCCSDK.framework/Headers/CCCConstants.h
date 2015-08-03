//
//  CCCConstants.h
//  CCCSDK
//
//  Created by Viggnesh K on 4/15/15.
//  Copyright (c) 2015 cccis. All rights reserved.
//

#ifndef CCCSDK_CCCCONSTANTS_H // constants_h
#define CCCSDK_CCCCONSTANTS_H// constants_h

//#if TARGET_OS_IPHONE
#import "CCCNullability.h"

@class CCCAuth;
@class CCCFetchEstimate;
@class CCCUploadImages;
@class CCCNotificationService;
///--------------------------------------
/// @name Version
///--------------------------------------

#define CCCSDK_VERSION @"1.0.0"

#define SERVER_DEV @"http://52.1.160.19:8080/v1/mobsdk/"
#define SERVER_QA @"https://mcep-qa-mapis-00-138981838.us-east-1.elb.amazonaws.com:443/v1/mobsdk/"
#define SERVER_CT @"https://mcep-ct-mapis-c02-n000-2109739573.us-east-1.elb.amazonaws.com:443/v1/mobsdk/"
#define SERVER_PROD @"https://rest.mcep.cccis.com:443/v1/mobsdk/"
//#define COMP_CODE @"WFIC"
//#define COMP_CODE @"SA"
//#define COMP_CODE(isProd) @(isProd ? "SA" : "WFIC")
#define COMP_CODE(isTest) @(isTest ? "WFIC" : "SA")


#define ONE_TIME_HASH @"123456"
#define SDK_VERSION @"1.0"

#define SERVER_DEFAULT SERVER_QA
#define ENVIRONMENT @"qa"

#define SESSION_TOKEN @"ssid"
#define PASSCODE @"passcode"

///--------------------------------------
/// @name Blocks
///--------------------------------------

typedef void (^CCCUserResultBlock)(CCCAuth *CCC_NULLABLE_S user, NSError *CCC_NULLABLE_S error);
typedef void (^CCCEstimateResultBlock)(CCCFetchEstimate *CCC_NULLABLE_S cccFetchEstimate, NSError *CCC_NULLABLE_S error);
typedef void (^CCCUploadImagesResultBlock)(CCCUploadImages *CCC_NULLABLE_S cccUploadImages, NSError *CCC_NULLABLE_S error);
typedef void (^CCCUploadImagesProgressHandler)(float  numberOfFinishedOperations, NSUInteger totalNumberOfOperations);
typedef void (^CCCNotificationBlock)(NSArray *CCC_NULLABLE_S notification, NSError *CCC_NULLABLE_S error);
#endif
