//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSRecursiveLock, Protocol;

@interface WAJSContextPluginDelegateCenter : NSObject
{
    Protocol *m_protocolKey;
    unsigned int m_methodCount;
    struct objc_method_description *m_methods;
    NSRecursiveLock *m_delegateLock;
    NSMutableArray *m_delegates;
    _Bool m_needCleanUp;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)cleanUp;
- (void)__cleanUp;
- (void)__delegate:(SEL)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeDelegate:(id)arg1;
- (_Bool)addDelegate:(id)arg1;
- (id)initWithKey:(id)arg1;

@end

