//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class UIGestureRecognizer, UILongPressGestureRecognizer, UIPinchGestureRecognizer, UITapGestureRecognizer;

@protocol SCCameraOverlayDelegate <UIAlertViewDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate>
- (void)profileButtonPressed;
- (void)frontCameraButtonPressed;
- (void)flashPressed;
- (void)leftSwipe:(UIGestureRecognizer *)arg1;
- (void)replyBackButtonLeftPressed;
- (void)galleryButtonPressed;
- (void)longPress:(UILongPressGestureRecognizer *)arg1;
- (void)handleTapFrom:(UITapGestureRecognizer *)arg1;
- (void)handlePinchFrom:(UIPinchGestureRecognizer *)arg1;
- (void)doubleTap:(UIGestureRecognizer *)arg1;
@end
