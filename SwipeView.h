//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, UIScrollView;

@interface SwipeView : UIView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _truncateFinalPage;
    BOOL _pagingEnabled;
    BOOL _scrollEnabled;
    BOOL _wrapEnabled;
    BOOL _delaysContentTouches;
    BOOL _bounces;
    BOOL _scrolling;
    BOOL _defersItemViewLoading;
    BOOL _vertical;
    BOOL _suppressScrollEvent;
    id <SwipeViewDataSource> _dataSource;
    id <SwipeViewDelegate> _delegate;
    int _numberOfItems;
    int _itemsPerPage;
    int _currentItemIndex;
    int _alignment;
    float _scrollOffset;
    float _decelerationRate;
    UIScrollView *_scrollView;
    NSMutableDictionary *_itemViews;
    NSMutableSet *_itemViewPool;
    int _previousItemIndex;
    float _startOffset;
    float _endOffset;
    float _lastUpdateOffset;
    NSTimer *_timer;
    struct CGSize _itemSize;
    struct CGPoint _previousContentOffset;
    double _scrollDuration;
    double _startTime;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) float lastUpdateOffset; // @synthesize lastUpdateOffset=_lastUpdateOffset;
@property(nonatomic) float endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) float startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double scrollDuration; // @synthesize scrollDuration=_scrollDuration;
@property(nonatomic) BOOL suppressScrollEvent; // @synthesize suppressScrollEvent=_suppressScrollEvent;
@property(nonatomic) struct CGPoint previousContentOffset; // @synthesize previousContentOffset=_previousContentOffset;
@property(nonatomic) int previousItemIndex; // @synthesize previousItemIndex=_previousItemIndex;
@property(retain, nonatomic) NSMutableSet *itemViewPool; // @synthesize itemViewPool=_itemViewPool;
@property(retain, nonatomic) NSMutableDictionary *itemViews; // @synthesize itemViews=_itemViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic, getter=isVertical) BOOL vertical; // @synthesize vertical=_vertical;
@property(nonatomic) BOOL defersItemViewLoading; // @synthesize defersItemViewLoading=_defersItemViewLoading;
@property(nonatomic, getter=isScrolling) BOOL scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic) float decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(nonatomic) BOOL bounces; // @synthesize bounces=_bounces;
@property(nonatomic) BOOL delaysContentTouches; // @synthesize delaysContentTouches=_delaysContentTouches;
@property(nonatomic, getter=isWrapEnabled) BOOL wrapEnabled; // @synthesize wrapEnabled=_wrapEnabled;
@property(nonatomic, getter=isScrollEnabled) BOOL scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic, getter=isPagingEnabled) BOOL pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic) float scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(nonatomic) int alignment; // @synthesize alignment=_alignment;
@property(nonatomic) int currentItemIndex; // @synthesize currentItemIndex=_currentItemIndex;
@property(nonatomic) BOOL truncateFinalPage; // @synthesize truncateFinalPage=_truncateFinalPage;
@property(nonatomic) int itemsPerPage; // @synthesize itemsPerPage=_itemsPerPage;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(readonly, nonatomic) int numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(nonatomic) __weak id <SwipeViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SwipeViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)didTap:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)viewOrSuperviewHandlesTouches:(id)arg1;
- (int)viewOrSuperviewIndex:(id)arg1;
- (void)didMoveToSuperview;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)reloadData;
- (void)reloadItemAtIndex:(int)arg1;
- (void)loadUnloadViews;
- (void)updateItemSizeAndCount;
- (id)loadViewAtIndex:(int)arg1;
- (void)scrollToPage:(int)arg1 duration:(double)arg2;
- (void)scrollToItemAtIndex:(int)arg1 duration:(double)arg2;
- (void)scrollByNumberOfItems:(int)arg1 duration:(double)arg2;
- (void)scrollToOffset:(float)arg1 duration:(double)arg2;
- (void)scrollByOffset:(float)arg1 duration:(double)arg2;
@property(nonatomic) int currentPage;
- (float)minScrollDistanceFromOffset:(float)arg1 toOffset:(float)arg2;
- (int)minScrollDistanceFromIndex:(int)arg1 toIndex:(int)arg2;
@property(readonly, nonatomic) int numberOfPages;
- (void)setContentOffsetWithoutEvent:(struct CGPoint)arg1;
- (float)clampedOffset:(float)arg1;
- (int)clampedIndex:(int)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)step;
- (float)easeInOut:(float)arg1;
- (void)didScroll;
- (id)dequeueItemView;
- (void)queueItemView:(id)arg1;
- (void)layoutSubviews;
- (void)updateLayout;
- (void)layOutItemViews;
- (void)setFrameForView:(id)arg1 atIndex:(int)arg2;
- (float)offsetForItemAtIndex:(int)arg1;
- (void)updateScrollViewDimensions;
- (void)updateScrollOffset;
- (void)setItemView:(id)arg1 forIndex:(int)arg2;
- (int)indexOfItemViewOrSubview:(id)arg1;
- (int)indexOfItemView:(id)arg1;
@property(readonly, nonatomic) UIView *currentItemView;
- (id)itemViewAtIndex:(int)arg1;
@property(readonly, nonatomic) NSArray *visibleItemViews;
@property(readonly, nonatomic) NSArray *indexesForVisibleItems;
@property(readonly, nonatomic, getter=isDecelerating) BOOL decelerating;
@property(readonly, nonatomic, getter=isDragging) BOOL dragging;
- (id)panGestureRecognizer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
