//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FileDetailLogicDelegate;

@interface FileDetailLogicController : NSObject
{
    id <FileDetailLogicDelegate> _m_fileDetailLogicDelegate;
}

@property(nonatomic) __weak id <FileDetailLogicDelegate> m_fileDetailLogicDelegate; // @synthesize m_fileDetailLogicDelegate=_m_fileDetailLogicDelegate;
- (void).cxx_destruct;
- (_Bool)canShowScheduleBtn;
- (id)GetFileName;
- (id)GetTmpFilePath;
- (id)GetFilePath;
- (unsigned long long)GetFileSize;
- (unsigned long long)GetTempSize;
- (id)GetForwardData;
- (unsigned int)GetPreviewType;
- (_Bool)canShowWebRecommendAction;
- (_Bool)canShowFTSAction;
- (_Bool)canAddToFavorites;
- (_Bool)canShowSymbolicate;
- (_Bool)canShowMsgForwardTo3rdApp;
- (_Bool)autoDownload;
- (_Bool)isDownloading;
- (void)OnAddToFavorites;
- (void)onApplyToWebRecommend;
- (void)onApplyToFTS;
- (void)OnForwardTo3rdApp:(id)arg1;
- (void)symbolicateAndForward:(id)arg1;
- (void)OnForwordWithViewController:(id)arg1;
- (_Bool)OnPreviewFile:(unsigned int)arg1;
- (void)checkIsFileExistInSvr;
- (void)stopDownload;
- (void)startDownload;

@end

