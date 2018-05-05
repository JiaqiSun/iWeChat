//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMDBRAssist-Protocol.h"

@class MMDBRAssistConfig, NSString, WCDBCorruptInfo;

@interface MMDBRAssist : NSObject <MMDBRAssist>
{
    WCDBCorruptInfo *m_recoveringCorruptInfo;
    MMDBRAssistConfig *m_config;
    WCDBCorruptInfo *m_latestCorruptInfo;
    struct MMDBRAssistInfo m_assistInfo;
}

+ (id)AllAssistObjects;
@property(retain, nonatomic) WCDBCorruptInfo *m_recoveringCorruptInfo; // @synthesize m_recoveringCorruptInfo;
@property(retain, nonatomic) WCDBCorruptInfo *m_latestCorruptInfo; // @synthesize m_latestCorruptInfo;
@property(retain, nonatomic) MMDBRAssistConfig *m_config; // @synthesize m_config;
@property(nonatomic) struct MMDBRAssistInfo m_assistInfo; // @synthesize m_assistInfo;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)DatabaseRecoverTip;
- (void)OperationOnSucc;
- (void)resetConfig;
- (void)clearRecoveringCorruptInfo;
- (void)clearLatestCorruptInfo;
- (void)CloseDatabase;
- (void)CloseDatabaseAndPreventOtherThreadsInBlock:(CDUnknownBlockType)arg1;
- (void)ClearCorruptNum;
- (id)LocalDatabaseName;
- (id)DatabasePath;
- (id)PossibleDBFileSuffix;
- (unsigned int)KeyRecoverFail;
- (unsigned int)KeyRecoverSucc;
- (unsigned int)KeyUIConfirm;
- (unsigned int)KeyUICancel;
- (unsigned int)DatabaseScene;
- (unsigned int)DatabaseID;
- (id)DatabaseName;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithAssistInfo:(const struct MMDBRAssistInfo *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

