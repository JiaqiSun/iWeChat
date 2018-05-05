//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "IRsaCertMgrExt-Protocol.h"
#import "MMWebViewDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "WCAccountGraphicVerifyControlLogicDelegate-Protocol.h"
#import "WCAccountSafeDeviceControlLogicDelegate-Protocol.h"
#import "WCAccountVoice2ndVerifyControlLogicDelegate-Protocol.h"

@class NSString, UnifyAuthResponse, WCAccountGraphicVerifyControlLogic, WCAccountSafeDeviceControlLogic, WCAccountVoice2ndVerifyControlLogic;
@protocol WCAccountManualAuthControlLogicDelegate;

@interface WCAccountManualAuthControlLogic : WCAccountBaseControlLogic <WCAccountGraphicVerifyControlLogicDelegate, WCAccountSafeDeviceControlLogicDelegate, WCAccountVoice2ndVerifyControlLogicDelegate, MMWebViewDelegate, PBMessageObserverDelegate, IRsaCertMgrExt>
{
    WCAccountSafeDeviceControlLogic *m_safeDeviceLogic;
    WCAccountGraphicVerifyControlLogic *m_graphicVerifyLogic;
    WCAccountVoice2ndVerifyControlLogic *m_voice2ndVerifyLogic;
    id <WCAccountManualAuthControlLogicDelegate> m_delegate;
    unsigned int m_ecdh_error_count;
    unsigned int m_cert_error_count;
    unsigned int m_idc_redirect_count;
    _Bool m_bFromAutoAuth;
    _Bool m_bSessionKeyNeedECDHDecrypt;
    _Bool m_bStopCloseAcct;
    unsigned long long m_ui64BeginTime;
    UnifyAuthResponse *_cacheResponse;
    _Bool m_bDontFillWTBuf;
    unsigned int m_uiCGIScene;
}

@property(nonatomic) _Bool m_bDontFillWTBuf; // @synthesize m_bDontFillWTBuf;
@property(nonatomic) unsigned int m_uiCGIScene; // @synthesize m_uiCGIScene;
- (void).cxx_destruct;
- (_Bool)onErrorHandleLogicDoneAndNeedGoNextWithParams:(id)arg1;
- (_Bool)onErrorHandleLogicDone;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleAuthResponse:(id)arg1;
- (void)onStopCloseAcct;
- (void)onStopLogic;
- (void)OnRsaCertFail;
- (void)OnRsaCertCGIAgain;
- (void)onVoice2ndVerifyControlLogicReturnOK;
- (void)onVoice2ndVerifyControlLogicCancel;
- (void)onSafeDeviceControlLogicReturnOK;
- (void)onSafeDeviceControlLogicCancel;
- (void)onGraphicVerifyControlLogicReturn:(id)arg1;
- (id)onGraphicVerifyControlLogicGetAuthRequest:(_Bool)arg1;
- (void)onGraphicVerifyControlLogicCancel;
- (void)startLogicFromAutoAuth;
- (void)startLogic;
- (id)genManualAuthRequest;
- (id)genManualAuthRequest:(_Bool)arg1;
- (_Bool)startManualAuth:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (void)stopLoading;
- (void)startLoading;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

