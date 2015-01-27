//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SCHeaderDataSource.h"
#import "SCHeaderDelegate.h"
#import "UIWebViewDelegate.h"

@class NSString, NSURL, SCHeader, SCPageLoadErrorView, SCPayment, UILabel, UIView, UIWebView;

@interface SCURLBlockerViewController : UIViewController <UIWebViewDelegate, SCHeaderDataSource, SCHeaderDelegate>
{
    id <SCURLBLockerViewControllerDelegate> _delegate;
    NSURL *_url;
    SCPayment *_blockedPayment;
    SCHeader *_header;
    UILabel *_resultsLabel;
    UIView *_resultsView;
    UIWebView *_webView;
    SCPageLoadErrorView *_pageLoadErrorView;
}

+ (BOOL)isFailureURLRequest:(id)arg1;
+ (BOOL)isSuccessURLRequest:(id)arg1;
@property(retain, nonatomic) SCPageLoadErrorView *pageLoadErrorView; // @synthesize pageLoadErrorView=_pageLoadErrorView;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIView *resultsView; // @synthesize resultsView=_resultsView;
@property(retain, nonatomic) UILabel *resultsLabel; // @synthesize resultsLabel=_resultsLabel;
@property(retain, nonatomic) SCHeader *header; // @synthesize header=_header;
@property(retain, nonatomic) SCPayment *blockedPayment; // @synthesize blockedPayment=_blockedPayment;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak id <SCURLBLockerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)presentResultsViewForSuccess:(BOOL)arg1;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)leftButtonPressed;
- (id)imageForRightButtonInState:(unsigned int)arg1;
- (id)imageForLeftButtonInState:(unsigned int)arg1;
- (id)textColorForHeader:(id)arg1;
- (id)titleForHeader:(id)arg1;
- (id)backgroundColorForHeader;
- (void)retryLoadingRequest;
- (void)presentReloadView;
- (void)viewDidAppear:(BOOL)arg1;
- (void)initResultsView;
- (void)initWebView;
- (void)initHeader;
- (void)loadView;
- (id)initWithPayment:(id)arg1 url:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
