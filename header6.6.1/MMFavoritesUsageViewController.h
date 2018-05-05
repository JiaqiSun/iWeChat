//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavoritesUsageDataControllerDelegate-Protocol.h"
#import "IFavoritesExt-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class FavSightView, MMFavoritesUsageDataController, MMTableView, MMUIWindow, NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface MMFavoritesUsageViewController : MMUIViewController <FavoritesUsageDataControllerDelegate, IFavoritesExt, WCActionSheetDelegate>
{
    MMFavoritesUsageDataController *m_dataController;
    UIView *m_multiSelectActionView;
    UIButton *m_delBtn;
    UILabel *m_multiTipLabel;
    MMTableView *m_tableView;
    UIView *m_emptyView;
    UIView *m_loadingView;
    UIView *m_footerView;
    UIActivityIndicatorView *m_activityView;
    MMUIWindow *m_fullScreenWindow;
    FavSightView *m_sightView;
    _Bool m_bFistLoadFromCache;
    int nLeftSize;
    int fromScene;
}

@property(nonatomic) int fromScene; // @synthesize fromScene;
- (void).cxx_destruct;
- (void)OnGetNextPageFavoritesCapacityItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (void)OnGetFirstPageFavoritesCapacityItemList:(id)arg1 ErrCode:(int)arg2 HasMoreItems:(_Bool)arg3;
- (_Bool)onResponseForSelectFavItem:(id)arg1;
- (void)onSelectCountChanged:(unsigned long long)arg1;
- (void)reloadTableAtIndexPath:(id)arg1;
- (void)reloadTableView;
- (void)showEmptyView;
- (void)onLoadingMore;
- (id)getCurrentViewController;
- (void)stopActivityLoading;
- (double)getContentOffsetAfterAdd:(id)arg1;
- (void)onBtnEdit;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)viewDidTransitionToNewSize;
- (void)showChoosenCapacityUI;
- (void)showLeftCapacityUI;
- (int)getSelectCapacity;
- (void)onDeleteItems;
- (void)hideSelectActionView;
- (void)initMultiSelectActionView;
- (void)initEmptyView;
- (void)HideLoadingView;
- (void)initLoadingView;
- (void)initTableFooterView;
- (void)updateTableFooterHasMore:(_Bool)arg1;
- (void)initTableView;
- (void)setViewTitle;
- (void)initNavigationBar;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

