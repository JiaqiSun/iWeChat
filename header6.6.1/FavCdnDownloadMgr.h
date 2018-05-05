//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "ICdnComMgrExt-Protocol.h"
#import "MMService-Protocol.h"

@class FavCdnTaskInfo, NSMutableArray, NSMutableSet, NSString;

@interface FavCdnDownloadMgr : MMService <ICdnComMgrExt, MMService>
{
    NSMutableArray *m_queue;
    _Bool m_downloading;
    int m_downloadingCount;
    NSMutableSet *m_set;
    FavCdnTaskInfo *current_taskInfo;
}

- (void).cxx_destruct;
- (void)OnCdnDownload:(id)arg1;
- (void)tryNext;
- (void)StartDownloadFavMedia:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

