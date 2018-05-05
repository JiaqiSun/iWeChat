//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class CContact, DotLoadingView, MMUILabel, MMWebImageView, NSString, UIView, WAWebViewController;

@interface WANavLoadingLayer : MMUIView
{
    NSString *m_appid;
    NSString *m_userName;
    NSString *m_navTitle;
    CContact *m_contact;
    UIView *m_fakeNavBar;
    MMWebImageView *m_logoView;
    MMUILabel *m_titleLabel;
    DotLoadingView *m_loadingView;
    NSString *m_weappColorStr;
    int m_weappNavMode;
    _Bool m_isBlackStatusBar;
    NSString *m_weappBackgroundColorStr;
    _Bool _isLoading;
    WAWebViewController *_parentWebview;
}

@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) __weak WAWebViewController *parentWebview; // @synthesize parentWebview=_parentWebview;
- (void).cxx_destruct;
- (void)updateContactTitleWithNavMode:(int)arg1;
- (void)updateViewBaseOnWeAppViewConfig;
- (void)dismissWithCompleteBlock:(CDUnknownBlockType)arg1;
- (void)initLoadingView;
- (void)initContactTitle;
- (void)initLogoView;
- (void)initView;
- (id)initWithAppId:(id)arg1 userName:(id)arg2 navTitle:(id)arg3 parentWebView:(id)arg4;

@end

