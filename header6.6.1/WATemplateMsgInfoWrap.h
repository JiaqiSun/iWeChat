//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface WATemplateMsgInfoWrap : MMObject <PBCoding>
{
    _Bool globalSwitchOFF;
    NSMutableArray *banAppIdList;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *banAppIdList; // @synthesize banAppIdList;
@property(nonatomic) _Bool globalSwitchOFF; // @synthesize globalSwitchOFF;
- (void).cxx_destruct;
- (id)trimedBanList;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

