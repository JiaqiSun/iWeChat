//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMDBRestore-Protocol.h"
#import "RecoverDataManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class MMLoadingView, MMTableViewInfo, MMTimer, NSObject, NSString, RecoverDataManager, UIImageView, UILabel;
@protocol OS_dispatch_queue;

@interface RecoverDataViewController : MMUIViewController <RecoverDataManagerDelegate, UIAlertViewDelegate, MMDBRestore>
{
    MMTableViewInfo *m_tableViewInfo;
    MMLoadingView *m_loadingView;
    RecoverDataManager *m_recoverDataMgr;
    NSObject<OS_dispatch_queue> *m_workQueue;
    _Bool m_isRunning;
    float _progress;
    MMTimer *_progressTimer;
    _Bool _directRecover;
    struct CGRect _tableViewRect;
    UILabel *_labTip;
    struct CGRect _labTipRect;
    UIImageView *_imgvRecover;
    struct CGRect _imgvRecoverRect;
    NSString *_m_selName;
}

@property(retain, nonatomic) NSString *m_selName; // @synthesize m_selName=_m_selName;
- (void).cxx_destruct;
- (void)onRestore;
- (void)forceToClose;
- (void)onRecoverFailure;
- (void)onRecoverSuccess;
- (void)onLowSpaceForDBRecover:(id)arg1;
- (void)onDoRecover:(id)arg1;
- (void)updateProgress;
- (void)selectCell:(id)arg1;
- (void)makeCell:(id)arg1 cellInfo:(id)arg2;
- (void)addRecoverName:(id)arg1 order:(unsigned long long)arg2;
- (void)initView;
- (void)adjustTableViewRect;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)dealloc;
- (id)initWithName:(id)arg1;
- (id)init;
- (void)onRecoverProgressUpdate:(float)arg1;
- (void)onAddRecoverData:(id)arg1 order:(unsigned long long)arg2;
- (void)finishAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)startAlertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onRestoreProgressUpdate:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

