//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "IRsaCertMgrExt-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class CdnInfo, NSData, NSString;
@protocol FaceRecogConfigLogicDelegate;

@interface FaceRecogConfigLogic : MMObject <PBMessageObserverDelegate, IRsaCertMgrExt>
{
    CdnInfo *_cdnInfo;
    _Bool _bRSA;
    int _idcRedirectCount;
    id <FaceRecogConfigLogicDelegate> _delegate;
    unsigned long long _bioId;
    NSData *_configBuffer;
}

@property(nonatomic) int idcRedirectCount; // @synthesize idcRedirectCount=_idcRedirectCount;
@property(retain, nonatomic) NSData *configBuffer; // @synthesize configBuffer=_configBuffer;
@property(nonatomic) unsigned long long bioId; // @synthesize bioId=_bioId;
@property(nonatomic) __weak id <FaceRecogConfigLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onRsaGetBioConfigAgain:(id)arg1;
- (void)handleGetBioConfig:(id)arg1;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)unInitCdnInfo;
- (void)initCdnInfo;
- (_Bool)startRsaGetBioConfigForType:(unsigned int)arg1 atScene:(unsigned int)arg2 userTicket:(id)arg3;
- (_Bool)startGetBioConfigForType:(unsigned int)arg1 atScene:(unsigned int)arg2 userTicket:(id)arg3 isRsa:(_Bool)arg4;
- (_Bool)startGetBioConfigForType:(unsigned int)arg1 atScene:(unsigned int)arg2;
- (id)getConfigBuffer;
- (unsigned long long)getBioId;
- (_Bool)isConfigReady;
- (void)resetConfig;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

