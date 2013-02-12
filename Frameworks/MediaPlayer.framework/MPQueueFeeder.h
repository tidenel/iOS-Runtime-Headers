/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <NSObject>, MPAVController, NSDictionary;

@interface MPQueueFeeder : NSObject <AVPlaylistFeeder> {
    MPAVController *_avController;
    BOOL _deallocating;
    BOOL _fullScreenPlaybackQueue;
    BOOL _isSourceChangeInProgress;
    struct __CFSet { } *_itemsWithReferencesToClear;
    struct __CFDictionary { } *_nextStartTimes;
    unsigned int _repeatType;
    id _representedObject;
    unsigned int _shuffleType;
}

@property MPAVController * AVController;
@property BOOL fullScreenPlaybackQueue;
@property BOOL isSourceChangeInProgress;
@property(readonly) Class itemClass;
@property(readonly) NSDictionary * preferredLanguages;
@property(readonly) unsigned int realRepeatType;
@property(readonly) unsigned int realShuffleType;
@property unsigned int repeatType;
@property(retain) <NSObject> * representedObject;
@property unsigned int shuffleType;
@property(readonly) BOOL trackChangesCanEndPlayback;

+ (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2 feederClass:(Class)arg3;

- (id)AVController;
- (BOOL)_canPurgeNextStartTimes;
- (void)_fixNextStartTimesByInsertingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)_fixNextStartTimesByRemovingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)addReferenceToItem:(id)arg1;
- (void)archiveAVControllerPlaybackQueue:(id)arg1 toArchiver:(id)arg2;
- (void)assumeOwnershipOfItems:(id)arg1;
- (void)beginSourceChange;
- (void)clearReferencesToItem:(id)arg1;
- (void)commitSourceChangeWithStartQueueIndex:(unsigned int)arg1;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned int)arg1;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)copyRawItemAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)errorResolverForItem:(id)arg1;
- (BOOL)fullScreenPlaybackQueue;
- (void)invalidateQueueCaches;
- (BOOL)isSourceChangeInProgress;
- (Class)itemClass;
- (unsigned int)itemCount;
- (id)itemForIndex:(unsigned int)arg1;
- (unsigned int)itemTypeForIndex:(unsigned int)arg1;
- (id)localizedPositionInPlaylistString:(id)arg1;
- (id)mix;
- (unsigned int)numberOfPaths;
- (id)pathAtIndex:(unsigned int)arg1;
- (id)playbackInfoAtIndex:(unsigned int)arg1;
- (id)preferredLanguages;
- (unsigned int)realRepeatType;
- (unsigned int)realShuffleType;
- (BOOL)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(BOOL)arg2;
- (BOOL)reloadWithDataSource:(id)arg1;
- (unsigned int)repeatType;
- (id)representedObject;
- (void)restoreAVControllerPlaybackQueue:(id)arg1 fromUnarchiver:(id)arg2;
- (void)setAVController:(id)arg1;
- (void)setFullScreenPlaybackQueue:(BOOL)arg1;
- (void)setIsSourceChangeInProgress:(BOOL)arg1;
- (void)setMix:(id)arg1;
- (void)setNextStartTime:(double)arg1 forIndex:(unsigned int)arg2;
- (void)setRepeatType:(unsigned int)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setShuffleType:(unsigned int)arg1;
- (BOOL)shouldBeginPlaybackOfItem:(id)arg1 error:(id*)arg2;
- (BOOL)shouldReloadForChangeFromNetworkType:(int)arg1 toNetworkType:(int)arg2;
- (void)shuffleItemsWithAnchor:(unsigned int*)arg1;
- (unsigned int)shuffleType;
- (BOOL)trackChangesCanEndPlayback;

@end
