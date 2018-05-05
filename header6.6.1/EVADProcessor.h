//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSDate, NSString;
@protocol EVADProcessorDelegate;

@interface EVADProcessor : MMObject
{
    _Bool _hasSpeak;
    NSDate *m_dtLastChangeToSilence;
    struct AudioCoder *m_silkEncoder;
    _Bool _bCurrentDataNeed;
    _Bool _firstStartDetect;
    int _currentState;
    int _previousState;
    unsigned int _delayDataSize;
    NSString *m_iOSPath;
    NSString *m_iOSVADDir;
    id <EVADProcessorDelegate> _delegate;
    char *_delayData;
    void *_handle;
    struct circle_buffer _pcm_delay_buffer;
}

@property(nonatomic) struct circle_buffer pcm_delay_buffer; // @synthesize pcm_delay_buffer=_pcm_delay_buffer;
@property(nonatomic) _Bool firstStartDetect; // @synthesize firstStartDetect=_firstStartDetect;
@property(nonatomic) void *handle; // @synthesize handle=_handle;
@property(nonatomic) unsigned int delayDataSize; // @synthesize delayDataSize=_delayDataSize;
@property(nonatomic) char *delayData; // @synthesize delayData=_delayData;
@property(nonatomic) int previousState; // @synthesize previousState=_previousState;
@property(nonatomic) int currentState; // @synthesize currentState=_currentState;
@property(nonatomic) _Bool bCurrentDataNeed; // @synthesize bCurrentDataNeed=_bCurrentDataNeed;
@property(nonatomic) __weak id <EVADProcessorDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *m_iOSVADDir; // @synthesize m_iOSVADDir;
@property(retain, nonatomic) NSString *m_iOSPath; // @synthesize m_iOSPath;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)voiceData:(const char *)arg1 length:(unsigned int)arg2;
- (void)releaseProcessor;
- (void)processSpxVoiceData:(id)arg1 queueItem:(id)arg2;
- (void)setupProcessor;
- (void)dealloc;
- (id)init;

@end

