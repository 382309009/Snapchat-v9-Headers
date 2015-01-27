//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView, UILabel;

@interface TapToSkipTutorialView : UIView
{
    UIImageView *_ghostView;
    UIImageView *_handView;
    UIImageView *_smokeView;
    UILabel *_tapToSkipText;
    UIView *_circleView;
}

@property(retain, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property(retain, nonatomic) UILabel *tapToSkipText; // @synthesize tapToSkipText=_tapToSkipText;
@property(retain, nonatomic) UIImageView *smokeView; // @synthesize smokeView=_smokeView;
@property(retain, nonatomic) UIImageView *handView; // @synthesize handView=_handView;
@property(retain, nonatomic) UIImageView *ghostView; // @synthesize ghostView=_ghostView;
- (void).cxx_destruct;
- (void)setupCircle;
- (void)setupText;
- (void)setupSmoke;
- (void)setupHand;
- (void)setupGhost;
- (void)setupTutorialImages;
- (id)showUpForDuration:(float)arg1 beginWithDelay:(float)arg2;
- (id)fadeInFadeOutAnimation:(BOOL)arg1 ForDuration:(float)arg2 beginWithDelay:(float)arg3;
- (id)circleAnimation;
- (id)handAnimation;
- (void)stopAllAnimations;
- (void)startTutorialAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end
