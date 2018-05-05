//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"
#import "WCTColumnCoding-Protocol.h"

@class NSString;

@interface PBCMessageWrap : NSObject <PBCoding, WCTColumnCoding>
{
    unsigned int mesSvrId;
    unsigned int mesLocalId;
    unsigned int messageType;
    unsigned int status;
    unsigned int imgStatus;
    unsigned int downloadStatus;
    unsigned int createTime;
    NSString *fromUser;
    NSString *toUser;
    NSString *realChatUser;
    NSString *content;
    long long n64MesSvrId;
    NSString *msgSource;
}

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) NSString *msgSource; // @synthesize msgSource;
@property(nonatomic) long long n64MesSvrId; // @synthesize n64MesSvrId;
@property(retain, nonatomic) NSString *content; // @synthesize content;
@property(retain, nonatomic) NSString *realChatUser; // @synthesize realChatUser;
@property(retain, nonatomic) NSString *toUser; // @synthesize toUser;
@property(retain, nonatomic) NSString *fromUser; // @synthesize fromUser;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
@property(nonatomic) unsigned int downloadStatus; // @synthesize downloadStatus;
@property(nonatomic) unsigned int imgStatus; // @synthesize imgStatus;
@property(nonatomic) unsigned int status; // @synthesize status;
@property(nonatomic) unsigned int messageType; // @synthesize messageType;
@property(nonatomic) unsigned int mesLocalId; // @synthesize mesLocalId;
@property(nonatomic) unsigned int mesSvrId; // @synthesize mesSvrId;
- (void).cxx_destruct;
- (id)archivedWCTValue;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (void)setFromCMessageWrap:(id)arg1;
- (id)toCMessageWrap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

