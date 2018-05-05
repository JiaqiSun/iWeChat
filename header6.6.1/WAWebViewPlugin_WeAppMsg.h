//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAWebViewPlugin_embedView.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class ForwardMessageLogicController, NSData, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, UIImageView;
@protocol IWAWebViewPluginDelegate;

@interface WAWebViewPlugin_WeAppMsg : WAWebViewPlugin_embedView <ForwardMessageLogicDelegate, PBMessageObserverDelegate>
{
    struct CGPoint _ptOffset;
    _Bool _offsetChanged;
    NSMutableDictionary *_shareKeys;
    NSMutableArray *_reportArray;
    _Bool _waitingShare;
    UIImageView *_maskView;
    _Bool _downloadImage;
    _Bool _firstShare;
    _Bool _shouldUseDynamicShare;
    _Bool _bNoCapture;
    _Bool _bInSharing;
    int _cardType;
    id <IWAWebViewPluginDelegate> _resultDelegate;
    NSData *_thumbData;
    NSMutableDictionary *_customData;
    ForwardMessageLogicController *_forwardLogic;
    NSMutableDictionary *_scrollOffset;
    ForwardMessageLogicController *_shareController;
    NSDictionary *_shareParam;
}

@property(retain, nonatomic) NSDictionary *shareParam; // @synthesize shareParam=_shareParam;
@property(nonatomic) __weak ForwardMessageLogicController *shareController; // @synthesize shareController=_shareController;
@property(retain, nonatomic) NSMutableDictionary *scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) NSMutableDictionary *customData; // @synthesize customData=_customData;
@property(nonatomic) _Bool bInSharing; // @synthesize bInSharing=_bInSharing;
@property(nonatomic) _Bool bNoCapture; // @synthesize bNoCapture=_bNoCapture;
@property(nonatomic) _Bool shouldUseDynamicShare; // @synthesize shouldUseDynamicShare=_shouldUseDynamicShare;
@property(nonatomic) int cardType; // @synthesize cardType=_cardType;
@property(nonatomic) _Bool firstShare; // @synthesize firstShare=_firstShare;
@property(retain, nonatomic) NSData *thumbData; // @synthesize thumbData=_thumbData;
@property(nonatomic) __weak id <IWAWebViewPluginDelegate> resultDelegate; // @synthesize resultDelegate=_resultDelegate;
- (void).cxx_destruct;
- (void)takeWeAppForwardMessage:(id)arg1;
- (void)openWeAppForwardMessage:(id)arg1 type:(int)arg2;
- (void)takeSnapShot;
- (void)restoreScrollOffsets:(id)arg1;
- (void)resetScrollOffsets:(id)arg1;
- (void)saveScrollOffsets:(id)arg1;
- (void)saveRestoreWebViewScroll:(_Bool)arg1;
- (void)OnForwardWeAppMessageSend:(id)arg1 appMsgItem:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (id)getCurrentViewController;
- (void)OnForwardMessageSelectSession:(id)arg1;
- (void)OnForwardMessageException:(id)arg1;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)pluginReportPageEvent;
- (void)shareToFriend:(int)arg1 appInfo:(id)arg2;
- (_Bool)isABTestBanForward;
- (void)onCustomWeAppMessage:(id)arg1;
- (void)getWeAppMessage:(int)arg1 customData:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

