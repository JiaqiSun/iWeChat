//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TXIStreamDownloader.h"

@class NSLock, NSMutableArray, TXCRecvThread;

@interface RTMPDownloader : TXIStreamDownloader
{
    TXCRecvThread *_currentThread;
    NSLock *_threadMutex;
    NSMutableArray *_arrayUrls;
    _Bool _hasTcpStreamUrl;
}

- (void).cxx_destruct;
- (id)getDownloadStats;
- (void)stopDownload;
- (void)startDownload:(id)arg1;
- (void)reconnectServer:(_Bool)arg1;
- (void)connectServer:(double)arg1;
- (void)sendNotifyEvent:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

