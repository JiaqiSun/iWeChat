//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/WXPBGeneratedMessage.h>

@class BaseRequest, NSString, WxaAppBaseInfo, WxaClientPublicLibInfo, WxaJumpInfo, WxaPluginInfo, WxaPluginSDKInfo, WxaWebLaunchInfo;

@interface LaunchWxaAppRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) NSString *appId; // @dynamic appId;
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) WxaJumpInfo *jumpInfo; // @dynamic jumpInfo;
@property(retain, nonatomic) WxaPluginInfo *pluginInfo; // @dynamic pluginInfo;
@property(retain, nonatomic) WxaPluginSDKInfo *pluginSdkinfo; // @dynamic pluginSdkinfo;
@property(retain, nonatomic) WxaClientPublicLibInfo *publicLib; // @dynamic publicLib;
@property(nonatomic) unsigned int requestType; // @dynamic requestType;
@property(retain, nonatomic) WxaWebLaunchInfo *webLaunchInfo; // @dynamic webLaunchInfo;
@property(retain, nonatomic) WxaAppBaseInfo *wxaAppInfo; // @dynamic wxaAppInfo;

@end

