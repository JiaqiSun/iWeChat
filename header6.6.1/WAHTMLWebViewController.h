//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXBaseWebViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WAPageFlowReportExtention-Protocol.h"

@class MMWebProgressBar, NSString, UILabel, WAWebViewController, WAWebViewPlugin_HTMLWeb;

@interface WAHTMLWebViewController : WXBaseWebViewController <UIGestureRecognizerDelegate, WAPageFlowReportExtention>
{
    NSString *m_oLoadingUrl;
    UILabel *m_addressLabel;
    _Bool _didReceiveTerm;
    WAWebViewPlugin_HTMLWeb *_plugin;
    WAWebViewController *_superVC;
    MMWebProgressBar *_progressBar;
    struct CGRect _viewRect;
}

@property(nonatomic) struct CGRect viewRect; // @synthesize viewRect=_viewRect;
@property(nonatomic) _Bool didReceiveTerm; // @synthesize didReceiveTerm=_didReceiveTerm;
@property(retain, nonatomic) MMWebProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(nonatomic) __weak WAWebViewController *superVC; // @synthesize superVC=_superVC;
@property(nonatomic) __weak WAWebViewPlugin_HTMLWeb *plugin; // @synthesize plugin=_plugin;
- (void).cxx_destruct;
- (void)restoreAddressBar;
- (void)initAddressBarLabel;
- (id)getAddressBarHostText:(id)arg1;
- (void)onClickFailView:(id)arg1;
- (void)hideLoadFailView;
- (void)relayoutLoadFailView;
- (void)showLoadFailView:(unsigned int)arg1 errorCode:(long long)arg2;
- (void)reportCurrentPageInfo:(unsigned long long)arg1;
- (void)handleInsertHTMLDone;
- (void)handleHTMLViewDidBePoped;
- (void)configProgressBarWithWidth:(double)arg1;
- (void)updateHTMLFrame;
- (void)configViewFrame:(struct CGRect)arg1;
- (void)EXReport_onAppExit:(unsigned int)arg1 onPage:(id)arg2;
- (void)EXReport_onBackOnPage:(id)arg1 toPage:(id)arg2;
- (void)EXReport_onTargetToNativaPage:(id)arg1;
- (_Bool)useBlackStatusbar;
- (void)webViewControllerJSApiRespForEvent:(id)arg1 result:(id)arg2;
- (id)webViewControllerBackgroundColor;
- (id)webViewControllerPreInjectScriptStr;
- (void)webViewControllerForceSyncA8KeyError;
- (void)webViewControllerDidStartSyncA8Key:(id)arg1;
- (void)webViewControllerTitleDidChange:(id)arg1;
- (void)webViewControllerContentProcessDidTerminate:(id)arg1;
- (void)webViewController:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewControllerDidFinishLoad:(id)arg1;
- (void)webViewControllerDidStartLoad:(id)arg1;
- (_Bool)webViewController:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 isMainFrame:(_Bool)arg4;
- (void)dealloc;
- (_Bool)useCustomNavibar;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1 extraInfo:(id)arg2;
- (id)getDeafultReportHTMLJSAPIItem;
- (void)reportJSApiRespForEvent:(id)arg1 result:(id)arg2;
- (id)getDefaultHtmlActionItem;
- (void)onAppExit:(unsigned int)arg1 onPage:(id)arg2;
- (void)onBackOnPage:(id)arg1 toPage:(id)arg2;
- (void)onTargetToNativaPage:(id)arg1;
- (void)onTargetActionWebJump:(id)arg1 navigationType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

