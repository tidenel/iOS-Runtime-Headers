/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSArray, NSNumber, SALocation;

@interface SALocalSearchMapItemSnippet : SAUISnippet {
}

@property(copy) NSArray * items;
@property(copy) NSArray * providerCommand;
@property(retain) NSNumber * regionOfInterestRadiusInMiles;
@property(retain) SALocation * searchRegionCenter;
@property(retain) NSNumber * userCurrentLocation;

+ (id)mapItemSnippet;
+ (id)mapItemSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)items;
- (id)providerCommand;
- (id)regionOfInterestRadiusInMiles;
- (id)searchRegionCenter;
- (void)setItems:(id)arg1;
- (void)setProviderCommand:(id)arg1;
- (void)setRegionOfInterestRadiusInMiles:(id)arg1;
- (void)setSearchRegionCenter:(id)arg1;
- (void)setUserCurrentLocation:(id)arg1;
- (id)userCurrentLocation;

@end
