//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IRecordPermissionCheckExt-Protocol.h"
#import "IShakeCardMgrExt-Protocol.h"
#import "IUiUtilExt-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMPickerViewDelegate-Protocol.h"
#import "MMTipsViewControllerDelegate-Protocol.h"
#import "ShakeBeaconSingleViewDelegate-Protocol.h"
#import "ShakeBgImgDownloadMgrExt-Protocol.h"
#import "ShakeCardDetailViewDelegate-Protocol.h"
#import "ShakeCheckerDelegate-Protocol.h"
#import "ShakeListDelegate-Protocol.h"
#import "ShakeLogicProxyDelegate-Protocol.h"
#import "ShakeMainFrameDelegate-Protocol.h"
#import "ShakeRangingBeaconsExt-Protocol.h"
#import "ShakeSettingViewControllerDelegate-Protocol.h"
#import "ShakeTvHistoryViewDelegate-Protocol.h"
#import "ShakeTypeBarDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "shakeSingleViewDelegate-Protocol.h"

@class CShakeChecker, MMHDHeadImageView, MMTipsViewController, NSString, ShakeBeaconSingleView, ShakeCardDetailView, ShakeLogicProxy, ShakeMainView, ShakeSingleView, ShakeTvHistoryView, ShakeTypeBar;
@protocol ShakeViewDelegate;

@interface ShakeViewController : MMUIViewController <IVOIPUILogicMgrExt, ShakeListDelegate, ShakeBgImgDownloadMgrExt, ShakeCheckerDelegate, MMPickerViewDelegate, ShakeLogicProxyDelegate, shakeSingleViewDelegate, WCActionSheetDelegate, ShakeMainFrameDelegate, MMImagePickerManagerDelegate, ShakeSettingViewControllerDelegate, MMTipsViewControllerDelegate, UIScrollViewDelegate, IUiUtilExt, IRecordPermissionCheckExt, ShakeTypeBarDelegate, ShakeBeaconSingleViewDelegate, ShakeRangingBeaconsExt, ShakeCardDetailViewDelegate, IShakeCardMgrExt, ShakeTvHistoryViewDelegate>
{
    ShakeLogicProxy *m_logicProxy;
    ShakeSingleView *m_shakeSingleView;
    ShakeMainView *m_mainView;
    MMTipsViewController *m_introView;
    ShakeTvHistoryView *m_shakeTvHistoryView;
    _Bool m_bShaking;
    id <ShakeViewDelegate> m_delegate;
    CShakeChecker *m_shakeChecker;
    MMHDHeadImageView *m_HDHeadImage;
    _Bool m_bBackgroundRunning;
    ShakeTypeBar *m_typeBar;
    unsigned int m_uiTimeStartSearchTV;
    _Bool m_bCanShake;
    _Bool _m_haveShaked;
    ShakeBeaconSingleView *_m_shakeBeaconSingleView;
    ShakeCardDetailView *_m_shakeCardDetailView;
}

@property(retain, nonatomic) ShakeCardDetailView *m_shakeCardDetailView; // @synthesize m_shakeCardDetailView=_m_shakeCardDetailView;
@property(retain, nonatomic) ShakeBeaconSingleView *m_shakeBeaconSingleView; // @synthesize m_shakeBeaconSingleView=_m_shakeBeaconSingleView;
@property(nonatomic) _Bool m_haveShaked; // @synthesize m_haveShaked=_m_haveShaked;
- (void).cxx_destruct;
- (_Bool)isInShakeTvLogicType;
- (id)getCurrViewController;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onShakeCardRedDotChange;
- (void)onShakeCardEntranceChange;
- (void)onDidRangedBeacons:(id)arg1;
- (void)onClickBeaconViewWith:(id)arg1;
- (void)onShakeTypeClicked:(int)arg1;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)onClickTipsBtn:(id)arg1 Index:(long long)arg2 tipTag:(long long)arg3;
@property(nonatomic) _Bool m_bCanShake; // @synthesize m_bCanShake;
- (void)onSelectShakeSetting:(id)arg1 withData:(id)arg2;
- (void)onShakeStop;
- (int)getShakeLogicType;
- (void)enableShake:(_Bool)arg1;
- (id)getMsgForState:(unsigned int)arg1;
- (void)showViewControllerFromList:(id)arg1;
- (id)getViewController;
- (void)OnOpenShakeMsgCenter;
- (void)OnOpenUnreadMsgList;
- (void)OnOpenSayHello;
- (void)showMessage:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnGetNewBgImg;
- (void)onShakeMatchFail:(id)arg1;
- (void)onShakeGetFail:(id)arg1;
- (void)onShakeReportFail:(id)arg1;
- (void)onShakeGetEndWithResult:(id)arg1;
- (void)onShakeReportEndWithResult:(id)arg1;
- (void)dismissViewController;
- (void)onShakeTvReportFail:(int)arg1 ErrMsg:(id)arg2;
- (void)onShakeTvReportEndWithTvItem:(id)arg1;
- (void)onShakeMusicReportFail:(int)arg1 ErrMsg:(id)arg2;
- (void)onShakeMusicReportEndWithMusicItem:(id)arg1 Offset:(float)arg2;
- (void)onBeaconGuideModeReportFailed:(unsigned int)arg1;
- (void)onBeaconGuideModeReportEndWithResponse:(id)arg1;
- (void)onShakeBeaconReportFailed:(int)arg1 ErrMsg:(id)arg2;
- (void)onShakeBeaconReportEndWithResponse:(id)arg1;
- (void)onWCCardDetailViewControllerDis;
- (void)onWCCardDetailViewControllerPres;
- (void)onShakeCardDetailViewShowAcceptSucView;
- (id)getCurrentViewController;
- (void)tryCancelShakeCard;
- (void)onShakeCardDetailViewClickStopAnimation;
- (void)onShakeCardDetailViewDidDisappear;
- (void)onShakeCardReportEndWithResponse:(id)arg1 errType:(unsigned long long)arg2 errMsg:(id)arg3;
- (void)onSelectedWithLbsContactInfo:(id)arg1;
- (void)onUpdateLbsContactInfoError:(int)arg1;
- (void)onUpdateLbsContactInfoFinishedWithData:(id)arg1;
- (void)onClearMyLbsDataFinishedWithResult:(_Bool)arg1;
- (void)onNewCountChanging:(int)arg1;
- (void)OnShake;
- (void)promptForProfileExtInfo;
- (_Bool)isInFindFriendTab;
- (void)setCanShake:(_Bool)arg1;
- (void)setShakeType:(int)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (_Bool)shouldInteractivePop;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)Report;
- (void)playShakeSound;
- (void)playShakeResultSound:(_Bool)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)OnAnimationEnd:(_Bool)arg1;
- (void)playSoundByAQAudioPlayer:(id)arg1 type:(id)arg2;
- (void)showImagePicker:(long long)arg1;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)handleImage:(id)arg1;
- (void)useDefalutHideImage;
- (void)showList:(int)arg1;
- (void)showShakeSingleView:(id)arg1 andScene:(unsigned int)arg2;
- (void)initHDHeadImage:(id)arg1;
- (void)showHDHeadImage;
- (void)onFinishShowAnimation;
- (void)GoToSayHello:(id)arg1 andScene:(unsigned int)arg2;
- (void)showTvDetail:(id)arg1 withModal:(_Bool)arg2;
- (void)showShakeTvResult:(id)arg1 andModal:(_Bool)arg2 isFromHistoryList:(_Bool)arg3;
- (void)onSelectedShakeTvResult:(id)arg1;
- (void)onSelectedContactInfo:(id)arg1 isFromList:(_Bool)arg2;
- (_Bool)isInMyContactList:(id)arg1;
- (void)showPeopleInfoView:(id)arg1 isFromList:(_Bool)arg2;
- (void)showContactInfoView:(id)arg1 isFromList:(_Bool)arg2;
- (void)updateTvHistoryView;
- (void)showErrorAlert:(id)arg1;
- (void)dealloc;
- (_Bool)canBecomeFirstResponder;
- (void)promptForShakeMusicUsage;
- (void)promptForShakeUsageWarnning;
- (void)viewDidLoad;
- (void)initView;
- (void)viewDidLayoutSubviews;
- (void)shakeSwitch;
- (void)initBackgroundView;
- (void)updateMuteStauts:(_Bool)arg1;
- (void)SetMuteStauts:(int)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willShow;
- (void)willDisshow;
- (void)stopAllAnimation;
- (void)OnSetting;
- (void)stopLoading;
- (void)startLoading;
- (void)lockScreen;
- (void)unlockScreen;
- (void)enableAllButton;
- (void)disableAllButton;
- (id)init;
- (void)applicationDidBecomeActiveNotification:(id)arg1;
- (void)applicationWillResignActiveNotification:(id)arg1;
- (void)setM_Delegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

