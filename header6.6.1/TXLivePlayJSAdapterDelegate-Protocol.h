//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary;

@protocol TXLivePlayJSAdapterDelegate <NSObject>

@optional
- (void)enableFullScreen:(_Bool)arg1 orientation:(long long)arg2 playerId:(unsigned int)arg3;
- (void)onInsertLogView:(unsigned int)arg1;
- (void)onPlayNetStatus:(NSDictionary *)arg1 playerId:(unsigned int)arg2;
- (void)onPlayEvent:(int)arg1 playerId:(unsigned int)arg2 param:(NSDictionary *)arg3;
@end

