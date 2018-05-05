//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMAsset, NSURL;

@interface VideoParamsSource : NSObject
{
    NSURL *_videoURL;
    MMAsset *_videoMMAsset;
}

+ (id)videoParamsSourceFromMMAsset:(id)arg1;
+ (id)videoParamsSourceFromURL:(id)arg1;
@property(retain, nonatomic) MMAsset *videoMMAsset; // @synthesize videoMMAsset=_videoMMAsset;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
- (void).cxx_destruct;
- (id)genVideoParamsInfoFromAVAsset:(id)arg1;
- (id)genVideoParamsInfoFromMMAsset:(id)arg1;
- (id)genVideoParamsInfoFromURL:(id)arg1;
- (id)genVideoParamsInfo;

@end

