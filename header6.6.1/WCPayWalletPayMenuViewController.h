//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "PayMenuRedDotHelperExt-Protocol.h"
#import "WCPayLogicMgrExt-Protocol.h"
#import "WCPayPwdViewControllerDelegate-Protocol.h"
#import "WCPayWalletPayMenuCgiDelegate-Protocol.h"

@class GetPayMenuResponse, NSString, WCPayControlData, WCPayWalletPayMenuCgi;
@protocol WCPayWalletPayMenuViewControllerDelegate;

@interface WCPayWalletPayMenuViewController : WCPayBaseViewController <WCPayLogicMgrExt, PayMenuRedDotHelperExt, WCPayPwdViewControllerDelegate, WCPayWalletPayMenuCgiDelegate>
{
    WCPayControlData *_m_oPayData;
    id <WCPayWalletPayMenuViewControllerDelegate> _m_delegate;
    WCPayWalletPayMenuCgi *_m_payMenuCgi;
    GetPayMenuResponse *_m_payMenyResp;
}

@property(retain, nonatomic) GetPayMenuResponse *m_payMenyResp; // @synthesize m_payMenyResp=_m_payMenyResp;
@property(retain, nonatomic) WCPayWalletPayMenuCgi *m_payMenuCgi; // @synthesize m_payMenuCgi=_m_payMenuCgi;
@property(nonatomic) __weak id <WCPayWalletPayMenuViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) WCPayControlData *m_oPayData; // @synthesize m_oPayData=_m_oPayData;
- (void).cxx_destruct;
- (void)WillReloadWallet;
- (void)onPayMenuRedDotHelperSync;
- (void)OnWCPayPwdViewControllerBack;
- (void)onWCPayWalletPayMenuCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)onWCPayWalletPayMenuCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)clickJumpSwitchWalletCell:(id)arg1;
- (void)clickPaymentSecurityCell:(id)arg1;
- (void)clickPaymentManagementCell:(id)arg1;
- (void)clickTinyAppCell:(id)arg1;
- (void)clickH5Cell:(id)arg1;
- (void)clickCell:(id)arg1;
- (void)makeCell:(id)arg1 CellInfo:(id)arg2;
- (id)cellInfoWith:(id)arg1;
- (void)reloadView;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

