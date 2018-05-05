//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class FTSBussinessCommonItem, FTSBussinessContactItem, FTSBussinessPOIItem, FTSBussinessSnsItem;

@interface FTSBussinessResultItem : MMObject
{
    unsigned int _type;
    FTSBussinessContactItem *_contactItem;
    FTSBussinessCommonItem *_commonItem;
    FTSBussinessPOIItem *_poiItem;
    FTSBussinessSnsItem *_snsItem;
    unsigned long long _docId;
}

+ (id)fromServerObject:(id)arg1;
@property(retain, nonatomic) FTSBussinessSnsItem *snsItem; // @synthesize snsItem=_snsItem;
@property(retain, nonatomic) FTSBussinessPOIItem *poiItem; // @synthesize poiItem=_poiItem;
@property(nonatomic) unsigned long long docId; // @synthesize docId=_docId;
@property(retain, nonatomic) FTSBussinessCommonItem *commonItem; // @synthesize commonItem=_commonItem;
@property(retain, nonatomic) FTSBussinessContactItem *contactItem; // @synthesize contactItem=_contactItem;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end

