//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "CNetworkStatusExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class MMTimer, NSDate, NSString;

@interface CdnComMgr : MMService <MMService, MMKernelExt, PBMessageObserverDelegate, CNetworkStatusExt>
{
    struct CdnCallback *m_pCallback;
    unsigned int m_uiGetCdnDnsInfoEventID;
    unsigned int m_uiGetCdnCount;
    NSDate *m_tGetCdn;
    MMTimer *m_tmCheckCdnInfo;
    _Bool m_bInitCdnCom;
    _Bool m_bHasGetCdnDns;
    _Bool m_bNetWorkChangeRetry;
    _Bool m_bIgnoreBackGroundFetchRetry;
}

+ (struct Config)GetWxConfig;
+ (id)GetDownloadThumbClientID:(id)arg1;
+ (id)GetDownloadClientID:(id)arg1 HD:(_Bool)arg2;
+ (id)GetCdnRootPath;
@property(retain, nonatomic) NSDate *m_tGetCdn; // @synthesize m_tGetCdn;
- (void).cxx_destruct;
- (id)genarateResAesKey;
- (id)calcMP4IdentifyMD5WithFilePath:(id)arg1;
- (id)calcFileMd5WithFilePath:(id)arg1;
- (basic_string_a490aa4c)getClientMediaId:(id)arg1 enableHitCheck:(_Bool)arg2;
- (void)SetCdnHostIPFromNewDNS;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onSimCardNetTypeChange;
- (void)ReachabilityChange:(unsigned int)arg1;
- (void)onPreQuit;
- (void)onKickQuit;
- (void)onAuthOK;
- (void)OnRequestGetCdnDns:(int)arg1;
- (void)CallInternalGetCdnDns:(id)arg1;
- (void)OnDownloadEnd:(id)arg1;
- (void)CallDownloadExtendsion:(id)arg1;
- (void)OnUploadEnd:(id)arg1;
- (void)CallUploadExtendsion:(id)arg1;
- (void)OnDownloadProgress:(id)arg1;
- (void)OnPreloadCompleted:(id)arg1;
- (void)CallPreloadCompletedExtendsion:(id)arg1;
- (void)onDownloadToEnd:(id)arg1;
- (void)CallDownloadToEndExtendsion:(id)arg1;
- (void)OnMoovReady:(id)arg1;
- (void)CallDownloadMoovReadyExtendsion:(id)arg1;
- (void)OnDownloadPartialVideoData:(id)arg1;
- (void)CallDownloadPartialDataExtendsion:(id)arg1;
- (void)CallDownloadProgressExtendsion:(id)arg1;
- (void)OnUploadProgress:(id)arg1;
- (void)CallUploadProgressExtendsion:(id)arg1;
- (void)StopDownloadYearLuckyMoneyImage:(id)arg1;
- (_Bool)StartDownloadYearLuckyMoneyImage:(id)arg1;
- (void)StopUploadYearLuckyMoneyImage:(id)arg1;
- (_Bool)StartUploadYearLuckyMoneyImage:(id)arg1;
- (_Bool)StartUploadDeviceFile:(id)arg1;
- (_Bool)StartUploadEncryptDeviceImage:(id)arg1;
- (_Bool)StartUploadDeviceImage:(id)arg1;
- (_Bool)StartUploadDeviceRankCover:(id)arg1;
- (void)StopUploadTimelineMediaOfSight:(id)arg1;
- (_Bool)StartUploadTimelineMediaOfSight:(id)arg1;
- (_Bool)StartUploadTimelineMediaOfSightThumb:(id)arg1;
- (void)StopUploadTimelineMedia:(id)arg1;
- (_Bool)StartUploadTimelineMedia:(id)arg1;
- (void)StopDownloadNormalFile:(id)arg1;
- (_Bool)StartDownloadNormalFile:(id)arg1;
- (void)StopUploadNormalFile:(id)arg1;
- (_Bool)StartUploadNormalFile:(id)arg1;
- (void)StopDownloadRecordMedia:(id)arg1;
- (_Bool)StartDownloadRecordMedia:(id)arg1;
- (void)StopUploadRecordMedia:(id)arg1;
- (_Bool)StartUploadRecordMedia:(id)arg1 enableHitCheck:(_Bool)arg2;
- (void)StopDownloadFavMedia:(id)arg1;
- (_Bool)StrartDownloadFavMedia:(id)arg1;
- (void)StopUploadFavMedia:(id)arg1;
- (_Bool)StartUploadFavMedia:(id)arg1;
- (void)StopDownloadComMedia:(id)arg1;
- (_Bool)StartDownloadComMedia:(id)arg1;
- (void)StopUploadComMedia:(id)arg1;
- (_Bool)StartUploadComMedia:(id)arg1;
- (_Bool)CheckAppAttachExist:(id)arg1 IsLargeFile:(_Bool)arg2;
- (int)QueryDownloadedLength:(id)arg1 IsLargeFile:(_Bool)arg2;
- (_Bool)StopDownloadAppAttach:(id)arg1 CdnDownloadTaskInfo:(id)arg2;
- (void)StopDownloadAppAttach:(id)arg1;
- (_Bool)StartDownloadAppAttach:(id)arg1 IsLargeFile:(_Bool)arg2 SvrSign:(id)arg3 bigFileAes:(id)arg4 bigFileSign:(id)arg5 Silent:(_Bool)arg6;
- (void)StopUploadAppAttach:(id)arg1;
- (_Bool)StartUploadAppAttach:(id)arg1 IsLargeFile:(_Bool)arg2 FileMd5:(id)arg3 SvrSign:(id)arg4 bigFileAes:(id)arg5 bigFileSign:(id)arg6 enableHitCheck:(_Bool)arg7;
- (_Bool)StartUploadAppAttach:(id)arg1 IsLargeFile:(_Bool)arg2 FileMd5:(id)arg3 SvrSign:(id)arg4 bigFileAes:(id)arg5 bigFileSign:(id)arg6;
- (_Bool)StopDownloadSnsImage:(id)arg1;
- (_Bool)StartDownloadSnsImage:(id)arg1 withIPList:(id)arg2;
- (void)StopDownloadThumb:(id)arg1;
- (_Bool)StartDownloadThumb:(id)arg1;
- (_Bool)StopHttpsDownloadTask:(id)arg1;
- (_Bool)StartHttpsDownloadTask:(id)arg1 withUrl:(id)arg2 withSavePath:(id)arg3 withIPList:(id)arg4;
- (_Bool)IsVideoDataAvailableByClientMediaID:(id)arg1 offset:(long long)arg2 length:(long long)arg3;
- (_Bool)RequestVideoDataByClientMediaID:(id)arg1 offset:(long long)arg2 length:(long long)arg3 durationMs:(int)arg4;
- (_Bool)StopVideoStreamingDownload:(id)arg1 Result:(struct C2CDownloadResult *)arg2;
- (_Bool)StartVideoStreamingDownload:(id)arg1 DownloadMode:(int)arg2;
- (_Bool)StartVideoStreamingDownload:(id)arg1 PlayMode:(_Bool)arg2;
- (_Bool)StartVideoPreload:(id)arg1;
- (_Bool)StopSnsVideoStreamingDownload:(id)arg1 Result:(struct C2CDownloadResult *)arg2;
- (_Bool)StartSnsVideoDownload:(id)arg1 withIPList:(id)arg2 withRefer:(id)arg3 DownloadMode:(int)arg4;
- (_Bool)StartSnsVideoStreamingDownload:(id)arg1 withIPList:(id)arg2 withRefer:(id)arg3 withPlayMode:(_Bool)arg4;
- (_Bool)StartSnsVideoPreDownload:(id)arg1 withIPList:(id)arg2 withRefer:(id)arg3;
- (_Bool)StopAllDownloadTaskWithFileType:(int)arg1 CancelFlag:(int)arg2;
- (_Bool)StopHttpVideoStreamingDownload:(id)arg1 Result:(struct C2CDownloadResult *)arg2;
- (_Bool)StartHttpVideoStreamingDownload:(id)arg1 fileType:(int)arg2 filePath:(id)arg3 preloadPercent:(int)arg4;
- (_Bool)StopDownloadVideo:(id)arg1 CdnDownloadTaskInfo:(id)arg2;
- (void)StopDownloadVideo:(id)arg1;
- (_Bool)StartDownloadVideo:(id)arg1 AutoDownload:(_Bool)arg2 Silent:(_Bool)arg3;
- (void)StopUploadVideo:(id)arg1;
- (_Bool)StartUploadVideo:(id)arg1 enableHitCheck:(_Bool)arg2;
- (_Bool)StartUploadVideo:(id)arg1;
- (_Bool)StopDownloadImage:(id)arg1 HD:(_Bool)arg2 CdnDownloadTaskInfo:(id)arg3;
- (void)StopDownloadImage:(id)arg1 HD:(_Bool)arg2;
- (_Bool)StartDownloadImage:(id)arg1 HD:(_Bool)arg2 AutoDownload:(_Bool)arg3 Silent:(_Bool)arg4;
- (void)StopUploadImage:(id)arg1;
- (_Bool)StartUploadImage:(id)arg1 enableHitCheck:(_Bool)arg2;
- (_Bool)StartUploadImage:(id)arg1;
- (id)GetUploadImageBuffer:(id)arg1;
- (_Bool)StopDownloadComMedia:(id)arg1 CdnDownloadTaskInfo:(id)arg2;
- (void)CheckCdnInfo;
- (void)GetCdnDnsInfo:(unsigned int)arg1;
- (void)InternalGetCdnDnsInfo;
- (_Bool)IsCdnAvaible;
- (_Bool)IsAppMsgUseCdn;
- (_Bool)IsVideoUseCdn;
- (_Bool)IsImageUseCdn;
- (_Bool)IsCdnHideAeskey;
- (_Bool)IsUseCdn;
- (_Bool)IsMessageCanUseCdnDownload:(id)arg1;
- (_Bool)IsMessageCanUseCdnUpload:(id)arg1;
- (void)UnInit;
- (void)InitWithCdnInfo:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

