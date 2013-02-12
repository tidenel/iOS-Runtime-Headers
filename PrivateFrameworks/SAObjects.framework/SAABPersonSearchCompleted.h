/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAABPersonSearchCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSString * refId;
@property(copy) NSArray * results;

+ (id)personSearchCompleted;
+ (id)personSearchCompletedWithDictionary:(id)arg1 context:(id)arg2;
+ (id)personSearchCompletedWithResults:(id)arg1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)initWithResults:(id)arg1;
- (id)results;
- (void)setResults:(id)arg1;

@end
