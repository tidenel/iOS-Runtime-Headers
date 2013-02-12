/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class <AFUISnippetPaperViewDelegate>, UIColor, UIImage, UIImageView;

@interface AFUISnippetPaperView : UIView {
    struct { 
        float r; 
        float g; 
        float b; 
        float a; 
    <AFUISnippetPaperViewDelegate> *_delegate;
    } _gradientValues[5];
    BOOL _hasBeveledEdge;
    UIImage *_paperImage;
    UIImageView *_paperImageView;
    BOOL _usesGradient;
    BOOL _usingProvidedPaper;
}

@property BOOL hasBeveledEdge;
@property(retain) UIColor * paperColor;
@property(retain) UIImage * paperImage;
@property float paperImageAlpha;
@property BOOL usesGradient;

- (struct { float x1; float x2; float x3; float x4; float x5; })_uiGradientValueForValue:(struct { float x1; float x2; float x3; float x4; })arg1;
- (id)color;
- (void)dealloc;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)hasBeveledEdge;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)paperColor;
- (id)paperImage;
- (float)paperImageAlpha;
- (void)setColor:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setGradientEndColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setGradientStartColorWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4;
- (void)setGradientValues:(const struct { float x1; float x2; float x3; float x4; }*)arg1;
- (void)setHasBeveledEdge:(BOOL)arg1;
- (void)setNeedsDisplay;
- (void)setPaperColor:(id)arg1;
- (void)setPaperImage:(id)arg1;
- (void)setPaperImageAlpha:(float)arg1;
- (void)setUsesGradient:(BOOL)arg1;
- (BOOL)usesGradient;

@end
