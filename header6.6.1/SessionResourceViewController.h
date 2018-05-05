//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IClearDataMgrExt-Protocol.h"
#import "MMRefreshTableFooterDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTableView, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, WCTimeLineFooterView;

@interface SessionResourceViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, IClearDataMgrExt, MMRefreshTableFooterDelegate>
{
    MMTableView *_tableView;
    WCTimeLineFooterView *_tableFooterView;
    UIImageView *_footerView;
    UIButton *_selectAllButton;
    UIButton *_deleteButton;
    UILabel *_sizeLabel;
    UILabel *_emptyTipLabel;
    UIActivityIndicatorView *_loadingIndicatorView;
    _Bool _hasLookDetailed;
    unsigned int _curMaxDataCount;
    vector_91fc892d _arrSelectedData;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onShowMoreAction;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onReturn;
- (void)onLookDetail:(id)arg1;
- (void)onDeleteSelectedData:(id)arg1;
- (void)deleteSelectedSessionKeepMsg:(_Bool)arg1;
- (void)onSelecteAll;
- (id)getDataSizeShowString:(const vector_91fc892d *)arg1;
- (unsigned long long)getDataSize:(const vector_91fc892d *)arg1;
- (id)getSelectButtonTitle;
- (void)onCleanedOver3MonthFileSize:(unsigned long long)arg1;
- (void)onLoadDataFinished;
- (_Bool)isSessionDataFull;
- (void)onReloadDataItem;
- (void)onSelectedDataChange;
- (void)loadMoreData;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)onLoadMore;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)initFooterPannelView;
- (void)updateFooterPannelView;
- (void)updateTableFooterView;
- (void)updateTableView;
- (void)initView;
- (struct CGRect)getTableViewFrame;
- (void)didAppear;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (_Bool)isDataEmpty;
- (void)initData;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

