//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MMAssetPickerBrowserStateInfo : NSObject
{
    _Bool _selectable;
    _Bool _videoCropable;
    unsigned long long _imageSize;
    NSString *_errorInfo;
}

+ (void)reportSelectImageFailedWithFileSize:(unsigned int)arg1;
+ (id)videoStateInfoWithAvAsset:(id)arg1 videoPath:(id)arg2 pickerScene:(int)arg3 isSlowmotion:(_Bool)arg4;
+ (id)gifStateInfoWithImageData:(id)arg1 image:(id)arg2 isSend:(_Bool)arg3 needCheckValid:(_Bool)arg4;
@property(retain, nonatomic) NSString *errorInfo; // @synthesize errorInfo=_errorInfo;
@property(nonatomic) unsigned long long imageSize; // @synthesize imageSize=_imageSize;
@property(nonatomic) _Bool videoCropable; // @synthesize videoCropable=_videoCropable;
@property(nonatomic) _Bool selectable; // @synthesize selectable=_selectable;
- (void).cxx_destruct;

@end

