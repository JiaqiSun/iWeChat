//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface FTSTopHitItem : NSObject <PBCoding>
{
    NSString *searchText;
    NSMutableArray *arrTopHitValue;
}

+ (void)initialize;
@property(retain, nonatomic) NSMutableArray *arrTopHitValue; // @synthesize arrTopHitValue;
@property(retain, nonatomic) NSString *searchText; // @synthesize searchText;
- (void).cxx_destruct;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

