//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class MMTimer;
@protocol WABaseInfoToastDelegate;

@interface WABaseInfoToast : MMUIView
{
    _Bool m_isMoving;
    MMTimer *m_autoDismissTimer;
    _Bool _isNeedAutoDismiss;
    id <WABaseInfoToastDelegate> _delegate;
    long long _showTimeStamp;
}

@property(nonatomic) long long showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
@property(nonatomic) _Bool isNeedAutoDismiss; // @synthesize isNeedAutoDismiss=_isNeedAutoDismiss;
@property(nonatomic) __weak id <WABaseInfoToastDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)autoDismiss;
- (void)show;
- (void)layoutSubviews;
- (void)dealloc;

@end

