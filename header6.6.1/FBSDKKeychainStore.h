//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FBSDKKeychainStore : NSObject
{
    NSString *_service;
    NSString *_accessGroup;
}

@property(readonly, copy, nonatomic) NSString *accessGroup; // @synthesize accessGroup=_accessGroup;
@property(readonly, copy, nonatomic) NSString *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (id)queryForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
- (_Bool)setData:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (id)stringForKey:(id)arg1;
- (_Bool)setString:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (id)dictionaryForKey:(id)arg1;
- (_Bool)setDictionary:(id)arg1 forKey:(id)arg2 accessibility:(void *)arg3;
- (id)init;
- (id)initWithService:(id)arg1 accessGroup:(id)arg2;

@end

