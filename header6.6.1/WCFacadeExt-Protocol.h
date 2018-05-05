//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCGroupMgrExt-Protocol.h"

@class NSArray, NSString, WCDataItem, WCMediaItem, WCSNSMessage;

@protocol WCFacadeExt <WCGroupMgrExt>

@optional
- (void)onSetWCMessageNotifyFinished:(int)arg1 dataItemID:(NSString *)arg2 opFlag:(_Bool)arg3;
- (void)OnVideoStreamDownloadProgressUpdate:(WCMediaItem *)arg1 FinishedLength:(unsigned int)arg2 TotalLength:(unsigned int)arg3;
- (void)onMediaVideoDownloadSuccess:(WCMediaItem *)arg1;
- (void)onMediaItemSizeDidChange:(WCMediaItem *)arg1;
- (void)onSnsNewCommitFinished:(WCDataItem *)arg1;
- (void)onHomepageTotalCountChanged:(long long)arg1;
- (void)onHomepageUpdate:(int)arg1 withAdded:(NSArray *)arg2 andChanged:(NSArray *)arg3 andDeleted:(NSArray *)arg4;
- (void)onAddDownloadQueue:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onBeginDownload:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onCancelDownloadSuccess:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onDownloadFinish:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onDownloadMediaProcessChange:(WCMediaItem *)arg1 downloadType:(int)arg2 current:(long long)arg3 total:(long long)arg4;
- (void)onWCPostPrivacyChanged;
- (void)onNotificationShowSettingChanged;
- (void)onDatabaseReloaded;
- (void)onNetworkActivityStatusChanged;
- (void)onBGStorageUpdated;
- (void)onWCBackgroundChanged;
- (void)onCommentReturn:(WCDataItem *)arg1;
- (void)onDataItemExposeFinisehd:(int)arg1 dataItem:(WCDataItem *)arg2;
- (void)onDeleteUploadFailedHBDataItem:(WCDataItem *)arg1;
- (void)onSetDataItemPublicFinished:(int)arg1 dataItemID:(NSString *)arg2;
- (void)onSetDataItemPrivateFinished:(int)arg1 dataItemID:(NSString *)arg2;
- (void)onCommentItemDeleteFinished:(int)arg1 commentItemID:(NSString *)arg2 dataItemID:(NSString *)arg3;
- (void)onDataItemDeleteFinished:(int)arg1 dataItemID:(NSString *)arg2;
- (void)onUpdateDataItemDetailFinisehd:(int)arg1 dataItem:(WCDataItem *)arg2;
- (void)onReveiceWCDeleteMessage:(NSArray *)arg1;
- (void)onMessageUnReadCountChanged;
- (void)onReveiceWCMessage:(WCSNSMessage *)arg1;
- (void)onLatestWCObjectChanged:(WCDataItem *)arg1;
- (void)onNoMoreTimelineData;
- (void)onDataChangedWithAdded:(NSArray *)arg1 andChanged:(NSArray *)arg2 andDeleted:(NSArray *)arg3;
@end

