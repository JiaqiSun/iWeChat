//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NetCmdEvent.h"

@class NSString;

@interface CGetBottleCountEvent : NetCmdEvent
{
    NSString *m_nsUsrName;
}

@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
- (void).cxx_destruct;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (_Bool)SetEventInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end

