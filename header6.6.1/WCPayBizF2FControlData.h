//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BusiF2FActQryResp, BusiF2FPayOkResp, BusiF2FPlaceOrderResp, NSString;

@interface WCPayBizF2FControlData : NSObject
{
    unsigned int _busiType;
    unsigned int _get_pay_wifi;
    unsigned int _mch_time;
    unsigned int _payAmountInCent;
    NSString *_upperWording;
    NSString *_mchName;
    NSString *_mchPhoto;
    NSString *_rcvr_ticket;
    NSString *_mch_type;
    NSString *_receiver_openid;
    NSString *_receiverDisplayName;
    NSString *_payerComment;
    BusiF2FPlaceOrderResp *_placeOrderResp;
    BusiF2FPayOkResp *_payOkResp;
    BusiF2FActQryResp *_actQryResp;
}

@property(retain, nonatomic) BusiF2FActQryResp *actQryResp; // @synthesize actQryResp=_actQryResp;
@property(retain, nonatomic) BusiF2FPayOkResp *payOkResp; // @synthesize payOkResp=_payOkResp;
@property(retain, nonatomic) BusiF2FPlaceOrderResp *placeOrderResp; // @synthesize placeOrderResp=_placeOrderResp;
@property(retain, nonatomic) NSString *payerComment; // @synthesize payerComment=_payerComment;
@property(nonatomic) unsigned int payAmountInCent; // @synthesize payAmountInCent=_payAmountInCent;
@property(retain, nonatomic) NSString *receiverDisplayName; // @synthesize receiverDisplayName=_receiverDisplayName;
@property(retain, nonatomic) NSString *receiver_openid; // @synthesize receiver_openid=_receiver_openid;
@property(nonatomic) unsigned int mch_time; // @synthesize mch_time=_mch_time;
@property(retain, nonatomic) NSString *mch_type; // @synthesize mch_type=_mch_type;
@property(nonatomic) unsigned int get_pay_wifi; // @synthesize get_pay_wifi=_get_pay_wifi;
@property(retain, nonatomic) NSString *rcvr_ticket; // @synthesize rcvr_ticket=_rcvr_ticket;
@property(retain, nonatomic) NSString *mchPhoto; // @synthesize mchPhoto=_mchPhoto;
@property(retain, nonatomic) NSString *mchName; // @synthesize mchName=_mchName;
@property(retain, nonatomic) NSString *upperWording; // @synthesize upperWording=_upperWording;
@property(nonatomic) unsigned int busiType; // @synthesize busiType=_busiType;
- (void).cxx_destruct;
- (_Bool)isBusinessF2FReceive;

@end

