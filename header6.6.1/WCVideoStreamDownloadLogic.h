//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VideoStreamDownloadLogic.h"

#import "WCDownloadVideoCDNMgrExt-Protocol.h"

@class NSString, VideoStreamKVReportLogic, WCMediaItem;

@interface WCVideoStreamDownloadLogic : VideoStreamDownloadLogic <WCDownloadVideoCDNMgrExt>
{
    WCMediaItem *m_oWCMediaItem;
    VideoStreamKVReportLogic *m_oKVReportLogic;
}

- (void)setM_oKVReportLogic:(id)arg1;
- (id)m_oKVReportLogic;
- (void).cxx_destruct;
- (void)OnSnsVideoChanged:(id)arg1;
- (void)OnVideoStartDownload:(id)arg1;
- (void)OnUpdateDownloadProgress:(id)arg1;
- (void)OnCdnDownloadToEnd:(id)arg1;
- (void)OnDownloadError:(id)arg1;
- (void)OnCdnDownloadSuccess:(id)arg1;
- (void)OnVideoMoovReady:(id)arg1 moovWaitTime:(unsigned int)arg2 Offset:(unsigned int)arg3;
- (void)OnRecievedFristPartAVData:(id)arg1;
- (void)OnVideoCDNDataAvaiable:(id)arg1;
- (void)downloadAllData;
- (_Bool)isVideoDownloading;
- (_Bool)requestNetVideoDataByOffset:(unsigned int)arg1 Length:(unsigned int)arg2 DurationSec:(unsigned int)arg3;
- (_Bool)isVideoCacheDataExistByOffset:(unsigned int)arg1 Length:(unsigned int)arg2;
- (void)stopVideoStreamDownload;
- (unsigned long long)startVideoStreamDownload;
- (void)dealloc;
- (id)initWithMediaItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

