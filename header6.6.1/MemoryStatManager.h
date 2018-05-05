//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "INewABTestMgrExt-Protocol.h"

@class MemoryRecordInfo, MemoryStatConfig, MemoryStatReporter, NSRecursiveLock, NSString;

@interface MemoryStatManager : NSObject <INewABTestMgrExt>
{
    NSString *m_rootDir;
    NSString *m_dataDir;
    NSString *m_configPath;
    NSRecursiveLock *m_lock;
    MemoryStatConfig *m_config;
    MemoryRecordInfo *m_currRecord;
    MemoryRecordInfo *m_lastRecord;
    unsigned long long m_userType;
    _Bool m_isStartTracking;
    MemoryStatReporter *m_reporter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)onModifyABTestItem:(id)arg1 bizId:(id)arg2 abTestItem:(id)arg3;
- (void)doIDKeyReport:(int)arg1 value:(int)arg2;
- (void)checkABTest:(_Bool)arg1;
- (void)handleWillEnterForegroundNotification:(id)arg1;
- (void)handleDidEnterBackgroundNotification:(id)arg1;
- (void)handleDidBecomeActiveNotification:(id)arg1;
- (void)onSignalCrash;
- (void)startTracking;
- (void)saveConfig;
- (_Bool)checkDeviceSatisfied;
- (_Bool)checkDataValid;
- (void)clearUnnecessaryData;
- (void)loadConfig;
- (void)getlastFOOMThreadInfos;
- (void)removeCurrentThread;
- (void)addCurrentThreadToMonitor:(id)arg1;
- (void)uploadReport:(id)arg1;
- (id)recordList;
- (void)removeAllFullReport;
- (void)uploadAllFullReport;
- (_Bool)shouldEnterUploadReport;
- (void)setMemoryStatEnabled:(_Bool)arg1;
- (_Bool)isMemoryStatEnabled;
- (void)uploadLog;
- (id)currUsrName;
- (void)checkAndRecord;
- (id)init;

@end

