/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class MPTimeMarker;

@interface MPVideoChapterCellContentView : UIView {
    unsigned int _current : 1;
    unsigned int _selected : 1;
    unsigned int _showThumbnailColumn : 1;
    NSUInteger _index;
    float _timeColumnWidth;
    MPTimeMarker *_timeMarker;
}

@property(retain) MPTimeMarker *timeMarker;
@property(getter=isCurrent) BOOL current;
@property NSUInteger index;
@property(getter=isSelected) BOOL selected;
@property BOOL showThumbnailColumn;
@property float timeColumnWidth;

- (void)_addThumbnailIfNecessary:(id)arg1;
- (void)_removeThumbnailIfNecessary:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSUInteger)index;
- (BOOL)isCurrent;
- (BOOL)isSelected;
- (void)layoutSubviews;
- (void)setCurrent:(BOOL)arg1;
- (void)setIndex:(NSUInteger)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)setShowThumbnailColumn:(BOOL)arg1;
- (void)setTimeColumnWidth:(float)arg1;
- (void)setTimeMarker:(id)arg1;
- (BOOL)showThumbnailColumn;
- (float)timeColumnWidth;
- (id)timeMarker;

@end