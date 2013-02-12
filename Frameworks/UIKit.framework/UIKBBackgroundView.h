/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString;

@interface UIKBBackgroundView : UIView <UIKBCacheableView> {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    id _geometryCacheKey;
    NSString *_layoutName;
    } _splitLeft;
    } _splitRight;
    int _visualStyle;
}

@property(readonly) BOOL cacheDeferable;

- (BOOL)cacheDeferable;
- (id)cacheKey;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)refreshStyleForKeyboard:(id)arg1;

@end
