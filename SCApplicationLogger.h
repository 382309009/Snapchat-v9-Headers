//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SCApplicationLogger : NSObject
{
}

+ (id)sharedInstance;
- (void)logNotificationWhileBackgroundedWithPushNotification:(id)arg1;
- (void)logNotificationWhileOpenWithPushNotification:(id)arg1;
- (void)logNotificationHasNoTextFieldIfNecessary:(id)arg1;
- (void)logApplicationReceivedPushNotification:(id)arg1;
- (void)logApplicationOpenWithPushNotification:(id)arg1;
- (void)logApplicationOpenWithType:(id)arg1;
- (void)logApplicationOpen;
- (void)logApplicationClose;
- (void)logStart;

@end
