//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IRsaCertMgrExt-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol WCAccountBindPhoneForRegCGIDelegate;

@interface WCAccountBindPhoneForRegCGI : MMObject <IRsaCertMgrExt>
{
    id <WCAccountBindPhoneForRegCGIDelegate> _delegate;
    NSMutableDictionary *_dicEventID;
    int _accountRegMode;
    NSString *_clientSeqID;
    NSString *_currentUserName;
    unsigned int _nextAuthType;
    unsigned int m_idc_redirect_count;
}

@property(retain, nonatomic) NSString *currentUserName; // @synthesize currentUserName=_currentUserName;
@property(retain, nonatomic) NSString *clientSeqID; // @synthesize clientSeqID=_clientSeqID;
- (void).cxx_destruct;
- (void)BindMobileAgain:(id)arg1;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)handleRespForBindMobile:(id)arg1;
- (_Bool)checkSafeDeviceVerifyCode:(id)arg1 authTicket:(id)arg2 verifyCode:(id)arg3;
- (_Bool)checkLoginVerifyCode:(id)arg1 verifyCode:(id)arg2;
- (_Bool)checkRegVerifyCode:(id)arg1 verifyCode:(id)arg2 checkType:(unsigned int)arg3;
- (_Bool)getSafeDeviceVoiceVerifyCode:(id)arg1 authTicket:(id)arg2 languageCode:(id)arg3;
- (_Bool)getLoginVoiceVerifyCode:(id)arg1 languageCode:(id)arg2;
- (_Bool)getRegVoiceVerifyCode:(id)arg1 languageCode:(id)arg2;
- (_Bool)getSafeDeviceVerifyCode:(id)arg1 authTicket:(id)arg2;
- (_Bool)getLoginVerifyCode:(id)arg1;
- (_Bool)getRegVerifyCode:(id)arg1;
- (_Bool)checkLoginPhoneNumberStatus:(id)arg1 tryCount:(unsigned int)arg2 adjustRet:(unsigned int)arg3;
- (_Bool)checkRegPhoneNumberStatus:(id)arg1 tryCount:(unsigned int)arg2 adjustRet:(unsigned int)arg3;
- (_Bool)createBindMobileProtobufEvent:(id)arg1;
- (void)cancelAllEvent;
- (void)removeCGI:(int)arg1;
- (_Bool)isRunningForCGI:(int)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

