//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MultiTalkBannerItem, NSDictionary, NSString, WXCMultiTalkGroup;

@protocol MultiTalkMgrExt

@optional
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMinimized;
- (void)onOtherDeviceHandleTalk:(NSString *)arg1;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onMultiTalkSysInterruptEnd;
- (void)onMultiTalkSysInterrupt;
- (void)onMultiTalkRedirectOk;
- (void)onMultiTalkMgrNetworkChange;
- (void)onMultiTalkMgrChangeToUnReachable;
- (void)onMultiTalkMgrChangeToWiFi;
- (void)onMultiTalkMgrChangeToLowNetwork;
- (void)onMultiTalkMgrChangeToHighWWan;
- (void)onMultiTalkMgrVideoDeviceAuthFailed;
- (void)onMultiTalkMgrLowformanceDevice;
- (void)onMultiTalkMgrChangeVideoFailed;
- (void)onMultiTalkMgrVideoSessionStopComplete;
- (void)onMultiTalkMgrVideoSessionStartComplete;
- (void)onMultiTalkAudioDeviceUnPlugin;
- (void)onMultiTalkMsgCellIconChange:(NSString *)arg1;
- (void)onMultiTalkBannerChange:(MultiTalkBannerItem *)arg1 status:(unsigned int)arg2;
- (void)onReceiveVideoMemberChangeMsg:(WXCMultiTalkGroup *)arg1 extDic:(NSDictionary *)arg2;
- (void)OnVideoStateChange:(_Bool)arg1 VideoOn:(_Bool)arg2;
- (void)onAddMultiTalkMemberResult:(_Bool)arg1 groupInfo:(WXCMultiTalkGroup *)arg2;
- (void)onErr:(int)arg1;
- (void)onSpeakerStateChange:(_Bool)arg1;
- (void)onMuteStateChange:(_Bool)arg1;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkReady;
- (void)onMemberChange:(WXCMultiTalkGroup *)arg1;
- (void)onReceiveMissMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onEnterMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onCancelCreateMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onCreateMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onInviteMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onBeginMultiTalk;
@end

