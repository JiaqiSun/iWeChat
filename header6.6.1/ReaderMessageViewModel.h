//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageViewModel.h"

#import "RichTextLayoutDelegate-Protocol.h"

@class CContact, NSArray, NSMutableArray, NSString;

@interface ReaderMessageViewModel : BaseMessageViewModel <RichTextLayoutDelegate>
{
    struct CGSize m_titleViewSize;
    NSMutableArray *m_titleStyles;
    struct CGSize m_digestViewSize;
    NSMutableArray *m_digestStyles;
    NSArray *m_arrBtnList;
    double m_messageViewWidth;
    double m_digestViewMaxHeight;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (_Bool)shouldOpenNewLineAtY:(double)arg1 withLineHeight:(double)arg2 richTextView:(id)arg3;
- (double)digestViewMaxHeight;
- (id)timeToStr:(id)arg1;
- (id)getTitleString:(id)arg1 bBig:(_Bool)arg2 bGray:(_Bool)arg3;
- (id)getBigVideoImage;
- (id)getSmallVideoImage;
@property(readonly, nonatomic) double coverImageHeight;
@property(readonly, nonatomic) NSString *coverImageURL;
- (struct CGSize)calculateDigestViewSize;
@property(readonly, nonatomic) NSMutableArray *digestStyles;
@property(readonly, nonatomic) struct CGSize digestViewSize;
- (struct CGSize)calculateTitleViewSize;
@property(readonly, nonatomic) NSMutableArray *titleStyles;
@property(readonly, nonatomic) struct CGSize titleViewSize;
@property(readonly, nonatomic) NSString *titleText;
@property(readonly, nonatomic) double messageNodeViewHeight;
- (void)resetTextSize;
@property(readonly, nonatomic) double messageNodeViewWidth;
@property(readonly, nonatomic) CContact *brandContact;
@property(readonly, nonatomic) _Bool isForbidForward;
@property(readonly, nonatomic) _Bool isShowHeadImageAndNickname;
@property(readonly, nonatomic) _Bool isShowReadAll;
@property(readonly, nonatomic) NSArray *nodeBtnList;
@property(readonly, nonatomic) NSArray *readerWraps;
- (_Bool)isReaderWrapWeappJumpType;
- (_Bool)isDisableEditMode;
- (id)accessibilityDescription;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)initWithMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (id)cellViewClassName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

