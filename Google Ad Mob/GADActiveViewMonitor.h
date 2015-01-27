//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSTimer, UIView;

@interface GADActiveViewMonitor : NSObject
{
    id <GADActiveViewMonitorDelegate> _delegate;
    struct CGRect _monitoredViewVisibleBounds;
    BOOL _monitoredViewVisible;
    BOOL _activeViewMonitorEnabled;
    UIView *_monitoredView;
    NSArray *_refreshIntervals;
    unsigned int _nextRefreshIntervalIndex;
    NSTimer *_updateViewBoundsTimer;
    struct dispatch_queue_s *_lockQueue;
}

@property(nonatomic) struct dispatch_queue_s *lockQueue; // @synthesize lockQueue=_lockQueue;
@property(nonatomic) BOOL activeViewMonitorEnabled; // @synthesize activeViewMonitorEnabled=_activeViewMonitorEnabled;
@property(retain, nonatomic) NSTimer *updateViewBoundsTimer; // @synthesize updateViewBoundsTimer=_updateViewBoundsTimer;
@property(nonatomic) unsigned int nextRefreshIntervalIndex; // @synthesize nextRefreshIntervalIndex=_nextRefreshIntervalIndex;
@property(readonly, copy, nonatomic) NSArray *refreshIntervals; // @synthesize refreshIntervals=_refreshIntervals;
@property(readonly, nonatomic) UIView *monitoredView; // @synthesize monitoredView=_monitoredView;
- (void).cxx_destruct;
@property(readonly, getter=isMonitoredViewVisible) BOOL monitoredViewVisible;
@property struct CGRect monitoredViewVisibleBounds;
@property __weak id <GADActiveViewMonitorDelegate> delegate;
- (void)updateViewBounds;
- (void)updateViewBoundsTimerCallback:(id)arg1;
- (double)nextRefreshInterval;
- (void)stopMonitoring;
- (void)sample;
- (void)startMonitoring;
- (void)dealloc;
- (id)init;
- (id)initWithView:(id)arg1 refreshIntervals:(id)arg2;

@end
