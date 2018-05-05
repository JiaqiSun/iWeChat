//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, WCPayBankCardFavorInfo, WCPayFavorComposeInfo;

@interface WCPayTradeFavInfo : NSObject
{
    unsigned long long m_uiTrandeAmount;
    unsigned long long m_uiTotalFavAmount;
    unsigned long long m_uiAfterFavorTradeAmount;
    NSString *m_nsFavorCompseid;
    NSArray *m_arrTradeFavItemList;
    NSArray *m_arrWCPayFavorComposeInfo;
    WCPayFavorComposeInfo *m_oSelectedFavorComposeInfo;
    NSDictionary *m_dicItemSelectStatus;
    _Bool m_bNeedShowedMoreFavInfo;
    unsigned long long m_uiShowFavorAmount;
    unsigned long long m_uiInvariableFavorAmount;
    _Bool m_bIsVariableFavor;
    NSString *m_nsInvariableFavorDesc;
    NSString *m_nsVariableFavorDesc;
    WCPayBankCardFavorInfo *_bank_card_info;
}

@property(retain, nonatomic) WCPayBankCardFavorInfo *bank_card_info; // @synthesize bank_card_info=_bank_card_info;
@property(retain, nonatomic) NSString *m_nsVariableFavorDesc; // @synthesize m_nsVariableFavorDesc;
@property(retain, nonatomic) NSString *m_nsInvariableFavorDesc; // @synthesize m_nsInvariableFavorDesc;
@property(nonatomic) _Bool m_bIsVariableFavor; // @synthesize m_bIsVariableFavor;
@property(nonatomic) unsigned long long m_uiInvariableFavorAmount; // @synthesize m_uiInvariableFavorAmount;
@property(nonatomic) unsigned long long m_uiShowFavorAmount; // @synthesize m_uiShowFavorAmount;
@property(nonatomic) _Bool m_bNeedShowedMoreFavInfo; // @synthesize m_bNeedShowedMoreFavInfo;
@property(retain, nonatomic) WCPayFavorComposeInfo *m_oSelectedFavorComposeInfo; // @synthesize m_oSelectedFavorComposeInfo;
@property(retain, nonatomic) NSArray *m_arrWCPayFavorComposeInfo; // @synthesize m_arrWCPayFavorComposeInfo;
@property(retain, nonatomic) NSString *m_nsFavorCompseid; // @synthesize m_nsFavorCompseid;
@property(retain, nonatomic) NSArray *m_arrTradeFavItemList; // @synthesize m_arrTradeFavItemList;
@property(nonatomic) unsigned long long m_uiTrandeAmount; // @synthesize m_uiTrandeAmount;
@property(nonatomic) unsigned long long m_uiTotalFavAmount; // @synthesize m_uiTotalFavAmount;
@property(nonatomic) unsigned long long m_uiAfterFavorTradeAmount; // @synthesize m_uiAfterFavorTradeAmount;
- (void).cxx_destruct;
- (void)dealloc;

@end

