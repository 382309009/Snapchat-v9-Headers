//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSString;

@interface BCOVAnalyticsSessionDigester : NSObject
{
    NSString *_baseURLString;
    NSOperationQueue *_urlConnectionQueue;
}

@property(retain, nonatomic) NSOperationQueue *urlConnectionQueue; // @synthesize urlConnectionQueue=_urlConnectionQueue;
@property(copy, nonatomic) NSString *baseURLString; // @synthesize baseURLString=_baseURLString;
- (void).cxx_destruct;
- (void)digestEvent:(id)arg1;
- (id)init;

@end
