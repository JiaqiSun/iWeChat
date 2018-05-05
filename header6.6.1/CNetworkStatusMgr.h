//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "CNetworkStatusExt-Protocol.h"
#import "IAudioToMessageExt-Protocol.h"
#import "IEmoticonDownloadExt-Protocol.h"
#import "INetworkStatusReportWithGPSExt-Protocol.h"
#import "INewSyncExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "MessageObserverDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CNetworkStatusReportArchive, MMTimer, NSDate, NSString, ReportInfo;

@interface CNetworkStatusMgr : MMService <INewSyncExt, MMService, MessageObserverDelegate, IAudioToMessageExt, CNetworkStatusExt, IEmoticonDownloadExt, MMKernelExt, PBMessageObserverDelegate, INetworkStatusReportWithGPSExt>
{
    _Bool m_bConnecting;
    _Bool m_bConnected;
    _Bool m_bReadToGettingData;
    long long m_n64MsgIdForVoiceMsgToDownload;
    _Bool m_bReadOnceAgain;
    _Bool m_bDidCheckNewWiFiInterface;
    unsigned int m_uiConnnectType;
    unsigned int m_uiShortChannelFailCount;
    unsigned int m_uiLastReportTime;
    struct timeval m_tvLastGettingDataTime;
    CNetworkStatusReportArchive *m_reportArchive;
    vector_a9c0768e m_vecMesssageIdToListen;
    int m_eNetworkStatusType;
    NSDate *m_dtLastReport;
    ReportInfo *m_oReportInfo;
    MMTimer *m_oReportTimer;
    NSString *m_nsLastWifiBssid;
    NSString *m_nsCacheWifiBssid;
    NSString *m_nsCacheWifiSsid;
    _Bool m_isCheckingNetwork;
    _Bool m_isBaseNetworkOK;
    _Bool m_isWechatNetworkOK;
    _Bool m_isWechatLongLinkOK;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onNetworkCheckResult:(_Bool)arg1 stage:(unsigned int)arg2 allEnds:(_Bool)arg3 kvString:(id)arg4;
- (void)startNetworkChecking;
- (_Bool)isNetworkChecking;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)InternalReportWithGPS:(id)arg1 inScene:(unsigned int)arg2;
- (void)InternalReportNetworkInfo:(id)arg1;
- (id)MakeSafeReportString:(id)arg1;
- (void)CheckReportNetworkInfo:(unsigned int)arg1;
- (void)CheckBG2FG;
- (void)onAuthOK;
- (void)OnNetworkStatusReportWithGPS:(id)arg1 inScene:(unsigned int)arg2;
- (void)SaveReportInfo;
- (void)LoadReportInfo;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)OnUpdateWifiInfo:(_Bool)arg1 Scene:(unsigned int)arg2;
- (void)UpdateWifiInfo:(unsigned int)arg1;
- (void)ClearIDCache;
- (void)doReportIpxx:(id)arg1;
- (void)setReadToGettingData;
- (unsigned int)getNetworkStatusType;
- (id)getGpsReportString:(id)arg1;
- (id)getReportStringWithScene:(unsigned int)arg1;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)OnErrorByReceiver:(id)arg1 ErrNo:(int)arg2;
- (void)OnAddMessageByReceiver:(id)arg1;
- (void)onNewSyncEnd;
- (void)onNewSyncOplogConnectFail;
- (void)onNewSyncOplogFail;
- (void)onNewSyncBegin;
- (void)MessageReturn:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;
- (id)init;
- (void)unregExt;
- (void)regExt;
- (void)unListenMessageId;
- (void)initMessageIdToListen;
- (void)handleVoiceDowdload:(id)arg1 error:(_Bool)arg2;
- (void)zeroVoiceMsgToDownload;
- (void)handleSyncEnd;
- (void)handleSyncBegin;
- (void)handleNetworkStatusChange:(unsigned int)arg1;
- (void)checkCallStatusChangedExt;
- (void)callDisconnectStatusChangedExt;
- (void)translateStatus;
- (void)translateStatusLongUnConnect;
- (void)translateStatusLongConnect;
- (_Bool)isDuringSync;
- (void)handleReport:(int)arg1;
- (void)handleReportLongUnConnectCount;
- (void)handleReportDisconnected:(int)arg1;
- (void)realCalDisconnected;
- (void)handleReportGettingData:(int)arg1;
- (void)doReportNetworkStatus;
- (_Bool)AddOplogInternal;
- (_Bool)isNeedReport;
- (void)loadNetworkStatusReportArchive;
- (struct timeval)getCurTimeVal;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

