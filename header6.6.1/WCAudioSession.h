//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol WCAudioSessionDelegate;

@interface WCAudioSession : NSObject
{
    _Bool _m_otherPlayingBeforeActive;
    id <WCAudioSessionDelegate> _m_delegate;
}

+ (id)shareInstance;
@property(nonatomic) _Bool m_otherPlayingBeforeActive; // @synthesize m_otherPlayingBeforeActive=_m_otherPlayingBeforeActive;
@property(nonatomic) __weak id <WCAudioSessionDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (_Bool)tryActiveAudioSession;
- (void)handleRouteChange:(id)arg1;
- (unsigned long long)currentCategoryId;
- (float)getOutputVolume;
- (void)activePlayAndRecordDuckOthers;
- (void)activePlaybackDuckOthers;
- (void)activePlaybackMixWithOthers;
- (void)activeMixWithOtherAudio;
- (_Bool)isOtherAudioPlaying;
- (unsigned long long)getCurrentAudioMode;
- (void)enableBluetoothInput;
- (void)setSpeaker:(_Bool)arg1;
- (void)reportSetCategoryError:(id)arg1;
- (void)setCategroy:(unsigned long long)arg1 options:(unsigned long long)arg2;
- (void)setCategroy:(unsigned long long)arg1 defaultToSpeaker:(_Bool)arg2 mixWithOthers:(_Bool)arg3;
- (void)setCategroy:(unsigned long long)arg1;
- (void)setActive:(_Bool)arg1;
- (void)restart;
- (void)updateDelegate:(id)arg1;
- (_Bool)otherPlayingBeforeActive;
- (void)dealloc;

@end

