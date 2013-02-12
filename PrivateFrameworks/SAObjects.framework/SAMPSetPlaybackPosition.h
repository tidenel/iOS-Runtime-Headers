/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL;

@interface SAMPSetPlaybackPosition : SABaseClientBoundCommand {
}

@property int position;
@property(copy) NSURL * targetAppId;

+ (id)setPlaybackPosition;
+ (id)setPlaybackPositionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (int)position;
- (BOOL)requiresResponse;
- (void)setPosition:(int)arg1;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;

@end
