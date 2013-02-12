/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

@interface IUArtistsDataSource : IUMediaQueriesDataSource {
    BOOL _groupByAlbumArtist;
}

+ (int)mediaEntityType;
+ (id)queryCollectionPropertiesToFetch;
+ (id)tabBarItemIconName;
+ (id)tabBarItemTitleKey;

- (void)_updateGroupingPropertyForQueries:(id)arg1;
- (BOOL)allowsDeletion;
- (void)appDefaultsChanged;
- (Class)cellConfigurationClassForEntity:(id)arg1;
- (BOOL)deleteRemovesEntireGroup;
- (id)init;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (unsigned int)requiredEntityCountForSections;
- (void)setQueries:(id)arg1;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (id)viewControllerContextForMediaQuery:(id)arg1;

@end
