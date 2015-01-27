//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADInAppPurchase, NSString, SKPaymentTransaction;

@interface GADDefaultInAppPurchase : NSObject
{
    NSString *_productID;
    int _quantity;
    SKPaymentTransaction *_paymentTransaction;
    GADInAppPurchase *_inAppPurchase;
}

+ (void)disableDefaultPurchaseFlow;
+ (void)enableDefaultPurchaseFlowWithDelegate:(id)arg1;
@property(retain, nonatomic) GADInAppPurchase *inAppPurchase; // @synthesize inAppPurchase=_inAppPurchase;
@property(retain, nonatomic) SKPaymentTransaction *paymentTransaction; // @synthesize paymentTransaction=_paymentTransaction;
@property(nonatomic) int quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void).cxx_destruct;
- (void)finishTransaction;

@end
