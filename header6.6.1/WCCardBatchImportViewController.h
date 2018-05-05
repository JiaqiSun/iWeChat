//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCCardPkgExt-Protocol.h"
#import "IWCShareCardPkgExt-Protocol.h"
#import "WCCardPkgBackViewDelegate-Protocol.h"
#import "WCGroupTagViewControllerDelegate-Protocol.h"

@class MMBarButtonItem, MMToastViewController, NSMutableArray, NSString, UIButton, WCCardAcceptCardListInfo, WCCardChooseEmptyView, WCCardChoosePeopleLabelView, WCCardPkgBackView;
@protocol WCCardBatchImportViewControllerDelegate;

@interface WCCardBatchImportViewController : MMUIViewController <WCCardPkgBackViewDelegate, WCGroupTagViewControllerDelegate, IWCCardPkgExt, IWCShareCardPkgExt>
{
    id <WCCardBatchImportViewControllerDelegate> _delegate;
    _Bool _isLoading;
    WCCardAcceptCardListInfo *_cardListInfo;
    NSMutableArray *_cardList;
    WCCardChooseEmptyView *_emptyView;
    UIButton *_sureButton;
    unsigned int _genType;
    _Bool _isSelectTagGroup;
    unsigned int _uiScene;
    WCCardPkgBackView *_backview;
    NSMutableArray *_arrGroupUser;
    NSMutableArray *_arrBlackUser;
    NSMutableArray *_arrGroupUserLabelID;
    NSMutableArray *_arrBlackUserLabelID;
    NSString *_privateWording;
    WCCardChoosePeopleLabelView *_peopleLabelView;
    MMToastViewController *_toastVC;
    MMBarButtonItem *_leftBarItem;
}

@property(retain, nonatomic) MMBarButtonItem *leftBarItem; // @synthesize leftBarItem=_leftBarItem;
@property(retain, nonatomic) MMToastViewController *toastVC; // @synthesize toastVC=_toastVC;
@property(retain, nonatomic) WCCardChoosePeopleLabelView *peopleLabelView; // @synthesize peopleLabelView=_peopleLabelView;
@property(retain, nonatomic) NSString *privateWording; // @synthesize privateWording=_privateWording;
@property(retain, nonatomic) NSMutableArray *arrBlackUserLabelID; // @synthesize arrBlackUserLabelID=_arrBlackUserLabelID;
@property(retain, nonatomic) NSMutableArray *arrGroupUserLabelID; // @synthesize arrGroupUserLabelID=_arrGroupUserLabelID;
@property(retain, nonatomic) NSMutableArray *arrBlackUser; // @synthesize arrBlackUser=_arrBlackUser;
@property(retain, nonatomic) NSMutableArray *arrGroupUser; // @synthesize arrGroupUser=_arrGroupUser;
@property(nonatomic) _Bool isSelectTagGroup; // @synthesize isSelectTagGroup=_isSelectTagGroup;
@property(retain, nonatomic) WCCardPkgBackView *backview; // @synthesize backview=_backview;
@property(nonatomic) unsigned int uiScene; // @synthesize uiScene=_uiScene;
- (void).cxx_destruct;
- (void)cardDataList:(id)arg1 tpCardDataList:(id)arg2;
- (id)sortByGuideSameWithCardList:(id)arg1;
- (void)GroupTagViewControllerWillDissappear;
- (void)wcIsHaveAvailabledCard:(_Bool)arg1;
- (void)wcCardSureButtonDidSelected;
- (double)wcCardPkgBackViewMaxHeight;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (void)setCardWhoCanSee;
- (void)onPop;
- (void)onCancel;
- (void)onImportSelectedCardList;
- (void)onShareSelectedCardList;
- (void)performDismiss;
- (void)onImportBulkCard:(id)arg1 errCode:(int)arg2;
- (void)onGetBulkInfo:(id)arg1 errCode:(int)arg2;
- (void)onShareCard:(id)arg1 TpID:(id)arg2 andCardInfo:(id)arg3;
- (void)showPeopleLabelView;
- (void)showBackView;
- (void)showEmptyView;
- (_Bool)useTransparentNavibar;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initBottomPeopleView;
- (void)initBackView;
- (void)initEmptyView;
- (void)initBaseUI;
- (void)initData;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 cardListInfo:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

