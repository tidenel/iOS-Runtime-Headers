/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSString, NSURL;

@interface SAAlarmCreateCompleted : SABaseCommand <SAServerBoundCommand> {
}

@property(copy) NSString * aceId;
@property(copy) NSURL * alarmId;
@property(copy) NSString * refId;

+ (id)createCompleted;
+ (id)createCompletedWithDictionary:(id)arg1 context:(id)arg2;

- (id)alarmId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAlarmId:(id)arg1;

@end
