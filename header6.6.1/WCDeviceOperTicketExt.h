//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

@class JSEvent, NSString, WCDevice;

@interface WCDeviceOperTicketExt : MMObject
{
    WCDevice *_device;
    unsigned int _operType;
    NSString *_ticket;
    JSEvent *_callBackEvent;
}

@property(retain, nonatomic) JSEvent *callBackEvent; // @synthesize callBackEvent=_callBackEvent;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket=_ticket;
@property(nonatomic) unsigned int operType; // @synthesize operType=_operType;
@property(retain, nonatomic) WCDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (void)dealloc;

@end

