//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSString;

@interface FavoritesDownloadCDNInfo : NSObject <WCTTableCoding>
{
    unsigned int localItemId;
    unsigned int size;
    int status;
    int isThumb;
    int dataType;
    unsigned int IntRes1;
    unsigned int IntRes2;
    NSString *localDataID;
    NSString *cdnUrl;
    NSString *cdnKey;
    NSString *md5;
    NSString *head256Md5;
    NSString *dataFmt;
    NSString *StrRes1;
    NSString *StrRes2;
}

+ (const struct WCTProperty *)StrRes2;
+ (const struct WCTProperty *)StrRes1;
+ (const struct WCTProperty *)IntRes2;
+ (const struct WCTProperty *)IntRes1;
+ (const struct WCTProperty *)dataFmt;
+ (const struct WCTProperty *)dataType;
+ (const struct WCTProperty *)isThumb;
+ (const struct WCTProperty *)head256Md5;
+ (const struct WCTProperty *)md5;
+ (const struct WCTProperty *)cdnKey;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)size;
+ (const struct WCTProperty *)cdnUrl;
+ (const struct WCTProperty *)localDataID;
+ (const struct WCTProperty *)localItemId;
+ (CDUnknownBlockType)PropertyNamed;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const struct WCTPropertyList *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(nonatomic) unsigned int IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned int IntRes1; // @synthesize IntRes1;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt;
@property(nonatomic) int dataType; // @synthesize dataType;
@property(nonatomic) int isThumb; // @synthesize isThumb;
@property(retain, nonatomic) NSString *head256Md5; // @synthesize head256Md5;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey;
@property(nonatomic) int status; // @synthesize status;
@property(nonatomic) unsigned int size; // @synthesize size;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
@property(retain, nonatomic) NSString *localDataID; // @synthesize localDataID;
@property(nonatomic) unsigned int localItemId; // @synthesize localItemId;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end

