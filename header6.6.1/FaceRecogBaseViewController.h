//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class NSString;

@interface FaceRecogBaseViewController : MMUIViewController
{
    _Bool _showSuccessBtn;
    NSString *_loadingTip;
    NSString *_okTip;
}

@property(nonatomic) _Bool showSuccessBtn; // @synthesize showSuccessBtn=_showSuccessBtn;
@property(retain, nonatomic) NSString *okTip; // @synthesize okTip=_okTip;
@property(retain, nonatomic) NSString *loadingTip; // @synthesize loadingTip=_loadingTip;
- (void).cxx_destruct;
- (void)procedureDidFailed:(id)arg1 canRetry:(_Bool)arg2;
- (void)procedureDidFinish;
- (void)procedureDidGotFrameResult:(id)arg1 currentMotionType:(unsigned long long)arg2 failedType:(long long)arg3;
- (void)attachPreviewLayer:(id)arg1;

@end

