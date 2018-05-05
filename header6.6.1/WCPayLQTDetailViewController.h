//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTableView, NSString;
@protocol WCPayLQTDetailViewControllerDelegate;

@interface WCPayLQTDetailViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>
{
    _Bool _bIsClosingAccount;
    id <WCPayLQTDetailViewControllerDelegate> _delegate;
    MMTableView *_tableView;
}

@property(nonatomic) _Bool bIsClosingAccount; // @synthesize bIsClosingAccount=_bIsClosingAccount;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <WCPayLQTDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleClickLQTTinyApp;
- (_Bool)hasTinyAppEnterance;
- (void)bannerBtnClick;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)fetchBtnClick;
- (void)saveBtnClick;
- (void)footerButtonClick;
- (void)rightBarButtonClick;
- (void)leftBarButtonClick;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)makeTinyAppContent:(id)arg1;
- (void)makeSepbarCellContent:(id)arg1;
- (void)makeDetailEnteranceContent:(id)arg1 indexPath:(id)arg2;
- (void)makeDetailMainContent:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)setupTableFooterView;
- (void)setupTableHeaderView;
- (void)setupContentView;
- (double)tableViewTinyAppContentHeight;
- (double)tableViewOtherContentHeight;
- (double)tableViewMainContentHeight;
- (void)refreshViewWithData:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillPop:(_Bool)arg1;
- (_Bool)useTransparentNavibar;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

