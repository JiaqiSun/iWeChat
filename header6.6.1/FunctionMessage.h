//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface FunctionMessage : NSObject <PBCoding>
{
    unsigned int opType;
    long long msgSvrId;
    unsigned long long version;
    NSString *functionMsgId;
    NSString *chatName;
}

+ (void)initialize;
@property(nonatomic) unsigned int opType; // @synthesize opType;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName;
@property(retain, nonatomic) NSString *functionMsgId; // @synthesize functionMsgId;
@property(nonatomic) unsigned long long version; // @synthesize version;
@property(nonatomic) long long msgSvrId; // @synthesize msgSvrId;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

