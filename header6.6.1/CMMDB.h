//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMTimer, NSMutableSet, NSRecursiveLock, NewContactDB, OpLogDB, WCTDatabase, WCTTable;

@interface CMMDB : NSObject
{
    NSRecursiveLock *m_lockMMDB;
    NSMutableSet *m_setMessageCreatedTable;
    NSMutableSet *m_setMessageExtCreatedTable;
    OpLogDB *m_oplogWcdb;
    MMTimer *m_backupTimer;
    _Bool m_checkCorruption;
    WCTDatabase *m_db;
    NewContactDB *m_contactDB;
    WCTTable *m_tableContact;
    WCTTable *m_tableContactExt;
    WCTTable *m_tableContactMeta;
    WCTTable *m_tableSendMsg;
    WCTTable *m_tableUploadVoice;
    WCTTable *m_tableDownloadVoice;
    WCTTable *m_tableRevokeMsg;
    WCTTable *m_tableEmoticon;
    WCTTable *m_tableEmoticonUpload;
    WCTTable *m_tableEmoticonDownload;
    WCTTable *m_tableEmoticonPackage;
    WCTTable *m_tableBottle;
    WCTTable *m_tableBottleContact;
    WCTTable *m_tableMassSendContact;
    WCTTable *_m_tableQQContact;
    WCTTable *_m_tableMessageBizExt;
}

+ (Class)getClassFromMessageTableName:(id)arg1;
+ (id)md5StringFromUserName:(id)arg1;
+ (id)helloMessageTableName:(id)arg1;
+ (id)messageExtTableName:(id)arg1;
+ (id)messageTableName:(id)arg1;
+ (id)dbPathWithDocDir:(id)arg1 userName:(id)arg2;
@property(retain) WCTTable *m_tableMessageBizExt; // @synthesize m_tableMessageBizExt=_m_tableMessageBizExt;
@property(retain) WCTTable *m_tableQQContact; // @synthesize m_tableQQContact=_m_tableQQContact;
@property(retain, nonatomic) OpLogDB *m_oplogWcdb; // @synthesize m_oplogWcdb;
@property(retain) WCTTable *m_tableMassSendContact; // @synthesize m_tableMassSendContact;
@property(retain) WCTTable *m_tableBottleContact; // @synthesize m_tableBottleContact;
@property(retain) WCTTable *m_tableBottle; // @synthesize m_tableBottle;
@property(retain) WCTTable *m_tableEmoticonPackage; // @synthesize m_tableEmoticonPackage;
@property(retain) WCTTable *m_tableEmoticonDownload; // @synthesize m_tableEmoticonDownload;
@property(retain) WCTTable *m_tableEmoticonUpload; // @synthesize m_tableEmoticonUpload;
@property(retain) WCTTable *m_tableEmoticon; // @synthesize m_tableEmoticon;
@property(retain) WCTTable *m_tableRevokeMsg; // @synthesize m_tableRevokeMsg;
@property(retain) WCTTable *m_tableDownloadVoice; // @synthesize m_tableDownloadVoice;
@property(retain) WCTTable *m_tableUploadVoice; // @synthesize m_tableUploadVoice;
@property(retain) WCTTable *m_tableSendMsg; // @synthesize m_tableSendMsg;
@property(retain) WCTTable *m_tableContactMeta; // @synthesize m_tableContactMeta;
@property(retain) WCTTable *m_tableContactExt; // @synthesize m_tableContactExt;
@property(retain) WCTTable *m_tableContact; // @synthesize m_tableContact;
@property(retain) NewContactDB *m_contactDB; // @synthesize m_contactDB;
@property(retain) WCTDatabase *m_db; // @synthesize m_db;
- (void).cxx_destruct;
- (void)clearMessageExtCreatedTableCache;
- (void)removeMessageExtCreatedTableCache:(id)arg1;
- (void)addMessageExtCreatedTableCache:(id)arg1;
- (_Bool)isMessageExtTableCreated:(id)arg1;
- (void)clearMessageCreatedTableCache;
- (void)removeMessageCreatedTableCache:(id)arg1;
- (void)addMessageCreatedTableCache:(id)arg1;
- (_Bool)isMessageTableCreated:(id)arg1;
- (void)setupMessageCreatedTableCache;
- (void)CreateWCPayMessageBizExtTable;
- (void)CreateNewWCPayBizExtTable:(unsigned int)arg1;
- (id)GetNewWCPayBizExtTable:(unsigned int)arg1;
- (id)GetHelloMessageTable:(id)arg1;
- (_Bool)CreateHelloMessageTable:(id)arg1;
- (void)emptyTrashTable;
- (void)autoEmptyTrashTable;
- (void)TrashMessageAndExtTables:(id)arg1;
- (void)TrashMessageAndExtTable:(id)arg1;
- (void)ClearMessageAndExtCreatedTableCache;
- (void)DropMessageExtTable:(id)arg1;
- (id)GetMessageExtTable:(id)arg1;
- (_Bool)CreateMessageExtTable:(id)arg1;
- (void)DropMessageTable:(id)arg1;
- (id)GetMessageTable:(id)arg1;
- (_Bool)CreateMessageTable:(id)arg1;
- (id)internalCreateTable:(id)arg1 tableClass:(Class)arg2;
- (void)createOtherTable;
- (void)createBottleTable;
- (void)createEmoticonTable;
- (void)createMessagesTable;
- (void)createContactTable;
- (void)createTables;
- (void)clearTables;
- (void)closeDBBeforeInit;
- (void)onTransactionRollback;
- (void)DropEmoticonDownloadTable;
- (_Bool)IsEmoticonPackageTableExist;
- (id)dbPaths;
- (id)dbPath;
- (_Bool)rollbackTransaction;
- (_Bool)commitTransaction;
- (_Bool)beginTransaction;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1 event:(CDUnknownBlockType)arg2;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)CloseAndPreventOtherThreadsInBlock:(CDUnknownBlockType)arg1;
- (void)Close;
- (void)InitMMDB:(id)arg1 UsrName:(id)arg2 NewUser:(_Bool *)arg3;
- (void)dealloc;
- (id)init;
- (_Bool)DeleteMassSendContact:(id)arg1;
- (id)GetAllMassSendContact;
- (_Bool)DeleteBottle:(unsigned int)arg1;
- (id)GetAllBottle:(const struct WCTPropertyList *)arg1;
- (id)GetBottleByLocalID:(unsigned int)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (unsigned int)GetServerIDInBottleByLocalID:(unsigned int)arg1;
- (unsigned int)GetLocalIDInBottleByBottleID:(id)arg1;
- (_Bool)UpdateBottle:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 byLocalId:(unsigned int)arg3;
- (unsigned int)InsertBottle:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (_Bool)DeleteBottleContact:(id)arg1;
- (unsigned int)GetCountOfBottleContact;
- (id)GetAllBottleContact:(const struct WCTPropertyList *)arg1;
- (id)GetBottleContact:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (_Bool)UpdateBottleContact:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 byUserName:(id)arg3;
- (_Bool)InsertBottleContact:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (void)dropUploadVoiceTable;
- (void)dropDownloadVoiceTable;
- (id)GetAllUploadVoice;
- (id)GetAllDownloadVoice;
- (_Bool)deleteWCPayMessageBizExtWithChatname:(id)arg1;
- (id)getWCPayMessageBizExtArrayOnProperty:(const struct WCTPropertyList *)arg1 where:(const struct WCTExpr *)arg2;
- (_Bool)insertWCPayMessageBizExt:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (_Bool)isWCPayMessageBizExtExistWithChatname:(id)arg1 localId:(unsigned int)arg2;
- (unsigned int)GetCountOfNewWCPayBizExtOnDistinctProperty:(const struct WCTProperty *)arg1 Where:(const struct WCTExpr *)arg2 bizType:(unsigned int)arg3;
- (_Bool)deleteWCPayMessageBizExtWithChatname:(id)arg1 bizId:(id)arg2 onType:(unsigned int)arg3;
- (_Bool)deleteWCPayMessageBizExtWithChatname:(id)arg1 OnType:(unsigned int)arg2;
- (_Bool)deleteNewWCPayBizExtMsg:(const struct WCTExpr *)arg1 OnType:(unsigned int)arg2;
- (_Bool)UpdateWCPayMessageBizStatus:(unsigned int)arg1 byChatName:(id)arg2 byMsgLocalId:(unsigned int)arg3 bizType:(unsigned int)arg4;
- (id)getWCPayMessageBizExtArrayOnProperty:(const struct WCTPropertyList *)arg1 where:(const struct WCTExpr *)arg2 OnType:(unsigned int)arg3;
- (_Bool)insertWCPayMessageBizExt:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 type:(unsigned int)arg3;
- (_Bool)isNewWCPayBizExtExistWithChatname:(id)arg1 localId:(unsigned int)arg2 type:(unsigned int)arg3;
- (_Bool)DeleteMessageExtForBatchDeleteByChatName:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)DeleteMessageExtByChatName:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)UpdateMessageExtFlag:(unsigned int)arg1 byChatName:(id)arg2 localId:(unsigned int)arg3;
- (_Bool)UpdateMessageExtSource:(id)arg1 byChatName:(id)arg2 localId:(unsigned int)arg3;
- (id)GetMsgExtInMessageExtWithTable:(id)arg1 chatName:(id)arg2 localId:(unsigned int)arg3;
- (id)GetMessageExtyChatName:(id)arg1 OnProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3;
- (id)GetMsgSourceInMessageExtWithTable:(id)arg1 chatName:(id)arg2 localId:(unsigned int)arg3;
- (id)GetMsgSourceInMessageExt:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)InsertBackupMessageExt:(id)arg1 withChatName:(id)arg2 onProperty:(const struct WCTPropertyList *)arg3;
- (_Bool)InsertMessageExt:(id)arg1 withChatName:(id)arg2 onProperty:(const struct WCTPropertyList *)arg3;
- (_Bool)IsMessageExtExistWithChatName:(id)arg1 localId:(unsigned int)arg2;
- (unsigned int)GetMaxMessageLocalIdByChatName:(id)arg1 where:(const struct WCTExpr *)arg2;
- (unsigned int)GetMessageCountByChatName:(id)arg1 where:(const struct WCTExpr *)arg2;
- (_Bool)DeleteMessageForBatchDeleteByChatName:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)DeleteMessageByChatName:(id)arg1 localId:(unsigned int)arg2;
- (_Bool)UpdateMessageStatus:(unsigned int)arg1 byChatName:(id)arg2 localId:(unsigned int)arg3;
- (_Bool)UpdateMessageByChatName:(id)arg1 localId:(unsigned int)arg2 withDBMessage:(id)arg3 OnProperty:(const struct WCTPropertyList *)arg4;
- (id)GetMessagesByChatName:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3 order:(const list_02de7622 *)arg4 limit:(int)arg5 hasError:(_Bool *)arg6;
- (id)GetMessagesByChatName:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3 order:(const list_02de7622 *)arg4 limit:(int)arg5;
- (id)GetMessageByChatName:(id)arg1 OnProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3;
- (unsigned int)GetMinCreateTimeInMessage:(id)arg1 where:(const struct WCTExpr *)arg2;
- (unsigned int)GetMinCreateTimeInMessage:(id)arg1;
- (unsigned int)GetMaxCreateTimeInMessage:(id)arg1;
- (unsigned int)InsertBackupMessage:(id)arg1 withChatName:(id)arg2 onProperty:(const struct WCTPropertyList *)arg3;
- (unsigned int)InsertMessage:(id)arg1 withChatName:(id)arg2 onProperty:(const struct WCTPropertyList *)arg3;
- (_Bool)IsMessageExistWithChatName:(id)arg1 localId:(unsigned int)arg2;
- (unsigned int)GetHelloMessageCountByChatName:(id)arg1 withProperty:(const struct WCTResult *)arg2 Where:(const struct WCTExpr *)arg3;
- (_Bool)UpdateHelloMessage:(id)arg1 byChatName:(id)arg2 onProperty:(const struct WCTPropertyList *)arg3 where:(const struct WCTExpr *)arg4;
- (_Bool)DeleteAllHelloMessageByChatName:(id)arg1 helloUser:(id)arg2;
- (id)GetHelloMessagesByChatName:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3 order:(const list_02de7622 *)arg4 groupBy:(const struct WCTExpr *)arg5 limit:(int)arg6;
- (id)GetHelloMessagesByChatName:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3 order:(const list_02de7622 *)arg4 limit:(int)arg5;
- (id)GetHelloMessageByChatName:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2 where:(const struct WCTExpr *)arg3 order:(const list_02de7622 *)arg4;
- (unsigned int)GetMaxCreateTimeInHelloMessage:(id)arg1;
- (unsigned int)InsertHelloMessage:(id)arg1 withChatName:(id)arg2 onProperty:(const struct WCTPropertyList *)arg3;
- (void)dropSendMesTable;
- (id)GetAllSendMessages;
- (_Bool)RemoveOldRevokeMessagesBefore:(unsigned int)arg1;
- (id)GetRevokeMsgBySvrId:(long long)arg1;
- (_Bool)InsertRevokeMessage:(id)arg1;
- (void)fillEmoticonPackageQueryProperty:(struct WCTPropertyList *)arg1;
- (_Bool)IsEmoticonPackageDownloaded:(id)arg1;
- (_Bool)IsEmoticonPackagePurchased:(id)arg1;
- (_Bool)IsEmoticonPackageExistByPackageId:(id)arg1;
- (_Bool)DeleteAllEmotcionPackage;
- (_Bool)DeleteEmoticonPackageNotInIdList:(id)arg1;
- (_Bool)DeleteEmoticonPackageByPackageId:(id)arg1;
- (id)GetEmoticonPackageList;
- (id)GetEmoticonPackageListByPid:(id)arg1;
- (_Bool)UpdateDownloadStatusInEmoticonPackage:(unsigned int)arg1 byPackageId:(id)arg2;
- (_Bool)UpdatePayStatusInEmoticonPackage:(unsigned int)arg1 byPackageId:(id)arg2;
- (_Bool)InsertEmoticonPackageList:(id)arg1;
- (_Bool)InsertEmoticonPackageWithId:(id)arg1 name:(id)arg2 iconUrl:(id)arg3 payStatus:(unsigned int)arg4 downloadStatus:(unsigned int)arg5;
- (_Bool)DelAllEmoticon;
- (id)DeleteEmoticonByPackageId:(id)arg1 WithoutExtFlag:(unsigned int)arg2;
- (_Bool)DeleteEmoticonByMd5:(id)arg1;
- (_Bool)IsEmoticonExistByMd5:(id)arg1;
- (id)GetEmoticonsOnProperty:(const struct WCTPropertyList *)arg1 Where:(const struct WCTExpr *)arg2 orderBy:(const list_02de7622 *)arg3 limit:(int)arg4;
- (id)GetAllEmoticon:(const struct WCTPropertyList *)arg1;
- (_Bool)UpdateExtFlagInEmoticon:(unsigned int)arg1 byMd5:(id)arg2 NeedOverWrite:(_Bool)arg3;
- (_Bool)UpdatePackageIdInEmoticon:(id)arg1 byMd5:(id)arg2;
- (_Bool)UpdateLastUsedTimeInEmoticon:(unsigned int)arg1 byMd5:(id)arg2;
- (_Bool)UpdateExtInfoInEmoticon:(id)arg1 byMd5:(id)arg2;
- (_Bool)UpdateEmoticon:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (_Bool)InsertEmoticon:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (unsigned int)GetCountOfEmoticonUploadByUserName:(id)arg1;
- (unsigned int)GetCountOfEmoticonUpload;
- (_Bool)DelAllEmoticonUpload;
- (_Bool)DelRowInEmoticonUpload:(id)arg1 LocalID:(unsigned int)arg2;
- (id)GetFirstEmoticonUploadOnProperty:(const struct WCTPropertyList *)arg1;
- (_Bool)InsertEmoticonUpload:(id)arg1 onProperty:(const struct WCTPropertyList *)arg2;
- (_Bool)IsEmoticonUploadExistByUserName:(id)arg1 localId:(unsigned int)arg2;
- (unsigned int)GetCountOfEmoticonDownload;
- (id)emoticonDownloadsOnProperty:(const struct WCTPropertyList *)arg1 afterCreateTime:(unsigned int)arg2;
- (_Bool)SetFriendMetaFlag:(unsigned int)arg1 ForUser:(id)arg2;
- (_Bool)SetLastUpdateTime:(unsigned int)arg1 ForUser:(id)arg2;
- (unsigned int)GetFriendMetaFlag:(id)arg1;
- (unsigned int)GetLastUpdateTimeOfUser:(id)arg1;
- (id)GetContactAndExtWithContactProperty:(const struct WCTPropertyList *)arg1 contactExtProperty:(const struct WCTPropertyList *)arg2 fromTables:(id)arg3 where:(const struct WCTExpr *)arg4 getError:(id *)arg5 limit:(int)arg6;
- (unsigned int)getContactCount;
- (id)ContactExtTableName;
- (id)ContactTableName;
- (_Bool)DeleteContactExtByUserName:(id)arg1;
- (id)GetContactExtByUserName:(id)arg1 property:(const struct WCTPropertyList *)arg2;
- (_Bool)UpdateContactExt:(id)arg1 withProperty:(const struct WCTPropertyList *)arg2 byUserName:(id)arg3;
- (_Bool)InsertContactExt:(id)arg1 withProperty:(const struct WCTPropertyList *)arg2;
- (_Bool)IsContactExtExist:(id)arg1;
- (_Bool)IsContactExist:(id)arg1;
- (_Bool)DeleteContactByUserName:(id)arg1;
- (_Bool)getAllRemarkList:(id)arg1 listType:(unsigned int)arg2;
- (_Bool)getAllUserName:(id)arg1;
- (id)GetContactsWhere:(const struct WCTExpr *)arg1 onProperty:(const struct WCTPropertyList *)arg2 getError:(id *)arg3;
- (id)GetContactByUserName:(id)arg1 property:(const struct WCTPropertyList *)arg2;
- (_Bool)UpdateExtentInContact:(id)arg1 byUserName:(id)arg2;
- (_Bool)UpdateContact:(id)arg1 withProperty:(const struct WCTPropertyList *)arg2 byUserName:(id)arg3;
- (_Bool)InsertContact:(id)arg1 withProperty:(const struct WCTPropertyList *)arg2;
- (id)getTableRepairMetas;
- (void)cleanOneTable:(id)arg1;
- (void)continueCleanUp;
- (_Bool)isCleanUpFinished;
- (_Bool)DeleteOplog:(unsigned int)arg1;
- (id)GetOplogsAfterOplogId:(unsigned int)arg1 limit:(int)arg2;
- (_Bool)InsertOplog:(id)arg1;
- (id)oplogDBDirWithDocDir:(id)arg1 userName:(id)arg2;
- (void)CloseOplogDB;
- (void)SetupOplogDBWithDocDir:(id)arg1 userName:(id)arg2;
- (void)setSequence:(int)arg1 forTableName:(id)arg2;
- (id)backupPaths;
- (void)restartBackup;
- (void)stopBackup;
- (void)clearBackup;
- (void)backup;
- (void)setAutoBackup:(_Bool)arg1;

@end

