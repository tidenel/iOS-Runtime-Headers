/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableCompositionInternal, NSArray;

@interface AVMutableComposition : AVComposition {
    AVMutableCompositionInternal *_mutablePriv;
}

@property struct CGSize { float x1; float x2; } naturalSize;
@property(readonly) NSArray * tracks;

+ (id)composition;

- (id)_initWithComposition:(id)arg1;
- (id)_newTrackForIndex:(long)arg1;
- (void)_notifyAllTracksThatSegmentsDidChange;
- (id)addMutableTrackWithMediaType:(id)arg1 preferredTrackID:(int)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)insertEmptyTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (BOOL)insertTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 ofAsset:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 error:(id*)arg4;
- (id)mutableTrackCompatibleWithTrack:(id)arg1;
- (struct CGSize { float x1; float x2; })naturalSize;
- (void)removeTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)removeTrack:(id)arg1;
- (void)scaleTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 toDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setNaturalSize:(struct CGSize { float x1; float x2; })arg1;
- (id)tracks;

@end
