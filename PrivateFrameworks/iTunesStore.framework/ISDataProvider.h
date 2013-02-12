/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISOperation, NSNumber, NSString, NSURL, SSAuthenticationContext, SSURLBagContext;

@interface ISDataProvider : NSObject <NSCopying> {
    NSNumber *_authenticatedAccountDSID;
    SSAuthenticationContext *_authenticationContext;
    SSURLBagContext *_bagContext;
    long long _contentLength;
    NSString *_contentType;
    id _output;
    ISOperation *_parentOperation;
    NSURL *_redirectURL;
}

@property(retain) NSNumber * authenticatedAccountDSID;
@property(retain) SSAuthenticationContext * authenticationContext;
@property(retain) SSURLBagContext * bagContext;
@property long long contentLength;
@property(retain) NSString * contentType;
@property(retain) id output;
@property ISOperation * parentOperation;
@property(retain) NSURL * redirectURL;

+ (id)provider;

- (id)authenticatedAccountDSID;
- (id)authenticationContext;
- (id)bagContext;
- (BOOL)canStreamContentLength:(long long)arg1 error:(id*)arg2;
- (void)closeStream;
- (void)configureFromProvider:(id)arg1;
- (long long)contentLength;
- (id)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (BOOL)isStream;
- (void)migrateOutputFromSubProvider:(id)arg1;
- (id)output;
- (id)parentOperation;
- (BOOL)parseData:(id)arg1 returningError:(id*)arg2;
- (id)redirectURL;
- (void)resetStream;
- (void)setAuthenticatedAccountDSID:(id)arg1;
- (void)setAuthenticationContext:(id)arg1;
- (void)setBagContext:(id)arg1;
- (void)setContentLength:(long long)arg1;
- (void)setContentType:(id)arg1;
- (void)setOutput:(id)arg1;
- (void)setParentOperation:(id)arg1;
- (void)setRedirectURL:(id)arg1;
- (void)setup;
- (long long)streamedBytes;

@end
