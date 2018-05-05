//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface FaceRecogReporterFaceTimeMeter : MMObject
{
    unsigned int _totalFrameCount;
    unsigned long long _verifyStartTime;
    unsigned long long _verifyEndTime;
    unsigned long long _detectFaceStartTime;
    unsigned long long _detectFaceEndTime;
    unsigned long long _poseStartTime;
    unsigned long long _poseEndTime;
    unsigned long long _guideStartTime;
    unsigned long long _guideEndTime;
    unsigned long long _stepContinueStartTime;
    unsigned long long _stepContinueEndTime;
}

@property(nonatomic) unsigned int totalFrameCount; // @synthesize totalFrameCount=_totalFrameCount;
@property(nonatomic) unsigned long long stepContinueEndTime; // @synthesize stepContinueEndTime=_stepContinueEndTime;
@property(nonatomic) unsigned long long stepContinueStartTime; // @synthesize stepContinueStartTime=_stepContinueStartTime;
@property(nonatomic) unsigned long long guideEndTime; // @synthesize guideEndTime=_guideEndTime;
@property(nonatomic) unsigned long long guideStartTime; // @synthesize guideStartTime=_guideStartTime;
@property(nonatomic) unsigned long long poseEndTime; // @synthesize poseEndTime=_poseEndTime;
@property(nonatomic) unsigned long long poseStartTime; // @synthesize poseStartTime=_poseStartTime;
@property(nonatomic) unsigned long long detectFaceEndTime; // @synthesize detectFaceEndTime=_detectFaceEndTime;
@property(nonatomic) unsigned long long detectFaceStartTime; // @synthesize detectFaceStartTime=_detectFaceStartTime;
@property(nonatomic) unsigned long long verifyEndTime; // @synthesize verifyEndTime=_verifyEndTime;
@property(nonatomic) unsigned long long verifyStartTime; // @synthesize verifyStartTime=_verifyStartTime;
- (unsigned int)getAvgProcessTimePerFrame;
- (unsigned int)getDetectFaceTime;
- (unsigned int)getPoseTime;
- (unsigned int)getVerifyTime;

@end

