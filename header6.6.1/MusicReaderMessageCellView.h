//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderMessageCellView.h"

#import "MMMusicPlayerContollerDelegate-Protocol.h"

@class MMMusicPlayerContoller, MMWebImageView, MusicReaderMessageViewModel, NSString, UIImageView, UIView;

@interface MusicReaderMessageCellView : ReaderMessageCellView <MMMusicPlayerContollerDelegate>
{
    UIImageView *m_bgImageView;
    UIView *m_titleSingerView;
    MMMusicPlayerContoller *m_playButton;
    MMWebImageView *m_thumbCoverImgView;
}

- (void).cxx_destruct;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)onClickToPlayMusic:(id)arg1 playState:(int)arg2;
- (id)viewForTitleAndSingerLabel;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) MusicReaderMessageViewModel *viewModel; // @dynamic viewModel;

@end

