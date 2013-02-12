/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPMediaEntity, NSString;

@interface _MPMediaLibraryEntityChange : NSObject {
    NSString *_anchor;
    int _deletionType;
    MPMediaEntity *_entity;
}

@property(readonly) NSString * anchor;
@property(readonly) int deletionType;
@property(readonly) MPMediaEntity * entity;

- (id)anchor;
- (void)dealloc;
- (int)deletionType;
- (id)entity;
- (id)initWithEntity:(id)arg1 anchor:(id)arg2 deletionType:(int)arg3;

@end
