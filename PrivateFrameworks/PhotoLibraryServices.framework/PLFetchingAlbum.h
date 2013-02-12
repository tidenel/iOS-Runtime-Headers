/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSFetchRequest, NSOrderedSet;

@interface PLFetchingAlbum : _PLFetchingAlbum <PLAssetContainerDisplayCount> {
    unsigned int _countForDisplay;
    int _emptyState;
    unsigned int _photosCount;
    unsigned int _videosCount;
}

@property(readonly) unsigned int countForDisplay;
@property(retain) NSFetchRequest * fetchRequest;
@property(retain) NSOrderedSet * fetchedAssets;
@property(readonly) BOOL hasAssetsCache;

+ (BOOL)contextShouldIgnoreChangesForFetchRequest;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssets;
+ (BOOL)contextShouldIgnoreChangesForFetchedAssetsSet;

- (unsigned int)_fetchedCountForAssetsOfKind:(int)arg1;
- (id)assets;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)batchFetchAssets:(id)arg1;
- (BOOL)canPerformEditOperation:(int)arg1;
- (unsigned int)count;
- (unsigned int)countForAssetsOfKind:(int)arg1;
- (unsigned int)countForDisplay;
- (void)didTurnIntoFault;
- (id)fetchRequest;
- (BOOL)hasAssetsCache;
- (BOOL)isEmpty;
- (id)keyAsset;
- (id)mutableAssets;
- (id)primitiveAssets;
- (void)setAssets:(id)arg1;
- (void)setFetchRequest:(id)arg1;
- (void)setKeyAsset:(id)arg1;
- (void)setupFetchRequest;
- (void)updateSnapshotAndClearCaches:(id)arg1;

@end
