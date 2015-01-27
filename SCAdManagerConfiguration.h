//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SCStudySettings;

@interface SCAdManagerConfiguration : NSObject
{
    SCStudySettings *_studySettings;
}

@property(retain, nonatomic) SCStudySettings *studySettings; // @synthesize studySettings=_studySettings;
- (void).cxx_destruct;
- (unsigned int)maxOutstandingAdRequests;
- (id)networkCode;
- (BOOL)isActive;
- (double)adChunkImpressionDuration;
- (double)adSplashImpressionDuration;
- (void)ensureNonNilObjects;
- (id)initWithStudySettings:(id)arg1;
- (id)init;

@end
