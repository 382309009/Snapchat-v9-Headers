//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface SCTipBalloon : UIView
{
    NSString *_text;
    NSString *_emoji;
}

@property(copy, nonatomic) NSString *emoji; // @synthesize emoji=_emoji;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (void)drawTextInContext:(struct CGContext *)arg1;
- (void)drawOutlineInContext:(struct CGContext *)arg1;
- (id)initAtPoint:(struct CGPoint)arg1 withText:(id)arg2 emoji:(id)arg3;
- (void)drawRect:(struct CGRect)arg1;

@end
