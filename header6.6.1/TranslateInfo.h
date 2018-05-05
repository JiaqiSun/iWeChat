//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBCoding-Protocol.h"

@class NSData, NSString;

@interface TranslateInfo : MMObject <PBCoding>
{
    unsigned int mesLocalId;
    NSString *originText;
    NSString *originLang;
    NSString *translatedText;
    NSString *translatedLang;
    _Bool showOriginTextNow;
    int translateStatus;
    NSString *brandWording;
    NSString *snsID;
    _Bool bNeedShowAnimation;
    NSString *displayTranslatedText;
    _Bool canReTrans;
    _Bool _bAutoScrollUp;
    NSData *cookie;
}

+ (void)initialize;
@property(nonatomic) _Bool bAutoScrollUp; // @synthesize bAutoScrollUp=_bAutoScrollUp;
@property(nonatomic) _Bool canReTrans; // @synthesize canReTrans;
@property(retain, nonatomic) NSData *cookie; // @synthesize cookie;
@property(nonatomic) _Bool bNeedShowAnimation; // @synthesize bNeedShowAnimation;
@property(retain, nonatomic) NSString *snsID; // @synthesize snsID;
@property(retain, nonatomic) NSString *brandWording; // @synthesize brandWording;
@property(nonatomic) int translateStatus; // @synthesize translateStatus;
@property(nonatomic) _Bool showOriginTextNow; // @synthesize showOriginTextNow;
@property(retain, nonatomic) NSString *translatedLang; // @synthesize translatedLang;
@property(retain, nonatomic) NSString *translatedText; // @synthesize translatedText;
@property(retain, nonatomic) NSString *originLang; // @synthesize originLang;
@property(retain, nonatomic) NSString *originText; // @synthesize originText;
@property(nonatomic) unsigned int mesLocalId; // @synthesize mesLocalId;
@property(retain, nonatomic) NSString *displayTranslatedText; // @synthesize displayTranslatedText;
- (void).cxx_destruct;
- (int)GetTranslateStatus;
- (_Bool)isTranslateFailed;
- (_Bool)isTextTooLong;
- (_Bool)isTranslating;
- (id)getDisplayContent;
- (id)init;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

