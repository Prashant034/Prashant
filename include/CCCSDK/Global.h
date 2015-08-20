//
//  Global.h
//  Component_PhotoCapture
//
//  Created by Viggnesh K on 2/6/15.
//  Copyright (c) 2015 wsm. All rights reserved.
//
#import "CCCNullability.h"
@class CCCAuth;
@class CCCFetchEstimate;
@class CCCUploadImages;
@class CCCNotificationService;
#ifndef CCCSDK_CCCCONSTANTS_H // constants_h
#define CCCSDK_CCCCONSTANTS_H// constants_h

//####################################### MESSAGE STARTS #######################################################################


#define COULD_NOT_SIGN_IN_MESSAGE_TITLE @"Could Not Sign In"
#define COULD_NOT_SIGN_IN_MESSAGE_SUBTITLE @"The information you entered was not found in our system. Please try again."

#define UNABLE_TO_COMPLETE_REQUEST_TITLE @"Unable to Complete Request"
#define UNABLE_TO_COMPLETE_REQUEST_SUBTITLE @"We were unable to process your reqest at this time. Please try again."

#define STORAGE_FULL_ALERT_TITLE @"Not Enough Storage"
#define STORAGE_FULL_ALERT_SUBTITLE @"Please free up space on your device to be able to take photos."

#define UNABLE_TO_UPLOAD_TITLE @"Unable to upload!"
#define UNABLE_TO_UPLOAD_SUBTITLE @"Unable to upload the images due to network issues. Check your internet connection and retry"


#define NO_INTERNET_TITLE @"Internet Connection Unavailable"
#define NO_INTERNET_SUBTITLE @"Please connect to the Internet to complete this action."

#define UNABLE_TO_REACH_SERVER_TITLE @"Unable to Complete Request"
#define UNABLE_TO_REACH_SERVER_SUBTITLE @"We were unable to process your request at this time.  Please try again."

#define REDIRECT_TO_SETTINGS_TITLE @"Allow Permissions to Continue"
#define REDIRECT_TO_SETTINGS_SUBTITLE @"Please go to Settings and enable the Location and Camera permissions for Express Estimate to continue."


#define INTERNAL_SERVER_ERROR @"Internal Server Error"

#define SERVER_ERROR_TITLE @"Server Error"
#define SERVER_ERROR_SUBTITLE @"The server either does not recognize the request method, or it lacks the ability to fulfill the request."

#define BAD_GATEWAY @"Bad Gateway"
#define SERVICE_UNAVAILABLE @"Service Unavailable"
#define GATEWAY_TIMEOUT @"Gateway Timeout"
#define HTTP_VERSION_NOT_SUPPORTED @"HTTP Version Not Supported"
#define UNKNOWN_ERROR @"Unknown Error"

#define CLIENT_ERROR_TITLE @"Client Error"
#define CLIENT_ERROR_SUBTITLE_BAD_REQUEST @"Bad Request"
#define CLIENT_ERROR_SUBTITLE_FORBIDDEN @"The request was a valid request, but the server is refusing to respond to it."
#define CLIENT_ERROR_SUBTITLE_NOTFOUND @"The requested resource could not be found"

#define SERVER_TIMEOUT_TITLE @"Request Timeout"
#define CLIENT_ERROR_SUBTITLE_REQUEST_TIMEOUT @"The server timed out waiting for the request."



//###################################################### MESSAGE ENDS ############################################################################################################





///--------------------------------------
/// @name Blocks
///--------------------------------------

typedef void (^CCCUserResultBlock)(CCCAuth *CCC_NULLABLE_S user, NSError *CCC_NULLABLE_S error);
typedef void (^CCCEstimateResultBlock)(CCCFetchEstimate *CCC_NULLABLE_S cccFetchEstimate, NSError *CCC_NULLABLE_S error);
typedef void (^CCCUploadImagesResultBlock)(CCCUploadImages *CCC_NULLABLE_S cccUploadImages, NSError *CCC_NULLABLE_S error);
typedef void (^CCCUploadImagesProgressHandler)(float  numberOfFinishedOperations, NSUInteger totalNumberOfOperations);
typedef void (^CCCNotificationBlock)(NSArray *CCC_NULLABLE_S notification, NSError *CCC_NULLABLE_S error);

#endif
