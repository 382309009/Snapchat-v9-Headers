//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMessage.h"
#import "SCMessageIterToken.h"
#import "SCMessageState.h"
#import "SCPaymentMessageDelegate.h"
#import "SCSendStateDelegate.h"

@class NSArray, NSDate, NSString, SCPayment, SCPaymentMessageSendState;

@interface SCPaymentMessage : NSObject <SCPaymentMessageDelegate, SCMessage, SCMessageState, SCMessageIterToken, SCSendStateDelegate>
{
    BOOL _savedByUser;
    BOOL _savedByFriend;
    BOOL _releasedByUser;
    BOOL _releasedByFriend;
    BOOL _swipeToSend;
    BOOL _swipePaymentRainPresented;
    BOOL _pendingSaveWrite;
    BOOL _pendingViewedWrite;
    BOOL _seenFromSnapchatServer;
    NSString *_iterToken;
    SCPayment *_payment;
    SCPaymentMessageSendState *_sendState;
    unsigned int _userSaveVersion;
    unsigned int _friendSaveVersion;
    NSString *_text;
    NSArray *_cashTagRanges;
    NSDate *_creationTimestamp;
    NSDate *_sentTimestamp;
    NSDate *_updateTimestamp;
    int _viewedTransactionStatus;
}

+ (id)cashTagsJsonFromRanges:(id)arg1;
+ (id)rangesFromCashTagsJson:(id)arg1;
+ (BOOL)shouldResolveBlockersForPaymentMessage:(id)arg1;
+ (id)chatIconImageForPaymentMessage:(id)arg1;
+ (BOOL)isLargeIconForPaymentMessage:(id)arg1;
+ (id)actionTextForPaymentMessage:(id)arg1;
+ (id)subtextForPaymentMessage:(id)arg1;
+ (BOOL)shouldShowSubtextForPaymentMessage:(id)arg1;
+ (BOOL)shouldShowTextForPaymentMessage:(id)arg1;
+ (id)feedActionTextForPaymentMessage:(id)arg1;
+ (id)iconImageForPaymentMessage:(id)arg1;
+ (BOOL)hideActionTextForPaymentMessage:(id)arg1;
+ (BOOL)showActivityIndicatorForPaymentMessage:(id)arg1;
@property(nonatomic) int viewedTransactionStatus; // @synthesize viewedTransactionStatus=_viewedTransactionStatus;
@property(nonatomic) BOOL seenFromSnapchatServer; // @synthesize seenFromSnapchatServer=_seenFromSnapchatServer;
@property(nonatomic) BOOL pendingViewedWrite; // @synthesize pendingViewedWrite=_pendingViewedWrite;
@property(nonatomic) BOOL pendingSaveWrite; // @synthesize pendingSaveWrite=_pendingSaveWrite;
@property(nonatomic) BOOL swipePaymentRainPresented; // @synthesize swipePaymentRainPresented=_swipePaymentRainPresented;
@property(nonatomic) BOOL swipeToSend; // @synthesize swipeToSend=_swipeToSend;
@property(retain, nonatomic) NSDate *updateTimestamp; // @synthesize updateTimestamp=_updateTimestamp;
@property(retain, nonatomic) NSDate *sentTimestamp; // @synthesize sentTimestamp=_sentTimestamp;
@property(retain, nonatomic) NSDate *creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(copy, nonatomic) NSArray *cashTagRanges; // @synthesize cashTagRanges=_cashTagRanges;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) BOOL releasedByFriend; // @synthesize releasedByFriend=_releasedByFriend;
@property(nonatomic) BOOL releasedByUser; // @synthesize releasedByUser=_releasedByUser;
@property(nonatomic) unsigned int friendSaveVersion; // @synthesize friendSaveVersion=_friendSaveVersion;
@property(nonatomic) unsigned int userSaveVersion; // @synthesize userSaveVersion=_userSaveVersion;
@property(nonatomic) BOOL savedByFriend; // @synthesize savedByFriend=_savedByFriend;
@property(nonatomic) BOOL savedByUser; // @synthesize savedByUser=_savedByUser;
@property(retain, nonatomic) SCPaymentMessageSendState *sendState; // @synthesize sendState=_sendState;
@property(retain, nonatomic) SCPayment *payment; // @synthesize payment=_payment;
@property(copy, nonatomic) NSString *iterToken; // @synthesize iterToken=_iterToken;
- (void).cxx_destruct;
- (BOOL)mayHaveBlockers;
- (BOOL)shouldAutomaticallyMarkAsViewed;
- (void)successfullyUpdatedRemoteSaveStateWithSaveVersion:(unsigned int)arg1;
- (void)successfullyUpdatedRemoteViewedStateWithTransactionStatus:(int)arg1;
- (BOOL)shouldUpdateRemoteSaveState;
- (BOOL)shouldUpdateRemoteViewedState;
- (BOOL)shouldBeAddedAgainGivenClearedDictionary:(id)arg1;
- (id)clearedDictionary;
- (unsigned int)unrainedAmountInDollarBills;
- (BOOL)timeToSendHasExpired;
- (BOOL)retriableAfterFailToSend;
- (BOOL)failedToSend;
- (BOOL)sending;
- (void)sendStateChanged;
- (BOOL)isSendingOrHasFailed;
- (id)consistentId;
- (BOOL)isInvalidAfterUnarchiving;
- (BOOL)isUnread;
- (BOOL)shouldDisplayBelowFoldInChat;
- (id)feedDisplayTimestamp;
- (id)messageTimestamp;
- (id)messageRecipient;
- (id)messageSender;
- (void)messageUpdated;
- (void)paymentDidChange;
- (void)paymentStatusDidChange:(id)arg1;
- (void)paymentBlockersDidChange:(id)arg1;
- (void)markAsReleasedByFriendWithTimestamp:(id)arg1;
- (BOOL)canRelease;
- (void)markAsReleasedByUser:(BOOL)arg1;
- (BOOL)canUnsave;
- (BOOL)canSave;
- (BOOL)isSaved;
- (BOOL)isSent;
- (BOOL)isBlocked;
- (BOOL)isReleased;
@property(readonly, copy, nonatomic) NSString *_id;
@property(readonly, nonatomic) BOOL sentByUser;
@property(readonly, copy, nonatomic) NSString *recipient;
@property(readonly, copy, nonatomic) NSString *sender;
- (void)markAsInferredUnsavedByFriend;
- (void)unsave;
- (void)save;
- (void)updateWithPaymentMessage:(id)arg1;
- (BOOL)updateSentTimestampToNow;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;
- (id)initWithPayment:(id)arg1 text:(id)arg2 cashTagRanges:(id)arg3 swipe:(BOOL)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
