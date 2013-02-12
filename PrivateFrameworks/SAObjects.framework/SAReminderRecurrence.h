/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSString;

@interface SAReminderRecurrence : AceObject <SAAceSerializable> {
}

@property(copy) NSArray * daysOfTheMonth;
@property(copy) NSArray * daysOfTheWeek;
@property(copy) NSArray * daysOfTheYear;
@property(copy) NSString * frequencyTimeUnit;
@property int interval;
@property(copy) NSArray * monthsOfTheYear;
@property(copy) NSArray * weeksOfTheYear;

+ (id)recurrence;
+ (id)recurrenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)daysOfTheMonth;
- (id)daysOfTheWeek;
- (id)daysOfTheYear;
- (id)encodedClassName;
- (id)frequencyTimeUnit;
- (id)groupIdentifier;
- (int)interval;
- (id)monthsOfTheYear;
- (void)setDaysOfTheMonth:(id)arg1;
- (void)setDaysOfTheWeek:(id)arg1;
- (void)setDaysOfTheYear:(id)arg1;
- (void)setFrequencyTimeUnit:(id)arg1;
- (void)setInterval:(int)arg1;
- (void)setMonthsOfTheYear:(id)arg1;
- (void)setWeeksOfTheYear:(id)arg1;
- (id)weeksOfTheYear;

@end
