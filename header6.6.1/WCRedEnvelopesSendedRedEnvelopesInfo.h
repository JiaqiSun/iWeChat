//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCRedEnvelopesSendedRedEnvelopesInfo : NSObject
{
    int m_enWCRedEnvelopesType;
    int m_enWCRedEnvelopesKind;
    NSString *m_nsSendTitle;
    unsigned int m_uiSendTime;
    NSString *m_nsSendTime;
    long long m_lTotalAmount;
    long long m_lTotalNum;
    long long m_lRecNum;
    int m_enWCRedEnvelopesStatus;
    unsigned int m_uiThxCount;
    NSString *m_nsSendID;
}

@property(retain, nonatomic) NSString *m_nsSendID; // @synthesize m_nsSendID;
@property(retain, nonatomic) NSString *m_nsSendTime; // @synthesize m_nsSendTime;
@property(nonatomic) unsigned int m_uiThxCount; // @synthesize m_uiThxCount;
@property(nonatomic) unsigned int m_uiSendTime; // @synthesize m_uiSendTime;
@property(retain, nonatomic) NSString *m_nsSendTitle; // @synthesize m_nsSendTitle;
@property(nonatomic) long long m_lTotalNum; // @synthesize m_lTotalNum;
@property(nonatomic) long long m_lTotalAmount; // @synthesize m_lTotalAmount;
@property(nonatomic) int m_enWCRedEnvelopesStatus; // @synthesize m_enWCRedEnvelopesStatus;
@property(nonatomic) long long m_lRecNum; // @synthesize m_lRecNum;
@property(nonatomic) int m_enWCRedEnvelopesKind; // @synthesize m_enWCRedEnvelopesKind;
@property(nonatomic) int m_enWCRedEnvelopesType; // @synthesize m_enWCRedEnvelopesType;
- (void).cxx_destruct;

@end

