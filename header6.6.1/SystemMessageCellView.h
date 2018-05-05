//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageCellView.h"

#import "ChatBackgroundExt-Protocol.h"
#import "ILinkEventExt-Protocol.h"

@class NSString, RichTextView, SystemMessageViewModel, UIImageView;

@interface SystemMessageCellView : BaseMessageCellView <ILinkEventExt, ChatBackgroundExt>
{
    UIImageView *m_bgImageView;
    RichTextView *m_richTextView;
    _Bool _useLightStyle;
}

@property(nonatomic) _Bool useLightStyle; // @synthesize useLightStyle=_useLightStyle;
- (void).cxx_destruct;
- (void)onChatBackgroundChanged:(id)arg1;
- (_Bool)accessibilityActivate;
- (_Bool)isAccessibilityElement;
- (void)onWeAppLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLongTouch;
- (void)layoutContentView;
- (_Bool)needUpdateLightStyle;
- (void)updateStatus;
- (_Bool)canBeReused;
- (void)dealloc;
- (id)initWithViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) SystemMessageViewModel *viewModel; // @dynamic viewModel;

@end

