//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@interface FaceRecogReporter : MMObject
{
}

+ (int)getReportScene:(unsigned int)arg1;
+ (void)reportInterfaceCalledResult:(unsigned int)arg1 funcName:(id)arg2 bizType:(unsigned int)arg3 appId:(id)arg4 result:(unsigned int)arg5 tryCount:(unsigned int)arg6 time:(unsigned int)arg7;
+ (void)reportFaceDetectResult:(unsigned int)arg1 isRetry:(_Bool)arg2 detectResult:(unsigned int)arg3 errorType:(unsigned int)arg4 errorCode:(unsigned int)arg5 errorCounter:(id)arg6 timeMeter:(id)arg7 appId:(id)arg8;
+ (void)reportFaceDetectVideoUploadResult:(unsigned long long)arg1 errorType:(unsigned int)arg2 errorCode:(unsigned int)arg3;
+ (void)reportStartFaceDetect:(unsigned int)arg1 isRetry:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

