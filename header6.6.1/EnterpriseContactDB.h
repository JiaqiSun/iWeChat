//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSString, WCTDatabase, WCTTable;

@interface EnterpriseContactDB : MMObject
{
    WCTDatabase *m_db;
    WCTTable *m_friendTable;
    WCTTable *m_myTable;
    NSString *_path;
}

- (void).cxx_destruct;
- (id)getTableByName:(id)arg1;
- (void)deleteDB;
- (void)deleteMyContact;
- (_Bool)setMyContact:(id)arg1;
- (id)getMyContact;
- (_Bool)deleteContact:(id)arg1;
- (_Bool)updateContact:(id)arg1;
- (_Bool)batchAddContact:(id)arg1;
- (_Bool)addContact:(id)arg1;
- (id)getAllContacts;
- (id)getContact:(id)arg1;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1 event:(CDUnknownBlockType)arg2;
- (_Bool)runTransaction:(CDUnknownBlockType)arg1;
- (void)closeDB;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

