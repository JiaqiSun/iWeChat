//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol FileDetailLogicDelegate <NSObject>
- (void)onScheduleDone:(_Bool)arg1;
- (void)onCanShareToFriendByButton;
- (void)onRevoked;
- (void)onDownloadFilePartLen:(unsigned int)arg1 TotalLen:(unsigned long long)arg2;
- (void)onDownloadFileSuccess;
- (void)onDownloadFileFail:(_Bool)arg1;
@end

