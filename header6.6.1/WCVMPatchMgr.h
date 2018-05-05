//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMResourceMgrExt-Protocol.h"

@class NSString, WCVMPatchInfo;

@interface WCVMPatchMgr : NSObject <MMResourceMgrExt>
{
    _Bool m_isServiceInit;
    WCVMPatchInfo *_patchInfo;
}

+ (id)getInstance;
- (void).cxx_destruct;
- (void)reportIDKeyListData:(const vector_ecc2264a *)arg1;
- (void)reportIDKeyData:(unsigned int)arg1 key:(unsigned int)arg2 value:(unsigned int)arg3;
- (void)exitOnEnteringBackground;
- (void)setNewClientVersion:(unsigned int)arg1;
- (void)clearNewClientVersion;
- (unsigned int)newClientVersion;
- (void)runPatch;
- (_Bool)isPatchMatch:(id)arg1;
- (id)getUUIDs;
- (id)formatUUID:(id)arg1;
- (id)getRealPath:(id)arg1;
- (id)getPatchInfo;
- (_Bool)savePatchData:(id)arg1;
- (void)onResDeleteFinishWithResType:(unsigned int)arg1 subResType:(unsigned int)arg2;
- (void)onResUpdateFinish:(long long)arg1 resType:(unsigned int)arg2 subResType:(unsigned int)arg3;
- (void)dealloc;
- (void)forceUpdatePatchCode:(unsigned int)arg1;
- (void)registerExtension;
- (void)loadAndExecutePatch;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

