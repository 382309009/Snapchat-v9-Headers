//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "SCInnerPickerViewDataSource.h"
#import "SCInnerPickerViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString;

@interface SCPickerView : UIView <SCInnerPickerViewDataSource, SCInnerPickerViewDelegate, UIGestureRecognizerDelegate>
{
    id <SCPickerViewDataSource> _dataSource;
    id <SCPickerViewDelegate> _delegate;
    NSMutableArray *_containerViews;
    NSMutableArray *_innerPickerViews;
    UIView *_selectionAccessoryView;
    UIView *_selectionView;
}

@property(retain, nonatomic) UIView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) UIView *selectionAccessoryView; // @synthesize selectionAccessoryView=_selectionAccessoryView;
@property(retain, nonatomic) NSMutableArray *innerPickerViews; // @synthesize innerPickerViews=_innerPickerViews;
@property(retain, nonatomic) NSMutableArray *containerViews; // @synthesize containerViews=_containerViews;
@property(nonatomic) __weak id <SCPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <SCPickerViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)innerPickerviewTapped:(id)arg1;
- (int)rowForPointOffset:(float)arg1;
- (int)rowForPickerOffset:(float)arg1 inSection:(unsigned int)arg2;
- (int)currentRowForSection:(unsigned int)arg1;
- (void)scrollViewDidStopScrolling:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (unsigned int)numberOfRowsForSection:(unsigned int)arg1;
- (struct CGRect)innerPickerFrame;
- (unsigned int)selectedRowInSection:(unsigned int)arg1;
- (void)setSelectedRow:(unsigned int)arg1 inSection:(unsigned int)arg2;
- (BOOL)respondsToSelector:(SEL)arg1;
- (float)heightForRowForInnerPickerView:(id)arg1;
- (unsigned int)numberOfRowsForInnerPickerView:(id)arg1;
- (void)resetViewOnSelectionBar;
- (void)didStopOnRow:(unsigned int)arg1 inSection:(unsigned int)arg2;
- (void)innerPickerView:(id)arg1 didSelectItemAtRow:(unsigned int)arg2;
- (id)innerPickerView:(id)arg1 viewForRow:(unsigned int)arg2;
- (unsigned int)columnCount;
- (float)widthForSection:(unsigned int)arg1;
- (float)percentWidthForSection:(unsigned int)arg1;
- (float)percentStartForSection:(unsigned int)arg1;
- (struct CGRect)frameForInnerPickerViewAtSection:(unsigned int)arg1;
- (float)rowHeight;
- (void)frameChanged;
- (void)reloadData;
- (id)dequeueViewWithIdentifier:(id)arg1 forSection:(unsigned int)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reloadPickers;
- (void)dealloc;
- (void)initPickers;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
