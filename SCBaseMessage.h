//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "SCMessage.h"
#import "SCMessageIterToken.h"
#import "SCMessageState.h"

@class NSDate, NSNumber, NSString, SCChatMessage;

@interface SCBaseMessage : NSObject <NSCoding, SCMessage, SCMessageState, SCMessageIterToken>
{
    BOOL _failedToSend;
    BOOL _releasedByFriend;
    BOOL _releasedByUser;
    BOOL _savedByUser;
    BOOL _savedByFriend;
    BOOL _sentByUser;
    BOOL _sending;
    BOOL _storyReply;
    BOOL _pending;
    SCChatMessage *_chatMessage;
    id <SCBaseMessageParametersDelegate> _delegate;
    unsigned int _friendSaveVersion;
    NSString *__id;
    NSString *_iterToken;
    NSString *_recipient;
    NSString *_sender;
    NSNumber *_sequenceNumber;
    NSString *_text;
    NSDate *_timestamp;
    NSDate *_sentTimestamp;
    NSDate *_viewedTimestamp;
    unsigned int _userSaveVersion;
    NSString *_conversationId;
    NSNumber *_lastFailedSequenceNumber;
}

+ (id)conversationIdForParticipants:(id)arg1;
+ (BOOL)showActivityIndicatorForBaseMessage:(id)arg1;
+ (id)iconImageForBaseMessage:(id)arg1;
+ (BOOL)hideActionTextForBaseMessage:(id)arg1;
+ (id)actionTextForBaseMessage:(id)arg1;
@property(retain, nonatomic) NSNumber *lastFailedSequenceNumber; // @synthesize lastFailedSequenceNumber=_lastFailedSequenceNumber;
@property(retain, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property(nonatomic, getter=isPending) BOOL pending; // @synthesize pending=_pending;
@property(nonatomic) BOOL storyReply; // @synthesize storyReply=_storyReply;
@property(nonatomic) unsigned int userSaveVersion; // @synthesize userSaveVersion=_userSaveVersion;
@property(retain, nonatomic) NSDate *viewedTimestamp; // @synthesize viewedTimestamp=_viewedTimestamp;
@property(retain, nonatomic) NSDate *sentTimestamp; // @synthesize sentTimestamp=_sentTimestamp;
@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSNumber *sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
@property(nonatomic) BOOL sending; // @synthesize sending=_sending;
@property(nonatomic) BOOL sentByUser; // @synthesize sentByUser=_sentByUser;
@property(retain, nonatomic) NSString *sender; // @synthesize sender=_sender;
@property(nonatomic) BOOL savedByFriend; // @synthesize savedByFriend=_savedByFriend;
@property(nonatomic) BOOL savedByUser; // @synthesize savedByUser=_savedByUser;
@property(nonatomic) BOOL releasedByUser; // @synthesize releasedByUser=_releasedByUser;
@property(nonatomic) BOOL releasedByFriend; // @synthesize releasedByFriend=_releasedByFriend;
@property(retain, nonatomic) NSString *recipient; // @synthesize recipient=_recipient;
@property(copy, nonatomic) NSString *iterToken; // @synthesize iterToken=_iterToken;
@property(retain, nonatomic) NSString *_id; // @synthesize _id=__id;
@property(nonatomic) unsigned int friendSaveVersion; // @synthesize friendSaveVersion=_friendSaveVersion;
@property(nonatomic) BOOL failedToSend; // @synthesize failedToSend=_failedToSend;
@property(nonatomic) __weak id <SCBaseMessageParametersDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCChatMessage *chatMessage; // @synthesize chatMessage=_chatMessage;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (BOOL)shouldNotifyUserOfFailure;
- (id)notificationType;
- (id)uploadSuccessUserDefaultsKey;
- (id)sendJSON;
- (id)unsaveJSON;
- (id)saveJSON;
- (id)chatMessageOfType:(int)arg1 parametersDelegate:(id)arg2 messageDelegate:(id)arg3;
- (id)messageParameters;
- (unsigned long long)sequenceValue;
- (BOOL)validSequence;
- (BOOL)isSendingOrHasFailed;
- (BOOL)isInvalidAfterUnarchiving;
- (id)messageRecipient;
- (id)messageSender;
- (id)feedDisplayTimestamp;
- (id)messageTimestamp;
- (BOOL)isUnread;
- (id)consistentId;
- (BOOL)shouldDisplayBelowFoldInChat;
- (BOOL)isSaved;
- (BOOL)isReleased;
- (BOOL)isSentToSelf;
- (BOOL)isSent;
- (void)unsave;
- (void)save;
- (BOOL)canUnsave;
- (BOOL)canSave;
- (void)markAsReleasedByFriendWithTimestamp:(id)arg1;
- (void)markAsReleasedByUser:(BOOL)arg1;
- (void)markAsReleasedByUser;
- (BOOL)shouldBeAddedAgainGivenClearedDictionary:(id)arg1;
- (id)clearedDictionary;
- (void)configureForRetryingToSendWithUpdatedTimestamp:(BOOL)arg1;
- (BOOL)timeToSendHasExpired;
- (void)messageUpdated;
- (void)sentWithSuccess:(BOOL)arg1 response:(id)arg2 overTCP:(BOOL)arg3;
- (void)sentWithSuccess:(BOOL)arg1 response:(id)arg2 overTCP:(BOOL)arg3 noAuth:(BOOL)arg4;
- (void)updateWithHighestFriendReleaseSequence:(unsigned long long)arg1;
- (void)updateWithMessageStateResponse:(id)arg1;
- (void)updateWithMessage:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (int)compare:(id)arg1;
- (id)newId;
- (void)configureReleaseStates;
- (void)configureSaveStateWithDictionary:(id)arg1;
- (id)initWithLastChatAction:(id)arg1 write:(BOOL)arg2 username:(id)arg3 recipientUsername:(id)arg4;
- (id)initWithSender:(id)arg1 recipient:(id)arg2;
- (id)initWithUsername:(id)arg1 dictionary:(id)arg2;
- (BOOL)isScreenshot;
- (BOOL)shouldShowFailure;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
