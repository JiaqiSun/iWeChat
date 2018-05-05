//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "INewSyncExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "NetworkStatusDelegate-Protocol.h"
#import "NotifyFromEventDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CMMDB, CNetworkStatus, MMTimer, NSDate, NSMutableArray, NSMutableString, NSRecursiveLock, NSString;
@protocol NotifyFromMainCtrlDelegate;

@interface CMainControll : MMObject <INewSyncExt, NotifyFromEventDelegate, NetworkStatusDelegate, MMKernelExt, PBMessageObserverDelegate>
{
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
    NSString *m_nsDocPath;
    MMTimer *m_oTimerCheckEvent;
    id <NotifyFromMainCtrlDelegate> m_delNotifyFromMainCtrl;
    NSMutableArray *m_arrMessageList;
    NSString *m_nsToken;
    NSString *m_nsResendToken;
    unsigned int m_uiTokenStatus;
    NSString *m_nsSound;
    NSString *m_nsVoipSound;
    unsigned int m_uiTimerCount;
    _Bool m_bSendingToken;
    _Bool m_bNeedSend;
    unsigned int m_uiLastNetworkStatus;
    unsigned int m_uiNetworkReachabilitySeed;
    unsigned long long m_unLastDNS;
    NSDate *m_dtLastSyncSend;
    unsigned int m_uiSyncSendCount;
    NSDate *m_dtLastSyncForAuth;
    NSDate *m_dtLastGetUpdateInfo;
    CNetworkStatus *m_oNetworkStatus;
    _Bool m_bNeedSyncAddressBook;
    _Bool m_bSyncAddrFromAuth;
    unsigned int m_uiSyncScene;
    NSRecursiveLock *m_oMsgQueLock;
    _Bool m_bStop;
    _Bool m_bReportAddMsgFail;
    _Bool m_didTraceRouteFail;
    NSMutableString *m_statusMessage;
    NSDate *_m_tLastNotify;
    NSDate *_m_tLastLongConnDisconnect;
    unsigned long long _m_uiLastApnsSetting;
}

@property(nonatomic) unsigned long long m_uiLastApnsSetting; // @synthesize m_uiLastApnsSetting=_m_uiLastApnsSetting;
@property(retain, nonatomic) NSDate *m_tLastLongConnDisconnect; // @synthesize m_tLastLongConnDisconnect=_m_tLastLongConnDisconnect;
@property(retain, nonatomic) NSDate *m_tLastNotify; // @synthesize m_tLastNotify=_m_tLastNotify;
@property(retain, nonatomic) NSMutableString *m_statusMessage; // @synthesize m_statusMessage;
@property(nonatomic) _Bool m_didTraceRouteFail; // @synthesize m_didTraceRouteFail;
@property(retain, nonatomic) CMMDB *m_oMMDB; // @synthesize m_oMMDB;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock;
@property(retain, nonatomic) NSString *m_nsDocPath; // @synthesize m_nsDocPath;
@property(retain, nonatomic) CNetworkStatus *m_oNetworkStatus; // @synthesize m_oNetworkStatus;
@property(retain, nonatomic) NSDate *m_dtLastGetUpdateInfo; // @synthesize m_dtLastGetUpdateInfo;
@property(retain, nonatomic) NSDate *m_dtLastSyncForAuth; // @synthesize m_dtLastSyncForAuth;
@property(retain, nonatomic) NSDate *m_dtLastSyncSend; // @synthesize m_dtLastSyncSend;
@property(retain, nonatomic) NSString *m_nsVoipSound; // @synthesize m_nsVoipSound;
@property(retain, nonatomic) NSString *m_nsSound; // @synthesize m_nsSound;
@property(nonatomic) unsigned int m_uiTokenStatus; // @synthesize m_uiTokenStatus;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(nonatomic) __weak id <NotifyFromMainCtrlDelegate> m_delNotifyFromMainCtrl; // @synthesize m_delNotifyFromMainCtrl;
- (void).cxx_destruct;
- (void)ReportApnsSetting:(_Bool)arg1;
- (void)TimerSync;
- (void)onLoginOK;
- (void)onAuthOK;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)HandleRespForGetUpdateInfo:(id)arg1;
- (void)CheckUpdate:(id)arg1;
- (void)HandleRespForSendToken:(id)arg1;
- (void)CreateSendTokenEventWithScene:(unsigned int)arg1;
- (void)SendToken:(id)arg1 Status:(unsigned int)arg2 Sound:(id)arg3 VoipSound:(id)arg4;
- (void)onKickQuit;
- (void)HandleNewSyncPush:(id)arg1;
- (void)HandleSpecialMessage:(id)arg1;
- (void)speedyDispacthMessage:(id)arg1;
- (void)SpeedyNotifyFromEvent:(id)arg1 Message:(unsigned int)arg2 MessageInfo:(id)arg3;
- (void)NotifyFromEvent:(id)arg1 Message:(unsigned int)arg2 MessageInfo:(id)arg3;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)handleIPXXMessage:(id)arg1;
- (void)onNewSyncIPXX:(id)arg1;
- (void)RaiseEvent:(unsigned int)arg1 MessageID:(unsigned int)arg2 MessageInfo:(id)arg3;
- (id)GetLocalInfo;
- (void)GetBottleContact;
- (unsigned int)GetNetworkReachabilitySeed;
- (void)SetVersionInited;
- (unsigned int)CheckVersion;
- (_Bool)isCanShowWhatsNew;
- (_Bool)IsNewUser;
- (void)CheckWhatsnew;
- (void)SetShowWhatsnew:(_Bool)arg1;
- (void)CreateSyncTimer;
- (void)HandleQQChanged;
- (void)CheckResend;
- (void)SendMsg:(_Bool)arg1;
- (_Bool)IsInit;
- (_Bool)IsLogIn;
- (void)ReloadData:(_Bool)arg1;
- (void)ReloadServiceData_InMainThread;
- (void)ClearData;
- (void)TimerCheckEvent;
- (void)CheckSyncAddressBook;
- (void)HandleAuthAtFirstTime;
- (void)StopAllEvent;
- (void)Stop;
- (unsigned int)Start:(id)arg1;
- (void)LoadLastSvrID;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

