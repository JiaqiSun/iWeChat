//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString, WCPayOrderDetailActivityInfo, WCPayOrderDetailSubscribeBrandInfo, WCPayOrderDetailTinyAppInfo;

@interface WCPayOrderDetail : NSObject
{
    int m_eWCPayOrderDetailSituationType;
    NSString *m_productName;
    NSString *m_discountName;
    NSString *m_productRemark;
    unsigned int m_productCount;
    long long m_totalMoney;
    long long m_oldTotalMoney;
    _Bool m_bNeedShowProductDetailMoneyInfo;
    NSString *m_nsProductTotalMoney;
    NSString *m_nsTransportMoney;
    NSString *m_nsPreferentialMoney;
    NSString *m_totalFeeString;
    NSString *m_feeType;
    unsigned int m_cardBankTag;
    unsigned int m_payStatus;
    unsigned int m_uiCreateTime;
    NSString *m_sellerID;
    NSString *m_sellerName;
    NSString *m_createTime;
    NSString *m_transcationID;
    NSString *m_arrivedTime;
    NSString *m_preArriveTime;
    NSString *m_payStatusName;
    NSString *m_payBankType;
    NSString *m_payBankName;
    NSString *m_payCardTail;
    NSString *m_paySituation;
    _Bool m_isOpenFeeProtocal;
    WCPayOrderDetailSubscribeBrandInfo *m_oWCPayOrderDetailSubscribeBrandInfo;
    NSArray *m_arrWCPayOrderDetailActivityInfo;
    WCPayOrderDetailActivityInfo *m_oLinkedAtivityInfo;
    unsigned int m_uiAfterPaidErrorQueryOrderTime;
    _Bool m_bNeedAfterPaidErrorQueryOrder;
    NSString *m_nsBankTypeLimitWording;
    NSString *m_nsRefundBankType;
    NSString *m_nsInvoice;
    NSString *m_nsMerchantGuarantee;
    int m_eWCPayOrderDetailMessageType;
    NSString *m_nsLatestProductStatusHeaderIcon;
    NSString *m_nsLatestProductStatusName;
    NSString *m_nsLatestProductStatusDesc;
    NSString *m_nsLatestProductStatusUpdateTime;
    NSString *m_nsLatestProductStatusClickedJumpUrl;
    NSString *m_nsPanelAlertTitle;
    NSString *m_nsPanelAlertBody;
    NSArray *m_arrPanelButtonInfo;
    NSString *m_sellerPhone;
    NSString *m_sellerUserName;
    NSString *m_sellerFrom;
    NSArray *m_arrOrderProductInfo;
    NSArray *m_arrCustomNormalCellInfo;
    NSString *m_nsProtectRightsUrl;
    NSString *m_nsSharedUrl;
    NSString *m_nsImgIcon;
    NSMutableArray *m_arrProductImg;
    _Bool m_bShowEvaluateCell;
    _Bool m_bEvaluated;
    long long m_uiEvaluateValue;
    unsigned int m_uiInsertEvaluateCellIndex;
    int m_eWCPayTransferMoneyOrderStatus;
    int m_eWCPayTransferMoneySituationSubType;
    NSString *m_nsTransferID;
    long long m_chargeFeeMoney;
    long long m_transferFeeMoney;
    NSString *m_nsReceiverUserName;
    NSString *m_nsSenderUserName;
    NSString *m_nsTruthName;
    _Bool m_bAllowedRetrySendMsg;
    NSString *m_receiveMoneyTime;
    NSString *m_refusedMoneyTime;
    NSString *m_nsRebackMoneyStatusName;
    long long m_touchIDType;
    NSString *m_nsWapPayTips;
    NSArray *m_arrDiscountArray;
    NSString *m_nsOriginalInfo;
    NSString *m_nsRateInfo;
    _Bool m_bTouchIDAuthFailed;
    unsigned int m_uiQueryInfoQueryOrderTime;
    unsigned int m_uiQueryInfoQueryOrderCount;
    NSString *m_preArriveTimeWording;
    NSString *_m_uiQueryInfoQueryOrderDefaultWording;
    NSString *_m_nsStatusDesc;
    NSString *_m_nsStatusSupplementary;
    unsigned long long _delayStatus;
    WCPayOrderDetailTinyAppInfo *_tinyAppInfo;
}

@property(retain, nonatomic) WCPayOrderDetailTinyAppInfo *tinyAppInfo; // @synthesize tinyAppInfo=_tinyAppInfo;
@property(nonatomic) unsigned long long delayStatus; // @synthesize delayStatus=_delayStatus;
@property(retain, nonatomic) NSString *m_nsStatusSupplementary; // @synthesize m_nsStatusSupplementary=_m_nsStatusSupplementary;
@property(retain, nonatomic) NSString *m_nsStatusDesc; // @synthesize m_nsStatusDesc=_m_nsStatusDesc;
@property(retain, nonatomic) NSString *m_uiQueryInfoQueryOrderDefaultWording; // @synthesize m_uiQueryInfoQueryOrderDefaultWording=_m_uiQueryInfoQueryOrderDefaultWording;
@property(retain, nonatomic) NSString *m_nsOriginalInfo; // @synthesize m_nsOriginalInfo;
@property(retain, nonatomic) NSString *m_nsRateInfo; // @synthesize m_nsRateInfo;
@property(retain, nonatomic) NSArray *m_arrDiscountArray; // @synthesize m_arrDiscountArray;
@property(retain, nonatomic) NSString *m_preArriveTimeWording; // @synthesize m_preArriveTimeWording;
@property(retain, nonatomic) WCPayOrderDetailActivityInfo *m_oLinkedAtivityInfo; // @synthesize m_oLinkedAtivityInfo;
@property(nonatomic) _Bool m_bTouchIDAuthFailed; // @synthesize m_bTouchIDAuthFailed;
@property(retain, nonatomic) NSString *m_nsWapPayTips; // @synthesize m_nsWapPayTips;
@property(nonatomic) _Bool m_bNeedAfterPaidErrorQueryOrder; // @synthesize m_bNeedAfterPaidErrorQueryOrder;
@property(nonatomic) unsigned int m_uiQueryInfoQueryOrderCount; // @synthesize m_uiQueryInfoQueryOrderCount;
@property(nonatomic) unsigned int m_uiQueryInfoQueryOrderTime; // @synthesize m_uiQueryInfoQueryOrderTime;
@property(nonatomic) unsigned int m_uiAfterPaidErrorQueryOrderTime; // @synthesize m_uiAfterPaidErrorQueryOrderTime;
@property(nonatomic) long long m_touchIDType; // @synthesize m_touchIDType;
@property(retain, nonatomic) NSString *m_nsRefundBankType; // @synthesize m_nsRefundBankType;
@property(retain, nonatomic) NSString *m_nsBankTypeLimitWording; // @synthesize m_nsBankTypeLimitWording;
@property(nonatomic) int m_eWCPayTransferMoneySituationSubType; // @synthesize m_eWCPayTransferMoneySituationSubType;
@property(retain, nonatomic) NSString *m_nsTruthName; // @synthesize m_nsTruthName;
@property(retain, nonatomic) NSString *m_nsRebackMoneyStatusName; // @synthesize m_nsRebackMoneyStatusName;
@property(retain, nonatomic) NSString *m_refusedMoneyTime; // @synthesize m_refusedMoneyTime;
@property(retain, nonatomic) NSString *m_receiveMoneyTime; // @synthesize m_receiveMoneyTime;
@property(retain, nonatomic) NSString *m_nsTransferID; // @synthesize m_nsTransferID;
@property(retain, nonatomic) NSString *m_nsSenderUserName; // @synthesize m_nsSenderUserName;
@property(nonatomic) int m_eWCPayTransferMoneyOrderStatus; // @synthesize m_eWCPayTransferMoneyOrderStatus;
@property(nonatomic) long long m_transferFeeMoney; // @synthesize m_transferFeeMoney;
@property(retain, nonatomic) NSString *m_nsReceiverUserName; // @synthesize m_nsReceiverUserName;
@property(nonatomic) long long m_chargeFeeMoney; // @synthesize m_chargeFeeMoney;
@property(nonatomic) _Bool m_bAllowedRetrySendMsg; // @synthesize m_bAllowedRetrySendMsg;
@property(nonatomic) unsigned int m_uiInsertEvaluateCellIndex; // @synthesize m_uiInsertEvaluateCellIndex;
@property(nonatomic) _Bool m_bShowEvaluateCell; // @synthesize m_bShowEvaluateCell;
@property(nonatomic) _Bool m_bEvaluated; // @synthesize m_bEvaluated;
@property(nonatomic) long long m_uiEvaluateValue; // @synthesize m_uiEvaluateValue;
@property(nonatomic) int m_eWCPayOrderDetailMessageType; // @synthesize m_eWCPayOrderDetailMessageType;
@property(retain, nonatomic) NSMutableArray *m_arrProductImg; // @synthesize m_arrProductImg;
@property(retain, nonatomic) NSString *m_nsLatestProductStatusDesc; // @synthesize m_nsLatestProductStatusDesc;
@property(retain, nonatomic) NSString *m_nsImgIcon; // @synthesize m_nsImgIcon;
@property(nonatomic) unsigned int m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(retain, nonatomic) NSString *m_nsMerchantGuarantee; // @synthesize m_nsMerchantGuarantee;
@property(retain, nonatomic) NSString *m_nsInvoice; // @synthesize m_nsInvoice;
@property(retain, nonatomic) NSString *m_nsPanelAlertTitle; // @synthesize m_nsPanelAlertTitle;
@property(retain, nonatomic) NSString *m_nsPanelAlertBody; // @synthesize m_nsPanelAlertBody;
@property(retain, nonatomic) NSArray *m_arrPanelButtonInfo; // @synthesize m_arrPanelButtonInfo;
@property(retain, nonatomic) NSString *m_nsLatestProductStatusUpdateTime; // @synthesize m_nsLatestProductStatusUpdateTime;
@property(retain, nonatomic) NSString *m_nsLatestProductStatusName; // @synthesize m_nsLatestProductStatusName;
@property(retain, nonatomic) NSString *m_nsLatestProductStatusHeaderIcon; // @synthesize m_nsLatestProductStatusHeaderIcon;
@property(retain, nonatomic) NSString *m_nsLatestProductStatusClickedJumpUrl; // @synthesize m_nsLatestProductStatusClickedJumpUrl;
@property(retain, nonatomic) NSString *m_nsSharedUrl; // @synthesize m_nsSharedUrl;
@property(retain, nonatomic) NSString *m_nsProtectRightsUrl; // @synthesize m_nsProtectRightsUrl;
@property(retain, nonatomic) NSArray *m_arrCustomNormalCellInfo; // @synthesize m_arrCustomNormalCellInfo;
@property(retain, nonatomic) NSString *m_nsTransportMoney; // @synthesize m_nsTransportMoney;
@property(retain, nonatomic) NSString *m_nsProductTotalMoney; // @synthesize m_nsProductTotalMoney;
@property(retain, nonatomic) NSString *m_nsPreferentialMoney; // @synthesize m_nsPreferentialMoney;
@property(retain, nonatomic) NSArray *m_arrOrderProductInfo; // @synthesize m_arrOrderProductInfo;
@property(nonatomic) _Bool m_isOpenFeeProtocal; // @synthesize m_isOpenFeeProtocal;
@property(retain, nonatomic) NSString *m_totalFeeString; // @synthesize m_totalFeeString;
@property(retain, nonatomic) NSString *m_paySituation; // @synthesize m_paySituation;
@property(nonatomic) int m_eWCPayOrderDetailSituationType; // @synthesize m_eWCPayOrderDetailSituationType;
@property(retain, nonatomic) NSArray *m_arrWCPayOrderDetailActivityInfo; // @synthesize m_arrWCPayOrderDetailActivityInfo;
@property(retain, nonatomic) WCPayOrderDetailSubscribeBrandInfo *m_oWCPayOrderDetailSubscribeBrandInfo; // @synthesize m_oWCPayOrderDetailSubscribeBrandInfo;
@property(retain, nonatomic) NSString *m_sellerPhone; // @synthesize m_sellerPhone;
@property(retain, nonatomic) NSString *m_payCardTail; // @synthesize m_payCardTail;
@property(retain, nonatomic) NSString *m_payBankName; // @synthesize m_payBankName;
@property(retain, nonatomic) NSString *m_payBankType; // @synthesize m_payBankType;
@property(retain, nonatomic) NSString *m_payStatusName; // @synthesize m_payStatusName;
@property(retain, nonatomic) NSString *m_transcationID; // @synthesize m_transcationID;
@property(retain, nonatomic) NSString *m_sellerUserName; // @synthesize m_sellerUserName;
@property(retain, nonatomic) NSString *m_sellerFrom; // @synthesize m_sellerFrom;
@property(retain, nonatomic) NSString *m_sellerName; // @synthesize m_sellerName;
@property(retain, nonatomic) NSString *m_sellerID; // @synthesize m_sellerID;
@property(retain, nonatomic) NSString *m_productName; // @synthesize m_productName;
@property(retain, nonatomic) NSString *m_preArriveTime; // @synthesize m_preArriveTime;
@property(retain, nonatomic) NSString *m_arrivedTime; // @synthesize m_arrivedTime;
@property(retain, nonatomic) NSString *m_createTime; // @synthesize m_createTime;
@property(nonatomic) unsigned int m_cardBankTag; // @synthesize m_cardBankTag;
@property(retain, nonatomic) NSString *m_feeType; // @synthesize m_feeType;
@property(nonatomic) long long m_oldTotalMoney; // @synthesize m_oldTotalMoney;
@property(nonatomic) long long m_totalMoney; // @synthesize m_totalMoney;
@property(retain, nonatomic) NSString *m_discountName; // @synthesize m_discountName;
@property(retain, nonatomic) NSString *m_productRemark; // @synthesize m_productRemark;
@property(nonatomic) unsigned int m_productCount; // @synthesize m_productCount;
@property(nonatomic) _Bool m_bNeedShowProductDetailMoneyInfo; // @synthesize m_bNeedShowProductDetailMoneyInfo;
@property(nonatomic) unsigned int m_payStatus; // @synthesize m_payStatus;
- (void).cxx_destruct;
- (void)dealloc;

@end

