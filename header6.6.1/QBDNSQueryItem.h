//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSURLRequest;

@interface QBDNSQueryItem : NSObject
{
    NSURLRequest *_dnsRequest;
    NSURL *_originURL;
    long long _status;
}

@property long long status; // @synthesize status=_status;
@property(copy) NSURL *originURL; // @synthesize originURL=_originURL;
@property(retain) NSURLRequest *dnsRequest; // @synthesize dnsRequest=_dnsRequest;
- (void).cxx_destruct;

@end

