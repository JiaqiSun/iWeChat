//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface MMCrashReportWrap : NSObject
{
    unsigned int _m_uiCrashVersion;
    NSString *_m_nsCrashUsrName;
    NSData *_m_dtCrashData;
    unsigned long long _m_eStackReportType;
    unsigned long long _crashReportSource;
    NSString *_m_crashReportID;
}

@property(retain, nonatomic) NSString *m_crashReportID; // @synthesize m_crashReportID=_m_crashReportID;
@property(nonatomic) unsigned long long crashReportSource; // @synthesize crashReportSource=_crashReportSource;
@property(nonatomic) unsigned long long m_eStackReportType; // @synthesize m_eStackReportType=_m_eStackReportType;
@property(retain, nonatomic) NSData *m_dtCrashData; // @synthesize m_dtCrashData=_m_dtCrashData;
@property(nonatomic) unsigned int m_uiCrashVersion; // @synthesize m_uiCrashVersion=_m_uiCrashVersion;
@property(retain, nonatomic) NSString *m_nsCrashUsrName; // @synthesize m_nsCrashUsrName=_m_nsCrashUsrName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

