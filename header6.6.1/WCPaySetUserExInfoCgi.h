//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseTenPayCgi.h"

@class WCPaySetUserExInfoCgiRequest;
@protocol WCPaySetUserExInfoCgiDelegate;

@interface WCPaySetUserExInfoCgi : WCPayBaseTenPayCgi
{
    WCPaySetUserExInfoCgiRequest *_cgiRequest;
}

@property(retain, nonatomic) WCPaySetUserExInfoCgiRequest *cgiRequest; // @synthesize cgiRequest=_cgiRequest;
- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didGetTenPayError:(id)arg1;
- (void)didGetTenPayResponse:(id)arg1;
- (void)startRequest;
- (id)init;

// Remaining properties
@property(nonatomic) __weak id <WCPaySetUserExInfoCgiDelegate> delegate; // @dynamic delegate;

@end

