//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class GameCenterGameBriefInfo, NSArray, NSString;

@interface RecentPlayGameInfoData : MMObject <PBCoding>
{
    GameCenterGameBriefInfo *appItem;
    NSString *appUserDesc;
    NSArray *subList;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *subList; // @synthesize subList;
@property(retain, nonatomic) NSString *appUserDesc; // @synthesize appUserDesc;
@property(retain, nonatomic) GameCenterGameBriefInfo *appItem; // @synthesize appItem;
- (void).cxx_destruct;
- (void)parse:(id)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

