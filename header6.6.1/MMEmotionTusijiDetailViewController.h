//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonGridViewDelegate-Protocol.h"
#import "IEmoticonPackageMgrExt-Protocol.h"
#import "IEmoticonPackageStateMgrExt-Protocol.h"
#import "SessionSelectControllerDelegate-Protocol.h"

@class EmoticonGridView, EmotionProgressView, NSString, UIButton, UIImageView, UILabel, UIScrollView, UIView;

@interface MMEmotionTusijiDetailViewController : MMUIViewController <EmoticonGridViewDelegate, SessionSelectControllerDelegate, IEmoticonPackageMgrExt, IEmoticonPackageStateMgrExt>
{
    UIButton *m_downloadButton;
    UIButton *m_useButton;
    UIScrollView *m_scrollView;
    EmoticonGridView *m_gridView;
    EmotionProgressView *m_progressView;
    UIImageView *m_headImageView;
    UIImageView *m_headCoverImageView;
    UIView *m_desBackView;
    UILabel *m_descLabel;
    UIView *m_previewTipView;
    UIView *m_previewBaseView;
    UIView *m_copyRightView;
    UIView *m_stateView;
}

@property(retain, nonatomic) UIView *m_stateView; // @synthesize m_stateView;
@property(retain, nonatomic) UIView *m_copyRightView; // @synthesize m_copyRightView;
@property(retain, nonatomic) UIView *m_previewBaseView; // @synthesize m_previewBaseView;
@property(retain, nonatomic) UIView *m_previewTipView; // @synthesize m_previewTipView;
@property(retain, nonatomic) UILabel *m_descLabel; // @synthesize m_descLabel;
@property(retain, nonatomic) UIView *m_desBackView; // @synthesize m_desBackView;
@property(retain, nonatomic) UIImageView *m_headCoverImageView; // @synthesize m_headCoverImageView;
@property(retain, nonatomic) UIImageView *m_headImageView; // @synthesize m_headImageView;
@property(retain, nonatomic) EmotionProgressView *m_progressView; // @synthesize m_progressView;
@property(retain, nonatomic) EmoticonGridView *m_gridView; // @synthesize m_gridView;
@property(retain, nonatomic) UIScrollView *m_scrollView; // @synthesize m_scrollView;
@property(retain, nonatomic) UIButton *m_useButton; // @synthesize m_useButton;
@property(retain, nonatomic) UIButton *m_downloadButton; // @synthesize m_downloadButton;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(int)arg2;
- (void)onState:(int)arg1;
- (void)OnDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)OnUpdateEmoticonPackageListAfterSort;
- (void)OnUpdateEmoticonPackageList;
- (void)didReceiveMemoryWarning;
- (void)onTapEmoticonWrap:(id)arg1;
- (id)getPreviewSuperview;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (_Bool)checkMsgControllerFrom:(id)arg1;
- (_Bool)recurisiveCheckMsgControllerToRootFrom:(id)arg1;
- (void)onClickUseButton;
- (void)onClickDownloadButton;
- (void)onLawBtnClick;
- (struct CGPoint)makePackTypeLabel:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeStatementCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeCopyRightCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)createEmoticonGridView:(id)arg1 margin:(struct CGPoint)arg2;
- (void)makeRightDotLine:(id)arg1 marginPoint:(struct CGPoint)arg2 width:(double)arg3 height:(double)arg4;
- (void)makeLeftDotLine:(id)arg1 marginPoint:(struct CGPoint)arg2 width:(double)arg3 height:(double)arg4;
- (struct CGPoint)makePreviewTipCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (void)createDesLabelView:(id)arg1;
- (void)createDesBackgroundView:(id)arg1;
- (void)createCoverImageView:(id)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

