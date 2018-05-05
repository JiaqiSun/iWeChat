//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "NotifyFromMainCtrlDelegate-Protocol.h"

@class CMMDB, MMTimer, NSMutableDictionary, NSRecursiveLock;
@protocol UploadVoiceDelegate;

@interface MMNewUploadVoiceMgr : MMObject <NotifyFromMainCtrlDelegate>
{
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
    MMTimer *m_timerCheck;
    unsigned int m_uiCurUploadID;
    _Bool m_bIsUploading;
    id <UploadVoiceDelegate> m_delNotifyToSender;
    unsigned int m_uiQueueCount;
    _Bool m_bDBError;
    NSMutableDictionary *m_dicMergeResult;
}

@property(nonatomic) __weak id <UploadVoiceDelegate> m_delNotifyToSender; // @synthesize m_delNotifyToSender;
@property(retain, nonatomic) MMTimer *m_timerCheck; // @synthesize m_timerCheck;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock;
@property(retain, nonatomic) CMMDB *m_oMMDB; // @synthesize m_oMMDB;
- (void).cxx_destruct;
- (id)getPBPath;
- (unsigned int)GetCountOfUploadVoice;
- (_Bool)IsExistInUploadVoiceByToUser:(id)arg1 localId:(unsigned int)arg2 offset:(unsigned int)arg3;
- (id)GetOneUploadVoice;
- (_Bool)DeleteUploadVoiceByToUser:(id)arg1 localId:(unsigned int)arg2 offset:(unsigned int)arg3;
- (_Bool)DeleteUploadVoiceByToUser:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)UpdateUploadVoicePropertys:(id)arg1 byUserName:(id)arg2 localId:(unsigned int)arg3 offset:(unsigned int)arg4;
- (_Bool)UpdateUploadVoiceRetryCount:(id)arg1 byUserName:(id)arg2 localId:(unsigned int)arg3 offset:(unsigned int)arg4;
- (_Bool)InsertUploadVoice:(id)arg1;
- (void)savePB:(id)arg1;
- (id)loadPB;
- (void)migrateUploadVoice;
- (void)HandleUploadVoiceOK:(id)arg1;
- (_Bool)IsInUploadQueue:(id)arg1 LocalID:(unsigned int)arg2 Offset:(unsigned int)arg3;
- (void)MainThreadNotifyUploadVoiceOK:(id)arg1;
- (_Bool)PrepareForUpload:(id)arg1 packetExpireTime:(_Bool)arg2;
- (_Bool)PrepareForUploadEx:(id)arg1;
- (void)UpdateRetryCount:(id)arg1;
- (_Bool)loadDataFromAudioFileForExpirePacket:(id)arg1;
- (_Bool)loadDataFromAudioFile:(id)arg1;
- (id)getOneUploadItemFromDB;
- (_Bool)uploadOnePacket;
- (_Bool)startSend;
- (id)getFromUsrNameBytoUsrName:(id)arg1;
- (void)CancelUpload:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 Offset:(unsigned int)arg4 Len:(unsigned int)arg5 VoiceTime:(unsigned int)arg6 CreateTime:(unsigned int)arg7 EndFlag:(unsigned int)arg8 CancelFlag:(unsigned int)arg9 VoiceFormat:(unsigned int)arg10;
- (void)DeleteMsg:(id)arg1 LocalID:(unsigned int)arg2 Happen:(unsigned int)arg3;
- (_Bool)mergeToDB:(id)arg1;
- (_Bool)insertNewRowInUploadVoice:(id)arg1;
- (void)NotifyFromMainCtrl:(unsigned int)arg1 MessageInfo:(id)arg2 Event:(unsigned int)arg3;
- (void)ResendVoiceMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddNewPart:(id)arg1 LocalID:(unsigned int)arg2 n64SvrID:(long long)arg3 Offset:(unsigned int)arg4 Len:(unsigned int)arg5 VoiceTime:(unsigned int)arg6 CreateTime:(unsigned int)arg7 EndFlag:(unsigned int)arg8 CancelFlag:(unsigned int)arg9 VoiceFormat:(unsigned int)arg10 ForwardFlag:(unsigned int)arg11 msgSource:(id)arg12;
- (_Bool)ModifyMsgSource:(id)arg1 byToUser:(id)arg2 localId:(unsigned int)arg3;
- (void)TimerCheckUploadQueue;
- (void)Stop;
- (void)Start;
- (void)InitUploadMgr:(id)arg1 Lock:(id)arg2 Delegate:(id)arg3;
- (void)dealloc;
- (id)init;

@end

