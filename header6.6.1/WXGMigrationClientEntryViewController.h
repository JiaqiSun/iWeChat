//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "IMigrationClientExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class CTRichTextView, MMUILabel, NSString, UIButton, UIImageView, UIView, WXGDotDotDotLabel;
@protocol WXGMigrationClientEntryViewControllerDelegate;

@interface WXGMigrationClientEntryViewController : MMWindowViewController <IMigrationClientExt, UIAlertViewDelegate, ILinkEventExt>
{
    UIView *m_backgroundView;
    UIView *m_barLine;
    UIButton *m_leftTopCornerButton;
    UIImageView *m_iconImageView;
    MMUILabel *m_tipsLabel;
    MMUILabel *m_smallTipsLabel;
    MMUILabel *m_titleInGBPLable;
    UIButton *m_greenButton;
    UIButton *m_greyButton;
    MMUILabel *m_wifiTipLabel;
    CTRichTextView *m_helpTipsLabel;
    unsigned long long m_notifyCode;
    unsigned long long m_childNotifyCode;
    WXGDotDotDotLabel *m_dotDotDotLabel;
    unsigned long long m_currentSessionCount;
    unsigned long long m_totalSessionCount;
    unsigned long long m_currentProcessCount;
    unsigned long long m_totalProcessCount;
    NSString *m_speedString;
    unsigned long long m_currentRecvSize;
    unsigned long long m_totalSize;
    unsigned long long m_currentShowAlertViewTag;
    _Bool m_bUserCancelImport;
    id <WXGMigrationClientEntryViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <WXGMigrationClientEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onMigrationAllData;
- (void)onMigrationNewImport;
- (void)onAlertPhoneSizeNotEnough;
- (void)onAlertNowShouldRecoverData;
- (void)onReScanCode;
- (void)onBuildHotspot;
- (void)onCancelMigration;
- (void)onStopImport;
- (void)onCancelImport;
- (void)onStartImport;
- (void)onCloseView;
- (void)onMinimizeView;
- (void)onClientMigrationCurrentTransferSpeed:(float)arg1;
- (void)onClientMigrationCurrentReceiveSize:(unsigned long long)arg1 totalSize:(unsigned long long)arg2;
- (void)onClientMigrationNotifySessionCurrent:(unsigned long long)arg1 totalSession:(unsigned long long)arg2;
- (void)onClientMigrationNotifyProgressCurrent:(unsigned long long)arg1 totalProgress:(unsigned long long)arg2;
- (void)onClientMigrationNotifyCode:(unsigned long long)arg1;
- (void)onClientMigrationAlertCode:(unsigned long long)arg1;
- (void)p_addGreyButton;
- (void)p_addGreenButton;
- (void)p_addSmallTipsLabel;
- (void)p_addTipsLabel;
- (void)p_addIconImageView;
- (void)p_addLeftCornerButton;
- (void)p_addLine;
- (void)p_addBlurEffectForView;
- (void)p_setupView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

