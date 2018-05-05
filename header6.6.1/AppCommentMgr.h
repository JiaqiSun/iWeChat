//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMService.h>

#import "IMsgExt-Protocol.h"
#import "MMService-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class AppCommentMsg, NSString;

@interface AppCommentMgr : MMService <MMService, IMsgExt, PBMessageObserverDelegate, UIAlertViewDelegate>
{
    AppCommentMsg *storedAppCommentMsg;
    unsigned int m_uiReportEvent;
}

@property(retain, nonatomic) AppCommentMsg *storedAppCommentMsg; // @synthesize storedAppCommentMsg;
- (void).cxx_destruct;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterForeground;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)createReportEventWithReportID:(int)arg1;
- (id)getAppCommentAlertViewWithDelegate:(id)arg1;
- (void)appCommentDidClickedButton:(long long)arg1;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)tryShowAppCommentAlert;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)haveNormalUnreadMsg;
- (_Bool)shouldShowAlert;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

