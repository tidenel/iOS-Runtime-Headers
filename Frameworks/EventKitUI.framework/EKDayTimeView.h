/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class EKCurrentTimeMarkerView, NSTimer, UIView;

@interface EKDayTimeView : UIView {
    unsigned int _leftBorder : 1;
    unsigned int _rightBorder : 1;
    UIView *_bottomContentView;
    float _designatorSize;
    double _highlightedHour;
    float _hourHeight;
    float _hourSize;
    int _hoursToPad;
    int _orientation;
    BOOL _showsTimeMarker;
    EKCurrentTimeMarkerView *_timeMarker;
    NSTimer *_timeMarkerTimer;
    float _timeWidth;
    UIView *_topContentView;
    BOOL _useLightText;
}

@property(readonly) float defaultHeight;
@property double highlightedHour;
@property(readonly) float hourHeight;
@property int hoursToPad;
@property BOOL showsLeftBorder;
@property BOOL showsRightBorder;
@property BOOL showsTimeMarker;
@property(readonly) float timeWidth;
@property BOOL usesLightText;

+ (float)defaultHeightForOrientation:(int)arg1;
+ (float)designatorSizeForOrientation:(int)arg1;
+ (float)hourHeightForOrientation:(int)arg1;
+ (float)hourSizeForOrientation:(int)arg1;
+ (float)timeInsetForOrientation:(int)arg1;
+ (float)timeWidthForOrientation:(int)arg1;
+ (float)verticalPadding;

- (void)_invalidateMarkerTimer;
- (void)_localeChanged;
- (float)_positionOfSecond:(int)arg1;
- (void)_startMarkerTimer;
- (void)_updateMarkerPosition;
- (void)dealloc;
- (float)defaultHeight;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 forContentView:(id)arg2 withHourRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg3;
- (double)highlightedHour;
- (float)hourHeight;
- (int)hoursToPad;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setHighlightedHour:(double)arg1;
- (void)setHoursToPad:(int)arg1;
- (void)setOpaque:(BOOL)arg1;
- (void)setOrientation:(int)arg1;
- (void)setShowsLeftBorder:(BOOL)arg1;
- (void)setShowsRightBorder:(BOOL)arg1;
- (void)setShowsTimeMarker:(BOOL)arg1;
- (void)setUsesLightText:(BOOL)arg1;
- (BOOL)showsLeftBorder;
- (BOOL)showsRightBorder;
- (BOOL)showsTimeMarker;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (float)timeInset;
- (float)timeWidth;
- (float)topPadding;
- (BOOL)usesLightText;
- (void)willMoveToSuperview:(id)arg1;

@end
