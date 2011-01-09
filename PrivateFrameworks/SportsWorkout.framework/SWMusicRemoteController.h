/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSArray, NSTimer, NSString;



@interface SWMusicRemoteController : NSObject 
{
    NSInteger _musicSelection;
    NSInteger _currentVolumeDirection;
    NSTimer *_volumeAdjustTimer;
    NSString *_latestSelectedPlaylistName;
    NSArray *_playlists;
    NSArray *_workoutMixes;
}

@property NSInteger musicSelection;
@property(readonly) BOOL shouldControlMusic;
@property(copy) NSString *latestSelectedPlaylistName;

+ (void)clearCachedDatabaseData;
+ (id)sharedMusicController;

- (void)pause;
- (id)_init;
- (id)init;
- (void)dealloc;
- (void)beginSeekingBackward;
- (void)beginSeekingForward;
- (void)endSeeking;
- (void)play;
- (void)setMusicSelection:(NSInteger)arg1;
- (BOOL)isNowPlaying;
- (void)_releaseRemoteCachedData;
- (id)workoutMixes;
- (id)playlists;
- (void)startWorkoutMixWithPersistentUID:(unsigned long long)arg1;
- (void)startPlaylistWithPersistentUID:(unsigned long long)arg1;
- (void)startWorkoutMixAtIndex:(NSUInteger)arg1;
- (void)startPlaylistAtIndex:(NSUInteger)arg1;
- (void)startShuffleSongs;
- (unsigned long long)persistentUIDForPlaylistIndex:(NSUInteger)arg1;
- (unsigned long long)persistentUIDForWorkoutMixIndex:(NSUInteger)arg1;
- (void)_startPlaylistWithPersistentUID:(unsigned long long)arg1;
- (void)_startPlaylistAtIndex:(NSUInteger)arg1 isWorkoutMix:(BOOL)arg2;
- (unsigned long long)_persistentUIDForPlaylistIndex:(NSUInteger)arg1 isWorkoutMix:(BOOL)arg2;
- (void)_adjustVolumeUpTimer:(id)arg1;
- (void)_adjustVolumeDownTimer:(id)arg1;
- (void)_adjustVolumeUp;
- (void)_adjustVolumeDown;
- (void)_nowPlayingItemChanged:(id)arg1;
- (void)_mediaLibraryChanged:(id)arg1;
- (id)latestSelectedPlaylistName;
- (void)setLatestSelectedPlaylistName:(id)arg1;
- (NSInteger)musicSelection;
- (id)currentSongName;
- (void)goToNowPlaying;
- (BOOL)shouldControlMusic;
- (void)selectNextSong;
- (void)selectPreviousSong;
- (void)beginAdjustingVolume:(NSInteger)arg1;
- (void)endAdjustingVolume:(NSInteger)arg1;
- (void)interruptPlaybackForTrackUID:(id)arg1;

@end