/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableDictionary, NSTimer, UIKBTree, UIKeyboardLayoutStar;

@interface UIKBKeyplaneView : UIView <UIKBCacheableView> {
    NSTimer *_activatedTimer;
    NSMutableDictionary *_activeViewIndex;
    NSMutableDictionary *_delayedDeactivationKeys;
    UIKBTree *_keyboard;
    UIKBTree *_keyplane;
    UIKeyboardLayoutStar *_layout;
    BOOL _performingDeactivation;
    NSMutableDictionary *_renderedKeyViews;
    NSMutableDictionary *_states;
    NSMutableDictionary *_subviewIndex;
}

@property(readonly) BOOL cacheDeferable;
@property(retain) UIKBTree * keyplane;
@property UIKeyboardLayoutStar * layout;

- (void)activateKeys;
- (void)addKeyToDelayedDeactivationSet:(id)arg1;
- (BOOL)cacheDeferable;
- (id)cacheIdentifierForKey:(id)arg1 withState:(int)arg2;
- (id)cacheIdentifierForKey:(id)arg1;
- (id)cacheKey;
- (void)cancelDelayedDeactivation;
- (Class)classForKey:(id)arg1;
- (id)containingViewForKey:(id)arg1 withState:(int)arg2;
- (void)deactivateKey:(id)arg1;
- (void)deactivateKeys;
- (void)dealloc;
- (void)displayLayer:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 keyboard:(id)arg2 keyplane:(id)arg3;
- (BOOL)keyIsMaskable:(id)arg1;
- (id)keyplane;
- (id)layout;
- (void)performDelayedDeactivation:(id)arg1;
- (void)purgeKeyViews;
- (void)purgeSubviews;
- (void)removeFromSuperview;
- (void)removeKeyFromDelayedDeactivationSet:(id)arg1;
- (void)scheduleDelayedDeactivation;
- (void)setKeyplane:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setState:(int)arg1 forKey:(id)arg2;
- (int)stateForKey:(id)arg1;
- (BOOL)validForKeyplane:(id)arg1 withVisualStyle:(int)arg2;
- (id)viewForKey:(id)arg1 state:(int)arg2;
- (id)viewForKey:(id)arg1;

@end
