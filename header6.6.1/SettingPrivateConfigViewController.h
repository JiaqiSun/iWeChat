//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"

@class DelaySwitchSettingLogic, MMTableViewInfo, NSMutableDictionary, NSString, WCOpLog;

@interface SettingPrivateConfigViewController : MMUIViewController <ILinkEventExt>
{
    NSMutableDictionary *m_changesOnExitMap;
    _Bool m_applySettingNow;
    MMTableViewInfo *m_tableViewInfo;
    WCOpLog *m_wcOpLog;
    _Bool m_showRecentOpen;
    _Bool m_strangerRightOpen;
    _Bool m_contactVerifySwitchOpen;
    _Bool m_recommendQQOpen;
    _Bool m_recommendPhoneOpen;
    _Bool m_autoAddFriendPhoneShow;
    _Bool m_autoAddFriendPhoneOpen;
    _Bool m_bIsShowPhoneSectionIndexAtFirst;
    unsigned int m_contactVerifyIndex;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    _Bool m_bIsShowContactVerifySectionIndexAtFirst;
    unsigned int _wcNotificationCellIndex;
    unsigned long long _recentPrivacyPushScene;
}

@property(nonatomic) unsigned int wcNotificationCellIndex; // @synthesize wcNotificationCellIndex=_wcNotificationCellIndex;
@property(nonatomic) unsigned long long recentPrivacyPushScene; // @synthesize recentPrivacyPushScene=_recentPrivacyPushScene;
@property(nonatomic) _Bool m_bIsShowContactVerifySectionIndexAtFirst; // @synthesize m_bIsShowContactVerifySectionIndexAtFirst;
@property(nonatomic) _Bool m_bIsShowPhoneSectionIndexAtFirst; // @synthesize m_bIsShowPhoneSectionIndexAtFirst;
- (void).cxx_destruct;
- (void)initDeepLinkConfig;
- (void)showWCEditGroup;
- (void)showWCBlackListView;
- (void)showWCOutsiderView;
- (void)editWCGroup:(id)arg1;
- (void)onModifyRecentOption:(id)arg1;
- (void)showRecentWCOptions;
- (int)getCurrentRecentType:(id)arg1;
- (id)getCurrentRecentString;
- (_Bool)canShowRecentOptions;
- (void)showRecentWC:(id)arg1;
- (void)allowStrangerWC:(id)arg1;
- (void)contactVerifySwitchChanged:(id)arg1;
- (void)autoAddFriendPhoneChanged:(id)arg1;
- (void)recommendPhoneChanged:(id)arg1;
- (void)doSetPrivateConfig:(unsigned int)arg1 on:(_Bool)arg2 bitset:(unsigned int)arg3;
- (void)showAddMeWaysVC;
- (void)updateWcStateAndReloadTableView;
- (void)wcOpenEntranceSwitchChanged:(id)arg1;
- (void)wcNotificationSwitchChanged:(id)arg1;
- (void)applyUnSavedChanges;
- (_Bool)setChangeOnExitForSelector:(SEL)arg1 withControl:(id)arg2;
- (void)removeCoverView;
- (void)hideCoverView;
- (void)startCoverContactVerify;
- (void)dealloc;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAppear;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)makeTableFooterView;
- (void)reloadTableDataWithReloadFooterView:(_Bool)arg1;
- (void)reloadTableData;
- (void)showAppAuthManagementView;
- (void)showBlackListView;
- (id)init;
- (id)getHeaderView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

