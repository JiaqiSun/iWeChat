//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class NSMutableArray, NSString, UserIdAuthorizePageJumpItem, VerifyWxPayReqInfo;

@interface UserIdAuthorizePageInfo : MMObject
{
    NSString *_appid;
    NSString *_title;
    NSString *_appIconUrl;
    NSString *_appName;
    NSString *_authWording;
    NSMutableArray *_userIdList;
    NSString *_businessWording;
    NSString *_confirmWording;
    UserIdAuthorizePageJumpItem *_protocolJump;
    NSMutableArray *_jumpItemList;
    NSString *_ticket;
    VerifyWxPayReqInfo *_verifyPayReq;
}

@property(retain, nonatomic) VerifyWxPayReqInfo *verifyPayReq; // @synthesize verifyPayReq=_verifyPayReq;
@property(copy, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(retain, nonatomic) NSMutableArray *jumpItemList; // @synthesize jumpItemList=_jumpItemList;
@property(retain, nonatomic) UserIdAuthorizePageJumpItem *protocolJump; // @synthesize protocolJump=_protocolJump;
@property(copy, nonatomic) NSString *confirmWording; // @synthesize confirmWording=_confirmWording;
@property(copy, nonatomic) NSString *businessWording; // @synthesize businessWording=_businessWording;
@property(retain, nonatomic) NSMutableArray *userIdList; // @synthesize userIdList=_userIdList;
@property(copy, nonatomic) NSString *authWording; // @synthesize authWording=_authWording;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *appIconUrl; // @synthesize appIconUrl=_appIconUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *appid; // @synthesize appid=_appid;
- (void).cxx_destruct;

@end

