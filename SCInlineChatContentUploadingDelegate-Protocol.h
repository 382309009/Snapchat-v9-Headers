//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCInlineChatContentMessage;

@protocol SCInlineChatContentUploadingDelegate <NSObject>
- (void)inlineChatContentDidLoseMedia:(SCInlineChatContentMessage *)arg1;
- (void)inlineChatContentDidFailUpload:(SCInlineChatContentMessage *)arg1;
- (void)inlineChatContentDidUpload:(SCInlineChatContentMessage *)arg1;
@end
