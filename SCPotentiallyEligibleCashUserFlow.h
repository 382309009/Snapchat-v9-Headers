//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCCashIneligibleVCDelegate.h"
#import "SCCashTOSDelegate.h"
#import "SCMobileSettingsDelegate.h"

@class NSString, UIViewController;

@interface SCPotentiallyEligibleCashUserFlow : NSObject <SCCashTOSDelegate, SCMobileSettingsDelegate, SCCashIneligibleVCDelegate>
{
    BOOL _userMobileAvailableOnClient;
    id <SCPotentiallyEligibleFlowDelegate> _delegate;
    NSString *_flowStartingPointKey;
    UIViewController *_viewController;
}

@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) BOOL userMobileAvailableOnClient; // @synthesize userMobileAvailableOnClient=_userMobileAvailableOnClient;
@property(copy, nonatomic) NSString *flowStartingPointKey; // @synthesize flowStartingPointKey=_flowStartingPointKey;
@property(nonatomic) __weak id <SCPotentiallyEligibleFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)okayButtonPressed;
- (void)presentIneligibleView;
- (void)presentVerifyMobileFlow;
- (void)presentTOSFlow;
- (void)determineMobileFlow;
- (void)determineTOSFlow;
- (void)updateServersForMobile;
- (void)updateUserTOSStatus;
- (void)verifyMobileWasCancelled;
- (void)verifyMobileDidSucceed;
- (void)didCancelCashTOS;
- (void)didAcceptCashTOS;
- (void)beginFlowOnController:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
