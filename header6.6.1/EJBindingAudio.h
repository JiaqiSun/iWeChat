//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EJBindingEventedBase.h"

#import "EJAudioSourceDelegate-Protocol.h"

@class NSObject, NSOperation, NSString;
@protocol EJAudioSource;

@interface EJBindingAudio : EJBindingEventedBase <EJAudioSourceDelegate>
{
    NSString *path;
    int preload;
    NSObject<EJAudioSource> *source;
    _Bool loop;
    _Bool ended;
    _Bool paused;
    _Bool muted;
    _Bool loading;
    _Bool playAfterLoad;
    float volume;
    float playbackRate;
    NSOperation *loadCallback;
    NSOperation *loadOp;
}

+ (id)_const_HAVE_ENOUGH_DATA;
+ (id)_const_HAVE_FUTURE_DATA;
+ (id)_const_HAVE_CURRENT_DATA;
+ (id)_const_HAVE_METADATA;
+ (id)_const_HAVE_NOTHING;
+ (id)_const_tagName;
+ (id)_const_nodeName;
+ (void *)_ptr_to_set_onended;
+ (void *)_ptr_to_get_onended;
+ (void *)_ptr_to_set_oncanplaythrough;
+ (void *)_ptr_to_get_oncanplaythrough;
+ (void *)_ptr_to_set_onloadedmetadata;
+ (void *)_ptr_to_get_onloadedmetadata;
+ (void *)_ptr_to_get_readyState;
+ (void *)_ptr_to_set_preload;
+ (void *)_ptr_to_get_preload;
+ (void *)_ptr_to_get_paused;
+ (void *)_ptr_to_get_ended;
+ (void *)_ptr_to_set_muted;
+ (void *)_ptr_to_get_muted;
+ (void *)_ptr_to_set_src;
+ (void *)_ptr_to_get_src;
+ (void *)_ptr_to_set_currentTime;
+ (void *)_ptr_to_get_currentTime;
+ (void *)_ptr_to_set_playbackRate;
+ (void *)_ptr_to_get_playbackRate;
+ (void *)_ptr_to_set_volume;
+ (void *)_ptr_to_get_volume;
+ (void *)_ptr_to_set_autoplay;
+ (void *)_ptr_to_get_autoplay;
+ (void *)_ptr_to_set_loop;
+ (void *)_ptr_to_get_loop;
+ (void *)_ptr_to_get_duration;
+ (void *)_ptr_to_func_cloneNode;
+ (void *)_ptr_to_func_canPlayType;
+ (void *)_ptr_to_func_load;
+ (void *)_ptr_to_func_pause;
+ (void *)_ptr_to_func_play;
@property(nonatomic) int preload; // @synthesize preload;
@property(retain, nonatomic) NSString *path; // @synthesize path;
@property(nonatomic) float volume; // @synthesize volume;
@property(nonatomic) _Bool ended; // @synthesize ended;
@property(nonatomic) _Bool loop; // @synthesize loop;
- (struct OpaqueJSValue *)_get_readyState:(struct OpaqueJSContext *)arg1;
- (void)_set_preload:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)_get_preload:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_paused:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_ended:(struct OpaqueJSContext *)arg1;
- (void)_set_muted:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)_get_muted:(struct OpaqueJSContext *)arg1;
- (void)_set_src:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)_get_src:(struct OpaqueJSContext *)arg1;
- (void)_set_currentTime:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)_get_currentTime:(struct OpaqueJSContext *)arg1;
- (void)_set_playbackRate:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)_get_playbackRate:(struct OpaqueJSContext *)arg1;
- (void)_set_volume:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)_get_volume:(struct OpaqueJSContext *)arg1;
- (void)_set_autoplay:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)_get_autoplay:(struct OpaqueJSContext *)arg1;
- (void)_set_loop:(struct OpaqueJSContext *)arg1 value:(struct OpaqueJSValue *)arg2;
- (struct OpaqueJSValue *)_get_loop:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_get_duration:(struct OpaqueJSContext *)arg1;
- (struct OpaqueJSValue *)_func_cloneNode:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_canPlayType:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_load:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_pause:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (struct OpaqueJSValue *)_func_play:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;
- (void)sourceDidFinishPlaying:(id)arg1;
- (void)endLoad;
- (void)backgroundLoad;
- (void)prepareGarbageCollection;
- (void)load;
- (void)setSourcePath:(id)arg1;
- (void)dealloc;
- (id)initWithContext:(struct OpaqueJSContext *)arg1 argc:(unsigned long long)arg2 argv:(const struct OpaqueJSValue **)arg3;

@end

