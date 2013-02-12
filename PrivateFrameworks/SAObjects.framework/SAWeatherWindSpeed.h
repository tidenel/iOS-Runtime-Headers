/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString;

@interface SAWeatherWindSpeed : AceObject <SAAceSerializable> {
}

@property(copy) NSString * value;
@property(copy) NSString * windDirection;
@property(retain) NSNumber * windDirectionDegree;

+ (id)windSpeed;
+ (id)windSpeedWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setValue:(id)arg1;
- (void)setWindDirection:(id)arg1;
- (void)setWindDirectionDegree:(id)arg1;
- (id)value;
- (id)windDirection;
- (id)windDirectionDegree;

@end
