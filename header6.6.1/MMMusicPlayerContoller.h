//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "IMusicPlayerExt-Protocol.h"
#import "MMMusicPlayerExt-Protocol.h"

@class MMMusicInfo, NSString, UIImage;
@protocol MMMusicPlayerContollerDelegate;

@interface MMMusicPlayerContoller : UIButton <MMMusicPlayerExt, IMusicPlayerExt>
{
    MMMusicInfo *m_musicInfo;
    UIImage *m_imgForIdle;
    UIImage *m_imgForIdleHL;
    UIImage *m_imgForPlaying;
    UIImage *m_imgForPlayingHL;
    id <MMMusicPlayerContollerDelegate> m_playDelegate;
    int m_playerSource;
    int m_contentType;
    NSString *m_key;
    NSString *m_title;
    NSString *m_photoUrl;
    NSString *m_url;
    NSString *m_lowBandUrl;
    NSString *m_webUrl;
    NSString *m_singer;
}

@property(nonatomic) __weak id <MMMusicPlayerContollerDelegate> m_playDelegate; // @synthesize m_playDelegate;
@property(retain, nonatomic) NSString *m_singer; // @synthesize m_singer;
@property(retain, nonatomic) NSString *m_webUrl; // @synthesize m_webUrl;
@property(retain, nonatomic) NSString *m_lowBandUrl; // @synthesize m_lowBandUrl;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;
@property(retain, nonatomic) NSString *m_photoUrl; // @synthesize m_photoUrl;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(nonatomic) int m_contentType; // @synthesize m_contentType;
@property(nonatomic) int m_playerSource; // @synthesize m_playerSource;
@property(retain, nonatomic) NSString *m_key; // @synthesize m_key;
@property(retain, nonatomic) UIImage *m_imgForPlayingHL; // @synthesize m_imgForPlayingHL;
@property(retain, nonatomic) UIImage *m_imgForPlaying; // @synthesize m_imgForPlaying;
@property(retain, nonatomic) UIImage *m_imgForIdleHL; // @synthesize m_imgForIdleHL;
@property(retain, nonatomic) UIImage *m_imgForIdle; // @synthesize m_imgForIdle;
@property(retain, nonatomic) MMMusicInfo *m_musicInfo; // @synthesize m_musicInfo;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 HLImage:(id)arg2 forPlayerState:(int)arg3;
- (void)setMusicSinger:(id)arg1;
- (void)setMusicWebUrl:(id)arg1;
- (void)setLowBandUrl:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setMusicPhotoUrl:(id)arg1;
- (void)setMusicTitle:(id)arg1;
- (void)setPlayerType:(int)arg1;
- (void)setPlayerSource:(int)arg1;
- (void)setKey:(id)arg1;
- (id)getMusicInfo;
- (void)setMusicInfo:(id)arg1;
- (void)addMusicItem;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setMusicListSource:(int)arg1;
- (void)onClickOnMe;
- (void)onLevelMeterPeak:(float)arg1;
- (void)onMusicPlayStatusChanged;
- (void)updateButtonImage;
- (_Bool)isCurrentControllForPlayer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

