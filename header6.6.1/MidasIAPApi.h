//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MidasIAPApi : NSObject
{
}

+ (_Bool)isNetReqType:(int)arg1;
+ (_Bool)isPayReqType:(int)arg1;
+ (_Bool)checkBundle:(id)arg1;
+ (_Bool)validateParams:(id)arg1 delegate:(id)arg2;
+ (void)showSandboxAlert:(CDUnknownBlockType)arg1;
+ (void)registerUuId:(CDUnknownBlockType)arg1;
+ (_Bool)isMultiTouch;
+ (void)launchNet:(id)arg1 delegate:(id)arg2;
+ (void)launchPay:(id)arg1 delegate:(id)arg2;
+ (_Bool)isIAPEnable;
+ (id)getVersion;
+ (_Bool)initializeWithReq:(id)arg1 environment:(id)arg2 locale:(id)arg3 extra:(id)arg4 reprovideDelegate:(id)arg5 runtimeDelegate:(id)arg6;

@end

