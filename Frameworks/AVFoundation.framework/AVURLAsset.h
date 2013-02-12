/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class <AVURLAssetFailedURLRequestHandling>, AVAssetCache, AVURLAssetInternal, NSString, NSURL;

@interface AVURLAsset : AVAsset {
    AVURLAssetInternal *_asset;
}

@property(readonly) NSURL * URL;
@property(readonly) AVAssetCache * assetCache;
@property(readonly) NSString * cacheKey;
@property(setter=setFailedURLRequestDelegate:) <AVURLAssetFailedURLRequestHandling> * failedURLRequestDelegate;
@property(readonly) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property(readonly) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;

+ (id)URLAssetWithURL:(id)arg1 options:(id)arg2;
+ (id)_avfValidationPlist;
+ (void)_ensureAudiovisualTypes;
+ (id)audiovisualMIMETypes;
+ (id)audiovisualTypes;
+ (void)initialize;
+ (BOOL)isPlayableExtendedMIMEType:(id)arg1;

- (id)URL;
- (struct __CFURL { }*)_URL;
- (unsigned int)_addChapterMetadataItem:(id)arg1 withDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 timeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg3 toChapters:(id)arg4 fromIndex:(unsigned int)arg5;
- (void)_addFigAssetNotifications;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (id)_chapterGroupInfo;
- (id)_errorForFigNotificationPayload:(struct __CFDictionary { }*)arg1 key:(struct __CFString { }*)arg2;
- (struct OpaqueFigFormatReader { }*)_formatReader;
- (void)_removeFigAssetNotifications;
- (void)_setAssetInspectorLoader:(id)arg1;
- (void)_tracksDidChange;
- (id)assetCache;
- (id)availableChapterLocales;
- (id)cacheKey;
- (void)cancelLoading;
- (id)chapterMetadataGroupsWithTitleLocale:(id)arg1 containingItemsWithCommonKeys:(id)arg2;
- (void)dealloc;
- (id)description;
- (id)downloadDestinationURL;
- (id)failedURLRequestDelegate;
- (void)finalize;
- (void)finishHandlingFailedURLRequestWithResponseProperties:(id)arg1;
- (id)init;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)lyrics;
- (id)resolvedURL;
- (void)setFailedURLRequestDelegate:(id)arg1;
- (BOOL)shouldMatchDataInCacheByURLPathComponentOnly;
- (BOOL)shouldMatchDataInCacheByURLWithoutQueryComponent;
- (id)tracks;

@end
