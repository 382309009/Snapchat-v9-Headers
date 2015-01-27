//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SCMessage.h"

@class NSString;

@interface SCTodayPlaceholder : NSObject <SCMessage>
{
}

- (id)sentTimestamp;
- (BOOL)isSent;
- (BOOL)isSendingOrHasFailed;
- (BOOL)failedToSend;
- (BOOL)sending;
- (BOOL)timeToSendHasExpired;
- (BOOL)sentByUser;
- (id)clearedDictionary;
- (id)consistentId;
- (BOOL)isInvalidAfterUnarchiving;
- (BOOL)isUnread;
- (BOOL)shouldDisplayBelowFoldInChat;
- (id)messageTimestamp;
- (id)feedDisplayTimestamp;
- (id)messageRecipient;
- (id)messageSender;
- (id)_id;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
