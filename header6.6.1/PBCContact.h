//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString, PBBaseContact;

@interface PBCContact : NSObject <PBCoding>
{
    unsigned int chatRoomStatus;
    unsigned int personalCardStatus;
    unsigned int certificationFlag;
    unsigned int weiboFlag;
    unsigned int needUpdate;
    unsigned int wcflag;
    unsigned int brandSubscriptionSettings;
    unsigned int isShowRedDot;
    PBBaseContact *baseContact;
    NSString *qqmblog;
    NSString *chatRoomMemList;
    NSString *chatRoomData;
    NSString *country;
    NSString *province;
    NSString *city;
    NSString *signature;
    NSString *certificationInfo;
    NSString *certInfoExt;
    NSString *owner;
    NSString *weiboAddress;
    NSString *weiboNickName;
    NSString *fbnickName;
    NSString *fbid;
    NSString *wcbgimgObjectId;
    NSString *wcbgimgId;
    NSString *externalInfo;
    NSString *brandSubscriptConfigUrl;
    NSString *subscriptedBrands;
    NSString *brandIconUrl;
}

+ (void)initialize;
@property(nonatomic) unsigned int isShowRedDot; // @synthesize isShowRedDot;
@property(retain, nonatomic) NSString *brandIconUrl; // @synthesize brandIconUrl;
@property(retain, nonatomic) NSString *subscriptedBrands; // @synthesize subscriptedBrands;
@property(nonatomic) unsigned int brandSubscriptionSettings; // @synthesize brandSubscriptionSettings;
@property(retain, nonatomic) NSString *brandSubscriptConfigUrl; // @synthesize brandSubscriptConfigUrl;
@property(retain, nonatomic) NSString *externalInfo; // @synthesize externalInfo;
@property(retain, nonatomic) NSString *wcbgimgId; // @synthesize wcbgimgId;
@property(nonatomic) unsigned int wcflag; // @synthesize wcflag;
@property(retain, nonatomic) NSString *wcbgimgObjectId; // @synthesize wcbgimgObjectId;
@property(nonatomic) unsigned int needUpdate; // @synthesize needUpdate;
@property(retain, nonatomic) NSString *fbid; // @synthesize fbid;
@property(retain, nonatomic) NSString *fbnickName; // @synthesize fbnickName;
@property(nonatomic) unsigned int weiboFlag; // @synthesize weiboFlag;
@property(retain, nonatomic) NSString *weiboNickName; // @synthesize weiboNickName;
@property(retain, nonatomic) NSString *weiboAddress; // @synthesize weiboAddress;
@property(retain, nonatomic) NSString *owner; // @synthesize owner;
@property(retain, nonatomic) NSString *certInfoExt; // @synthesize certInfoExt;
@property(retain, nonatomic) NSString *certificationInfo; // @synthesize certificationInfo;
@property(nonatomic) unsigned int certificationFlag; // @synthesize certificationFlag;
@property(nonatomic) unsigned int personalCardStatus; // @synthesize personalCardStatus;
@property(retain, nonatomic) NSString *signature; // @synthesize signature;
@property(retain, nonatomic) NSString *city; // @synthesize city;
@property(retain, nonatomic) NSString *province; // @synthesize province;
@property(retain, nonatomic) NSString *country; // @synthesize country;
@property(retain, nonatomic) NSString *chatRoomData; // @synthesize chatRoomData;
@property(nonatomic) unsigned int chatRoomStatus; // @synthesize chatRoomStatus;
@property(retain, nonatomic) NSString *chatRoomMemList; // @synthesize chatRoomMemList;
@property(retain, nonatomic) NSString *qqmblog; // @synthesize qqmblog;
@property(retain, nonatomic) PBBaseContact *baseContact; // @synthesize baseContact;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (void)setFromCContact:(id)arg1;
- (id)toCContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

