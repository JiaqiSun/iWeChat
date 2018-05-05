//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTableView, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UIView, WebRecordDB;

@interface VisitHistoryViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>
{
    _Bool _hasClickOpenTipBtn;
    MMTableView *_tableView;
    NSMutableArray *_records;
    MMUILabel *_head;
    UIView *_navBarBkg;
    MMUILabel *_bottomLabel;
    WebRecordDB *_recordDb;
    MMUILabel *_cenerTitleTip;
    MMUILabel *_cenerDetailTip;
    UIButton *_openTipBtn;
    UIImageView *_iconImageView;
}

@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) _Bool hasClickOpenTipBtn; // @synthesize hasClickOpenTipBtn=_hasClickOpenTipBtn;
@property(retain, nonatomic) UIButton *openTipBtn; // @synthesize openTipBtn=_openTipBtn;
@property(retain, nonatomic) MMUILabel *cenerDetailTip; // @synthesize cenerDetailTip=_cenerDetailTip;
@property(retain, nonatomic) MMUILabel *cenerTitleTip; // @synthesize cenerTitleTip=_cenerTitleTip;
@property(retain, nonatomic) WebRecordDB *recordDb; // @synthesize recordDb=_recordDb;
@property(retain, nonatomic) MMUILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIView *navBarBkg; // @synthesize navBarBkg=_navBarBkg;
@property(retain, nonatomic) MMUILabel *head; // @synthesize head=_head;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (id)genTableHeaderView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)clearAllHistory;
- (void)showComformActionSheet:(id)arg1 confirmTitle:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onNavigationBackItemClick:(id)arg1;
- (void)onOperate:(id)arg1;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)clearHistoryAndInitCenterView;
- (void)onClickOpenTipBtn;
- (void)tryInitopenTipBtn;
- (void)tryInitCenterLabel;
- (void)tryInitIconImageView;
- (void)tryInitCenterView;
- (void)dealloc;
- (void)layoutCenterView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

