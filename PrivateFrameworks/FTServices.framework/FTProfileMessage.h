/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSData, NSString;

@interface FTProfileMessage : FTMessage <NSCopying> {
    NSString *_authToken;
    NSString *_profileID;
    NSData *_pushToken;
}

@property(copy) NSString * authToken;
@property(copy) NSString * profileID;
@property(copy) NSData * pushToken;

- (id)additionalMessageHeaders;
- (id)additionalMessageHeadersForOutgoingPush;
- (id)authToken;
- (int)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)handleResponseDictionary:(id)arg1;
- (BOOL)hasRequiredKeys:(id*)arg1;
- (id)init;
- (id)profileID;
- (id)pushToken;
- (int)responseCommand;
- (void)setAuthToken:(id)arg1;
- (void)setProfileID:(id)arg1;
- (void)setPushToken:(id)arg1;
- (BOOL)wantsBagKey;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPHeaders;

@end
