/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLCameraFaceTrackingView : PLCameraFocusView {
    BOOL _isInFrame;
}

@property BOOL isInFrame;

- (id)_createBoundsAnimation;
- (id)_createContentsAnimation;
- (void)_loadImagesWithImageSize:(struct CGSize { float x1; float x2; }*)arg1;
- (void)animateToFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)fadeIn;
- (void)fadeOut;
- (double)fadeOutDuration;
- (id)init;
- (BOOL)isInFrame;
- (void)scaleWithZoomFactor:(float)arg1;
- (void)setIsInFrame:(BOOL)arg1;

@end
