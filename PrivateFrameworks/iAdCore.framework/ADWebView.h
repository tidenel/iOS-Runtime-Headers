/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iAdCore.framework/iAdCore
 */

@class <ADWebViewDelegate><UIWebViewDelegate>, <UIWebViewDelegate><ADWebViewDelegate>, NSMutableDictionary, NSString;

@interface ADWebView : UIWebView {
    <ADWebViewDelegate><UIWebViewDelegate> *_delegate;
    BOOL _paused;
    NSMutableDictionary *_resourceLoadStartDates;
    BOOL _shouldReportResourceTiming;
    BOOL _shouldReportScriptErrors;
    NSString *_userAgent;
    BOOL _webGLEnabled;
}

@property <UIWebViewDelegate><ADWebViewDelegate> * delegate;
@property(readonly) struct OpaqueJSContext { }* javaScriptContextRef;
@property BOOL paused;
@property(retain) NSMutableDictionary * resourceLoadStartDates;
@property BOOL shouldReportResourceTiming;
@property BOOL shouldReportScriptErrors;
@property(copy) NSString * userAgent;
@property BOOL webGLEnabled;

+ (void)_resetMemoryLogging:(id)arg1;
+ (void)clearContentStorage;
+ (void)initialize;

- (void)_handleConsoleMessage:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)dispatchDOMEventWithName:(id)arg1 canBubble:(BOOL)arg2 cancelable:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct OpaqueJSContext { }*)javaScriptContextRef;
- (void)loadWebArchive:(id)arg1;
- (BOOL)paused;
- (id)resourceLoadStartDates;
- (void)sendOrientationEventForOrientation:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPaused:(BOOL)arg1;
- (void)setResourceLoadStartDates:(id)arg1;
- (void)setShouldReportResourceTiming:(BOOL)arg1;
- (void)setShouldReportScriptErrors:(BOOL)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setWebGLEnabled:(BOOL)arg1;
- (BOOL)shouldReportResourceTiming;
- (BOOL)shouldReportScriptErrors;
- (id)stringByEvaluatingJavaScriptFromString:(id)arg1;
- (id)userAgent;
- (BOOL)webGLEnabled;
- (id)webThreadWebView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;
- (void)webThreadWebView:(id)arg1 resource:(id)arg2 didReceiveResponse:(id)arg3 fromDataSource:(id)arg4;
- (id)webThreadWebView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;

@end
