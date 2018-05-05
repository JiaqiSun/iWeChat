//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "IMMFacebookMgrExt-Protocol.h"
#import "WCAccountBackDeviceFirstViewControllerDelegate-Protocol.h"
#import "WCAccountLoginFirstViewControllerDelegate-Protocol.h"
#import "WCAccountLoginLastUserViewControllerDelegate-Protocol.h"
#import "WCAccountMainLoginViewControllerDelegate-Protocol.h"
#import "WCAccountManualAuthControlLogicDelegate-Protocol.h"
#import "WCAccountSetPasswordViewControllerDelegate-Protocol.h"
#import "WCAccountVerifyCodeHandlerDelegate-Protocol.h"

@class NSString, VoicePrintHandler, WCAccountLoginLastUserViewController, WCAccountManualAuthControlLogic, WCAccountVerifyCodeHandler;

@interface WCAccountLoginControlLogic : WCAccountBaseControlLogic <IMMFacebookMgrExt, WCAccountLoginFirstViewControllerDelegate, WCAccountLoginLastUserViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountBackDeviceFirstViewControllerDelegate, WCAccountMainLoginViewControllerDelegate, WCAccountSetPasswordViewControllerDelegate, WCAccountVerifyCodeHandlerDelegate>
{
    _Bool m_bFromLogout;
    _Bool m_bNeverAutoStop;
    unsigned int m_uiPwdErrCount;
    WCAccountBaseControlLogic *m_subFBLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    _Bool m_bNeedSetPwd;
    unsigned int m_uiCurrentLoginType;
    WCAccountVerifyCodeHandler *m_verifyCodeHandler;
    VoicePrintHandler *m_VPHandler;
    WCAccountLoginLastUserViewController *m_lastUserVerifyVC;
}

- (void).cxx_destruct;
- (void)OnLoginVerifyOverLimit;
- (void)OnLoginVerifySucessWithRandomAuthKey:(id)arg1 andTicket:(id)arg2;
- (void)onSetPasswordOK;
- (void)onSetPasswordBack;
- (void)checkHavePwd;
- (void)onMainLoginUseBothDevice;
- (void)onMainLoginFacebookConnect;
- (void)onMainLoginProblem;
- (void)onMainLoginGoToFreeze;
- (void)onMainLoginGoToHelpCenter;
- (void)onMainLoginGotoSecurityCenter;
- (void)onMainLoginBack;
- (void)onMainLoginUserName:(id)arg1 Pwd:(id)arg2;
- (void)onMainLoginNext:(id)arg1 phoneNumber:(id)arg2;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)onSelectUserInfo:(id)arg1;
- (void)onOneClickLoginGoToHelpCenter;
- (void)onOneClickLoginGoToSecurityCenter;
- (void)onOneClickLoginProblem;
- (void)onOneClickLoginSwitchAccount;
- (void)onLoginByQRCodeWithOneClickDisconnect;
- (void)onLoginByQRCode;
- (void)onLoginByQQ;
- (void)onLoginByPhone;
- (_Bool)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (_Bool)onErrorHandleLogicDone;
- (void)onLastUserUseBothDevice;
- (void)onLastUserChangeAccountWithView:(id)arg1;
- (void)onLastUserChangeAccount:(id)arg1;
- (void)onIpadOneKeyLoginByQQ;
- (void)onLastUserLoginByQRCode;
- (void)onUseIPadOnly;
- (void)onUseBothDevice;
- (void)onLastUserVoicePrintLogin:(id)arg1;
- (void)onLastUserGoToFreeze:(id)arg1;
- (void)onLastUserGoToHelpCenter:(id)arg1;
- (void)onLastUserGoToSecurityCenter:(id)arg1;
- (void)onLastUserProblem:(id)arg1;
- (void)onLastUserRegister;
- (void)onLastUserLoginUserName:(id)arg1 Pwd:(id)arg2;
- (void)onLastUserVerifyNextWithVerifyCode:(id)arg1;
- (void)onLastUserVerifyFirstTime:(_Bool)arg1;
- (void)onLastUserBack;
- (void)jumpToManulLoginControlMgrToRegister:(id)arg1;
- (void)true_login_but_registerForPhone;
- (void)login_but_registerForPhone;
- (void)onHandlerCheckLoginVerifyCode:(id)arg1 StyleKeyValue:(id)arg2 Response:(id)arg3;
- (void)onHandlerGetVerifyCodeSuccessWithStyleKeyValue:(id)arg1;
- (void)loginAccount:(_Bool)arg1 data:(id)arg2;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onFacebookConnect;
- (void)onFirstViewRegester;
- (void)onFirstViewLogin;
- (void)onGoToSecurityCenter:(unsigned int)arg1;
- (void)stopLogic;
- (void)startIPhoneLoginLogic;
- (void)startIPadLoginLogic;
- (void)startLogic;
- (void)pause;
- (void)checkStopLogic;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2 shouldHideNavBar:(_Bool)arg3;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

