/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NKAssetDownload, NSURLConnectionInternal;

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLConnectionInternal *_internal;
}

@property(readonly) NKAssetDownload * newsstandAssetDownload;

+ (void)HS_sendAsynchronousRequest:(id)arg1 completionQueue:(id)arg2 completionHandler:(id)arg3;
+ (void)_resourceLoadLoop:(id)arg1;
+ (void)_setLoaderThreadPriority:(int)arg1;
+ (void)_setMIMETypesWithNoSizeLimit:(id)arg1;
+ (void)_setSweeperInterval:(unsigned int)arg1;
+ (unsigned int)_sweeperInterval;
+ (BOOL)canHandleRequest:(id)arg1;
+ (id)connectionWithRequest:(id)arg1 delegate:(id)arg2;
+ (struct __CFRunLoop { }*)resourceLoaderRunLoop;
+ (void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(id)arg3;
+ (id)sendSynchronousRequest:(id)arg1 allowRedirects:(BOOL)arg2 returningResponse:(id*)arg3 error:(id*)arg4;
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3;

- (id)_cfInternal;
- (id)_dlInternal;
- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (void)cancel;
- (void)cancelAuthenticationChallenge:(id)arg1;
- (id)connectionProperties;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (id)currentRequest;
- (void)dealloc;
- (BOOL)defersCallbacks;
- (void)download;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)newsstandAssetDownload;
- (id)originalRequest;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDefersCallbacks:(BOOL)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)start;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

@end
