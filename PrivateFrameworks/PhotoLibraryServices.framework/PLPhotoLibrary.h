/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, NSCalendar, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject<PLAssetContainer>, NSSet, PLFetchingAlbum, PLGenericAlbum, PLManagedAlbum, PLManagedObjectContext, PLThumbnailManager, PLWStackedImageCache;

@interface PLPhotoLibrary : NSObject {
    PLGenericAlbum *_allImportedPhotosAlbum;
    struct NSObject { Class x1; } *_allPhotoStreamPhotosAlbum;
    struct __CFDictionary { } *_allPhotos;
    NSSet *_audioFileExtensions;
    PLManagedAlbum *_cameraRollAlbum;
    PLFetchingAlbum *_cameraSessionAlbum;
    BOOL _canTriggerDatabaseUpdate;
    int _databaseMigrationKind;
    unsigned int _deletedCountSinceLastFetchedGPSCount;
    NSCalendar *_exifConversionCalendar;
    NSDictionary *_existingThumbnailEntries;
    NSSet *_extraVideoExtensions;
    NSSet *_imageFileExtensions;
    unsigned int _insertedCountSinceLastFetchedGPSCount;
    unsigned int _lastFetchedGPSCount;
    PLGenericAlbum *_lastImportedPhotosAlbum;
    double _lastRemoteDataModification;
    BOOL _listeningForITunesSyncing;
    unsigned int _newlyCompleteWithGPS;
    NSMutableArray *_photoStreamAlbums;
    NSMutableDictionary *_photoStreamAlbumsByStreamID;
    id _ptpDelegate;
    NSSet *_rawImageFileExtensions;
    PLManagedAlbum *_savedAndInFlightAlbum;
    PLWStackedImageCache *_stackedImageCache;
    PLThumbnailManager *_thumbnailManager;
    PLManagedObjectContext *managedObjectContext;
}

@property(readonly) NSArray * albums;
@property(readonly) NSArray * eventAlbums;
@property(readonly) NSArray * faceAlbums;
@property(readonly) NSArray * imagePickerAlbums;
@property(retain) PLManagedObjectContext * managedObjectContext;
@property(readonly) NSArray * photoStreamAlbums;
@property(readonly) NSArray * photoStreamAlbumsForPreferences;
@property(readonly) NSArray * placeAlbums;
@property(readonly) NSObject<PLAssetContainer> * savedPhotosAlbum;
@property(readonly) PLThumbnailManager * thumbnailManager;
@property(readonly) NSArray * userAlbums;
@property(readonly) NSArray * wallpaperAlbums;

+ (void)_doFilesystemImportIfNeeded;
+ (void)_presentSqliteCorruptionErrorDialog;
+ (id)assetsDataDirectory;
+ (id)calculatedDisplayableIndexesForAlbum:(struct NSObject { Class x1; }*)arg1 count:(unsigned int)arg2;
+ (id)crashRecoveryIndicatorFilePaths;
+ (void)createPhotoStreamAlbumWithStreamID:(id)arg1 completionHandler:(id)arg2;
+ (id)dcimDirectory;
+ (id)dcimDirectoryURL;
+ (void)handlePossibleCoreDataError:(id)arg1;
+ (id)iTunesPhotosDirectory;
+ (id)iTunesSyncedAssetThumbnailsDirectory;
+ (id)iTunesSyncedAssetsDirectory;
+ (id)iTunesSyncedFaceAlbumThumbnailsDirectory;
+ (id)imageWriterIndicatorFilePath;
+ (void)initializeGraphicsServices;
+ (BOOL)isApplicationWildcat;
+ (BOOL)isRunningInStoreDemoMode;
+ (id)mediaFilesDirectoryURL;
+ (id)migrationIndicatorFilePath;
+ (void)moveDatabasesAside;
+ (BOOL)needsToBeSyncedWithiTunesBecauseFormatIDsChanged;
+ (id)pathToAssetsToAlbumsMapping;
+ (id)persistedAlbumDataDirectoryURL;
+ (id)photoDataDirectory;
+ (id)photoDataDirectoryURL;
+ (id)photoDataMiscDirectory;
+ (id)photoMetadataDirectoryURL;
+ (id)photoStreamsDataDirectory;
+ (BOOL)processCanReadSandboxForPath:(id)arg1;
+ (BOOL)processCanWriteSandboxForPath:(id)arg1;
+ (void)recoverFromCrashIfNeeded;
+ (struct NSObject { Class x1; }*)savedPhotosAlbum;
+ (void)setApplicationIsWildcat:(BOOL)arg1;
+ (void)setImageWriterIsBusy:(BOOL)arg1;
+ (void)setMigratorIsBusy:(BOOL)arg1;
+ (void)setPhotoStreamEnabled:(BOOL)arg1;
+ (void)setSqliteErrorAndExitIfNecessary;
+ (void)setVideoCaptureIsBusy:(BOOL)arg1;
+ (id)sharedInMemoryLibrary;
+ (id)sharedPhotoLibrary;
+ (id)simpleDCIMDirectory;
+ (id)sqliteErrorIndicatorFilePath;
+ (id)takingVideoIndicatorFilePath;
+ (id)videosPath;

- (void)_addPhoto:(id)arg1 toEvent:(struct NSObject { Class x1; }*)arg2;
- (id)_albumsContainingItems:(id)arg1 includeInFlightAlbum:(BOOL)arg2;
- (id)_allAssetsForDeletion:(id)arg1;
- (void)_attachAuxDatabase;
- (void)_batchDeleteAssets:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)_calculatePendingItemCountsAfterOTARestoreWithMangedObjectContext:(id)arg1;
- (void)_compactThumbnailTablesIfNecessary;
- (void)_deleteFilesAndEmptyDirectoriesAtPaths:(id)arg1;
- (void)_deleteObsoleteMetadataFiles;
- (void)_detachAuxDatabase;
- (id)_getGlobal:(id)arg1 userInfo:(id)arg2;
- (BOOL)_hasAtLeastOneItem:(BOOL)arg1;
- (id)_iTunesPhotos;
- (id)_init;
- (void)_linkAsideAlbumMetadataForOTARestore;
- (void)_loadExistingThumbnailEntries;
- (void)_loadFileExtensionInformation;
- (void)_loadPhotoLibraryAfterMigration;
- (void)_migrationDidFinish;
- (void)_notifyChangedPhotos:(id)arg1;
- (void)_notifyPhotoLibraryIsNoLongerAvailableOnMainThread;
- (void)_notifyProgress:(float)arg1;
- (int)_orientationAfterRotatingOrientation:(int)arg1 clockwiseByDegrees:(int)arg2 transposeCoordinatesOut:(BOOL*)arg3;
- (int)_orientationOfFileAtPath:(id)arg1;
- (void)_releaseThumbnailManager;
- (void)_removeOrphanedThumbnailEntries;
- (void)_removeSyncedAlbumsInTransactionWithManagedObjectContext:(id)arg1;
- (void)_safeSave:(id)arg1;
- (id)_setGlobal:(id)arg1 userInfo:(id)arg2;
- (void)_unloadExistingThumbnailEntries;
- (void)_updateHasAtLeastOnePhotoWithGPSWithInsertedCount:(unsigned int)arg1 deletedCount:(unsigned int)arg2 updatedAssets:(id)arg3;
- (void)_updateWithInsertedAssetsCount:(unsigned int)arg1 deletedCount:(unsigned int)arg2 updatedAssets:(id)arg3;
- (id)addDCIMEntryAtFileURL:(id)arg1 toEvent:(struct NSObject { Class x1; }*)arg2 sidecarFileInfo:(id)arg3 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg4 importSessionIdentifier:(id)arg5 isImported:(BOOL)arg6 previewImage:(id)arg7 thumbnailImage:(id)arg8 savedAssetType:(int)arg9 replacementUUID:(id)arg10 extendedInfo:(id)arg11 thumbnailsData:(struct __CFDictionary { }*)arg12 withUUID:(id)arg13;
- (void)addToKnownPhotoStreamAlbums:(id)arg1;
- (struct NSObject { Class x1; }*)albumFromGroupURL:(id)arg1;
- (id)albumListForContentMode:(int)arg1;
- (struct NSObject { Class x1; }*)albumWithUuid:(id)arg1;
- (id)albums;
- (id)albumsForContentMode:(int)arg1;
- (id)allImportedPhotosAlbum;
- (struct NSObject { Class x1; }*)allPhotoStreamPhotosAlbum;
- (struct NSObject { Class x1; }*)allPhotoStreamPhotosAlbumIfItExists;
- (struct NSObject { Class x1; }*)allPhotosAlbum;
- (struct NSObject { Class x1; }*)allPhotosAlbumIfExists;
- (id)assetURLForManagedPhoto:(id)arg1;
- (id)assetURLForPhoto:(id)arg1 extension:(id)arg2;
- (id)assetURLForPhoto:(id)arg1;
- (id)assetWithUUID:(id)arg1 inAlbum:(struct NSObject { Class x1; }*)arg2;
- (id)assetWithUUID:(id)arg1;
- (struct NSObject { Class x1; }*)cameraSessionAlbumFromTimeInterval:(double)arg1;
- (void)cleanupForStoreDemoMode;
- (void)cleanupModelAfterRestoreFromiTunesBackup;
- (void)clientApplicationWillEnterForeground;
- (unsigned int)concurrencyType;
- (void)copyAssetToCameraRoll:(id)arg1 creationDate:(id)arg2 completionBlock:(id)arg3;
- (unsigned int)countOfAlbumsContainingItems:(id)arg1 includeInFlightAlbum:(BOOL)arg2;
- (id)countOfAllPhotosAndVideos;
- (id)dataForPhoto:(id)arg1 format:(int)arg2 width:(int*)arg3 height:(int*)arg4 bytesPerRow:(int*)arg5 dataWidth:(int*)arg6 dataHeight:(int*)arg7 imageDataOffset:(int*)arg8;
- (void)dealloc;
- (void)deleteAllImages;
- (void)deleteImages:(id)arg1;
- (unsigned int)editableAlbumCount;
- (id)editableAlbums;
- (struct NSObject { Class x1; }*)eventAlbumContainingPhoto:(id)arg1;
- (id)eventAlbums;
- (struct NSObject { Class x1; }*)eventWithName:(id)arg1 andImportSessionIdentifier:(id)arg2;
- (id)existingObjectWithID:(id)arg1 error:(id*)arg2;
- (id)faceAlbums;
- (id)fileExtensionsForPhoto:(id)arg1;
- (struct NSObject { Class x1; }*)filesystemImportProgressAlbum;
- (void)flushAlbums;
- (void)flushDCIMAlbums;
- (void)flushPhotoStreamAlbums;
- (BOOL)getPhotoCount:(unsigned int*)arg1 videoCount:(unsigned int*)arg2;
- (id)globalValueForKey:(id)arg1;
- (BOOL)hasAtLeastOneItem;
- (BOOL)hasAtLeastOnePhoto;
- (BOOL)hasAtLeastOnePhotoWithGPS;
- (BOOL)hasPhotoWithFileCreationDate:(id)arg1 fileName:(id)arg2 fileSize:(int)arg3;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbum;
- (struct NSObject { Class x1; }*)iPadAllPhotosAlbumIfExists;
- (id)iTunesFaceImageForRecordID:(int)arg1 faceIndex:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3 returnLocationInImage:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (id)imageForFormat:(int)arg1 forAsset:(id)arg2;
- (id)imagePickerAlbums;
- (id)init;
- (id)initWithPath:(id)arg1 canTriggerDatabaseUpdate:(BOOL)arg2;
- (BOOL)isAudioFileExtension:(id)arg1;
- (BOOL)isImageFileExtension:(id)arg1;
- (BOOL)isNonRawImageFileExtension:(id)arg1;
- (BOOL)isPhotoInSavedPhotosAlbum:(id)arg1;
- (BOOL)isRawImageFileExtension:(id)arg1;
- (BOOL)isVideoFileExtension:(id)arg1;
- (id)lastImportSessionUUID;
- (id)lastImportedPhotosAlbum;
- (BOOL)libraryIsAvailable;
- (void)loadDatabase;
- (id)managedObjectContext;
- (id)managedObjectWithObjectID:(id)arg1;
- (id)masterFilenameFromSidecarFileInfo:(id)arg1;
- (id)masterURLFromSidecarURLs:(id)arg1;
- (id)messagesPhotoFromAssetURL:(id)arg1;
- (void)migrateSavedPhotoCaptureTimes;
- (void)modifyDCIMEntryForPhoto:(id)arg1;
- (void)modifyDCIMEntryForVideo:(id)arg1 progress:(struct { id x1; float x2; struct __CFArray {} *x3; float x4; BOOL x5; id x6; }*)arg2 previewImage:(id)arg3 thumbnailImage:(id)arg4;
- (BOOL)multiplePhotoStreamsAvailable;
- (BOOL)needsMigration;
- (id)newImageForDulcimerPhoto:(id)arg1 format:(int)arg2 outImageProperties:(const struct __CFDictionary {}**)arg3;
- (id)newImageForDulcimerPhoto:(id)arg1 format:(int)arg2;
- (id)objectWithObjectID:(id)arg1;
- (struct NSObject { Class x1; }*)otaRestoreProgressAlbum;
- (void)performBlock:(id)arg1 completionHandler:(id)arg2;
- (void)performBlock:(id)arg1;
- (void)performTransaction:(id)arg1 completionHandler:(id)arg2;
- (void)performTransaction:(id)arg1;
- (id)photoFromAssetURL:(id)arg1;
- (void)photoLibraryAvailableNotification;
- (void)photoLibraryCorruptNotification;
- (void)photoLibraryRebuildingNotification;
- (id)photoStreamAlbums;
- (id)photoStreamAlbumsForPreferences;
- (id)photoWithPath:(id)arg1;
- (void)pictureWasChanged;
- (void)pictureWasDeletedNotification;
- (void)pictureWasTakenOrChanged;
- (id)placeAlbums;
- (void)preheatImageDataForAssets:(id)arg1 format:(int)arg2;
- (void)prepareDatabaseForOTAAssetsPhase;
- (void)prepareToMigrateDcimToDatabase;
- (int)priorityForFileExtension:(id)arg1;
- (void)processSyncSaveJob:(id)arg1 albumMap:(id)arg2;
- (void)recreateAlbumsFromMetadata;
- (void)removeFromKnownPhotoStreamAlbums:(id)arg1;
- (void)removePhotosFromAllAlbums:(id)arg1;
- (BOOL)rotateCameraPhoto:(id)arg1 byDegrees:(int)arg2;
- (struct NSObject { Class x1; }*)savedAndInFlightPhotosAlbum;
- (struct NSObject { Class x1; }*)savedPhotosAlbum;
- (void)setGlobalValue:(id)arg1 forKey:(id)arg2;
- (void)setLastImportSessionUUID:(id)arg1;
- (void)setManagedObjectContext:(id)arg1;
- (void)setPhotoStreamEnabled:(BOOL)arg1;
- (struct NSObject { Class x1; }*)syncProgressAlbum;
- (id)syncedAlbums;
- (id)thumbnailManager;
- (void)updateThumbnailsForPhoto:(id)arg1 previewImage:(id)arg2 thumbnailImage:(id)arg3;
- (id)userAlbums;
- (id)wallpaperAlbums;
- (void)withDispatchGroup:(struct dispatch_group_s { }*)arg1 performBlock:(id)arg2 completionHandler:(id)arg3;
- (void)withDispatchGroup:(struct dispatch_group_s { }*)arg1 performBlock:(id)arg2;
- (void)withDispatchGroup:(struct dispatch_group_s { }*)arg1 performTransaction:(id)arg2 completionHandler:(id)arg3;
- (void)withDispatchGroup:(struct dispatch_group_s { }*)arg1 performTransaction:(id)arg2;

@end
