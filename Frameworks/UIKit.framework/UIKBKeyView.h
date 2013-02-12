/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIKBTree;

@interface UIKBKeyView : UIView <UIKBCacheableView> {
    struct CGPoint { 
        float x; 
        float y; 
    struct __CFBoolean { } *m_allowsCaching;
    } m_drawOrigin;
    UIKBTree *m_key;
    UIKBTree *m_keyboard;
    int m_state;
}

@property(readonly) BOOL cacheDeferable;
@property struct CGPoint { float x1; float x2; } drawOrigin;
@property(readonly) UIKBTree * key;
@property(readonly) UIKBTree * keyboard;
@property(readonly) int state;

- (BOOL)cacheDeferable;
- (id)cacheKey;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (struct CGPoint { float x1; float x2; })drawOrigin;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 key:(id)arg3 state:(int)arg4;
- (id)key;
- (id)keyboard;
- (void)setDrawOrigin:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)shouldCache;
- (int)state;
- (int)textEffectsVisibilityLevel;
- (void)updateForKeyboard:(id)arg1 key:(id)arg2;

@end
