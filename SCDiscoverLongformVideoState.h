//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface SCDiscoverLongformVideoState : NSObject
{
    BOOL _isViewVisible;
    id <SCDiscoverLongformVideoStateDelegate> _delegate;
    int _stateTag;
    NSMutableArray *_stateTagHistory;
}

+ (id)descriptionForAction:(int)arg1;
+ (id)descriptionForStateTag:(int)arg1;
@property(retain, nonatomic) NSMutableArray *stateTagHistory; // @synthesize stateTagHistory=_stateTagHistory;
@property(nonatomic) BOOL isViewVisible; // @synthesize isViewVisible=_isViewVisible;
@property(nonatomic) int stateTag; // @synthesize stateTag=_stateTag;
@property(nonatomic) __weak id <SCDiscoverLongformVideoStateDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)isWifi;
- (void)updateWithAction:(int)arg1;
- (id)initWithDelegate:(id)arg1;
- (BOOL)shouldShowPlayerView;
- (BOOL)shouldShowPlayButton;
- (BOOL)shouldShowActivityIndicator;

@end
