//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MMCommon/MMObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableArray, UploadImageInfo;

@interface UploadImageMgr : MMObject <PBMessageObserverDelegate>
{
    NSMutableArray *m_arrQueue;
    UploadImageInfo *m_oCurUpload;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)UploadFail:(int)arg1;
- (void)UploadOk:(id)arg1;
- (_Bool)CreateUploadEvent:(unsigned int)arg1;
- (void)StartUploadImage:(id)arg1;
- (unsigned int)GetUploadPercent:(id)arg1;
- (_Bool)IsUploading:(id)arg1;
- (void)CheckQueue;
- (unsigned int)GetTotalLen:(id)arg1;
- (void)dealloc;
- (id)init;

@end

