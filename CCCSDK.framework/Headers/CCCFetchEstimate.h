//
//  CCCFetchEstimate.h
//  CCCSDK
//
//  Created by Viggnesh K on 4/20/15.
//  Copyright (c) 2015 cccis. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "CCCConstants.h"

@interface CCCFetchEstimate : NSObject
@property (CCC_NULLABLE_PROPERTY nonatomic, strong) NSNumber *estimatedPay;
@property (CCC_NULLABLE_PROPERTY nonatomic, strong) NSNumber *estimatedDeductible;
@property (CCC_NULLABLE_PROPERTY nonatomic, strong) NSDate *estimateCreatedOn;
@property (CCC_NULLABLE_PROPERTY nonatomic, strong) NSDate *paymentAccepted;
@property (CCC_NULLABLE_PROPERTY nonatomic, strong) NSString *pdfFilePath;
@property (CCC_NULLABLE_PROPERTY nonatomic, strong) NSData *pdfData;

+ (void) fetchEstimateValueWithBlock:(CCC_NULLABLE CCCEstimateResultBlock)block;
+ (void) fetchEstimateValueInBackgroundWithBlock:(CCC_NULLABLE CCCEstimateResultBlock)block;

+ (void) fetchEstimatePDFInBackgroundWithBlock:(CCC_NULLABLE CCCEstimateResultBlock)block;
+ (void) fetchEstimatePDFWithBlock:(CCC_NULLABLE CCCEstimateResultBlock)block;

@end
