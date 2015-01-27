//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSDictionary, NSString;

@interface SCEvent : NSObject
{
    NSString *_eventName;
    NSDictionary *_parameters;
    NSDictionary *_secretParameters;
    NSDictionary *_metrics;
    NSDate *_timestamp;
}

@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSDictionary *metrics; // @synthesize metrics=_metrics;
@property(retain, nonatomic) NSDictionary *secretParameters; // @synthesize secretParameters=_secretParameters;
@property(retain, nonatomic) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (id)dictionary;
- (id)initWithName:(id)arg1 parameters:(id)arg2 secretParameters:(id)arg3 metrics:(id)arg4;

@end
