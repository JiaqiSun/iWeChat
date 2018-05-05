//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"
#import "WAUploadFileTaskDelegate-Protocol.h"

@class NSMutableArray, NSString, NSURLSession, WAUploadFileConfig;
@protocol OS_dispatch_queue;

@interface WAUploadFileHandler : NSObject <WAUploadFileTaskDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSString *_appID;
    NSObject<OS_dispatch_queue> *_workerQueue;
    WAUploadFileConfig *_uploadFileConfig;
    _Bool _isIgnoreCheckDomain;
    NSMutableArray *_arrUploadTask;
    NSURLSession *_urlSession;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadFileTaskDidEnd:(id)arg1;
- (unsigned int)maxTaskCount;
- (void)markRedirectFailWithSessionTask:(id)arg1;
- (void)setupNSURLSession;
- (void)cancelAndDeleteAllTaskWithError:(id)arg1;
- (void)deleteTask:(id)arg1;
- (id)getUploadTaskWithTaskID:(id)arg1;
- (id)getUploadTaskWithTask:(id)arg1;
- (id)getNewUploadTask:(id)arg1;
- (_Bool)isExceedMaxTaskCount;
- (void)invalidate;
- (_Bool)abortUploadTask:(id)arg1 getError:(id *)arg2;
- (void)startUploadTaskWithURL:(id)arg1 taskID:(id)arg2 localID:(id)arg3 fileFieldName:(id)arg4 httpHeaders:(id)arg5 formFields:(id)arg6 isIgnoreCheckDomain:(_Bool)arg7 context:(id)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (void)dealloc;
- (id)initWithAppID:(id)arg1 appVersion:(unsigned long long)arg2 workerQueue:(id)arg3 context:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

