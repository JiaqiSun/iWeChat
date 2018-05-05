//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FullScreenViewController.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "FullScreenGestureDelegate-Protocol.h"
#import "IUiUtilExt-Protocol.h"
#import "SightViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class CMessageWrap, FavoritesItem, FavoritesItemDataField, ForwardMessageLogicController, MMUIViewController, NSString, SightView, UIImageView, UIView, WXFullScreenGestureRecognizer;

@interface WNSightViewController : FullScreenViewController <SightViewDelegate, IUiUtilExt, FullScreenGestureDelegate, ForwardMessageLogicDelegate, WCActionSheetDelegate>
{
    MMUIViewController *_fullScreenWindow;
    UIView *_nodeView;
    UIView *_fullScreenContent;
    SightView *_sightView;
    _Bool _fullScreenPlaying;
    UIImageView *_thumbImageView;
    struct CGRect _thumbRect;
    WXFullScreenGestureRecognizer *m_gestureReconizer;
    _Bool m_bPreventRotate;
    CDStruct_1b6d18a9 m_currentPlayTime;
    ForwardMessageLogicController *m_forwardMsgLogic;
    FavoritesItemDataField *_favData;
    FavoritesItem *_favItem;
    CMessageWrap *_msgWrap;
    _Bool silencePlay;
}

@property(nonatomic) _Bool silencePlay; // @synthesize silencePlay;
- (void).cxx_destruct;
- (void)tryToSaveVideoToAlbum;
- (void)trySendSightToFriend;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onShowSightAction;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenClose;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenSingleTap;
- (id)getCurrentViewController;
- (void)clearSubviews;
- (double)calTransformFromRect:(struct CGRect)arg1;
- (void)startLoadFullDownloadView;
- (_Bool)checkDownloadForOperateMode:(unsigned int)arg1;
- (void)stopAndCloseFullScreenWindow;
- (void)setThumbImage:(id)arg1;
- (_Bool)isFullScreenPlaying;
- (void)showVCAnimation;
- (void)initGestures;
- (void)initWithWNSight:(id)arg1 FavoritesItem:(id)arg2 MessageWrap:(id)arg3 superWindow:(id)arg4 thumbView:(id)arg5 nodeView:(id)arg6;
- (_Bool)shouldAutorotate;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

