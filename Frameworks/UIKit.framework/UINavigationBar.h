/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSDictionary, NSMutableArray, UIColor, UINavigationItem, UIView;

@interface UINavigationBar : UIView <NSCoding> {
    struct { 
        unsigned int animate : 1; 
        unsigned int animationDisabledCount : 10; 
        unsigned int transitioningBarStyle : 1; 
        unsigned int newBarStyle : 3; 
        unsigned int barStyle : 3; 
        unsigned int isTranslucent : 1; 
        unsigned int disableLayout : 1; 
        unsigned int backPressed : 1; 
        unsigned int animatePromptChange : 1; 
        unsigned int pendingHideBackButton : 1; 
        unsigned int titleAutosizesToFit : 1; 
        unsigned int usingNewAPI : 1; 
        unsigned int minibar : 1; 
        unsigned int forceFullHeightInLandscape : 1; 
        unsigned int isLocked : 1; 
        unsigned int shouldUpdatePromptAfterTransition : 1; 
        unsigned int crossfadeItems : 1; 
        unsigned int autoAdjustTitle : 1; 
        unsigned int isContainedInPopover : 1; 
        unsigned int needsDrawRect : 1; 
        unsigned int animationCleanupCancelled : 1; 
        unsigned int forceLayout : 1; 
        unsigned int layoutInProgress : 1; 
    UIView *_accessoryView;
    id _appearanceStorage;
    UIView *_backgroundView;
    id _delegate;
    NSMutableArray *_itemStack;
    NSArray *_leftViews;
    } _navbarFlags;
    UIView *_prompt;
    float _rightMargin;
    NSArray *_rightViews;
    unsigned int _state;
    UIColor *_tintColor;
    UIView *_titleView;
}

@property(setter=_setBackgroundView:,retain) UIView * _backgroundView;
@property(readonly) UINavigationItem * backItem;
@property int barStyle;
@property id delegate;
@property(copy) NSArray * items;
@property(retain) UIColor * tintColor;
@property(copy) NSDictionary * titleTextAttributes;
@property(readonly) UINavigationItem * topItem;
@property(getter=isTranslucent) BOOL translucent;

+ (void)_setUseCustomBackButtonAction:(BOOL)arg1;
+ (BOOL)_useCustomBackButtonAction;
+ (id)defaultPromptFont;
+ (struct CGSize { float x1; float x2; })defaultSize;
+ (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(int)arg1;
+ (struct CGSize { float x1; float x2; })defaultSizeWithPrompt;
+ (struct CGSize { float x1; float x2; })defaultSizeWithPromptForOrientation:(int)arg1;
+ (void)setDefaultAnimationDuration:(double)arg1;

- (void)_adjustVisibleItemsByDelta:(float)arg1;
- (id)_allViews;
- (id)_appearanceStorage;
- (void)_applySPIAppearanceToButtons;
- (void)_backgroundFadeDidFinish:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)_backgroundView;
- (int)_barStyle:(BOOL)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_boundsForPrompt:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withFont:(id)arg3 barStyle:(int)arg4;
- (BOOL)_canDrawContent;
- (BOOL)_canHandleStatusBarTouchAtLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)_cancelInProgressPushOrPop;
- (id)_commonHitTest:(struct CGPoint { float x1; float x2; })arg1 forView:(id)arg2;
- (void)_commonNavBarInit;
- (id)_currentLeftViews;
- (id)_currentRightViews;
- (void)_customViewChangedForButtonItem:(id)arg1;
- (id)_defaultTitleFont;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (BOOL)_didVisibleItemsChangeWithNewItems:(id)arg1 oldItems:(id)arg2;
- (void)_drawPrompt:(id)arg1 inRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withFont:(id)arg3 barStyle:(int)arg4;
- (id)_effectiveTintColor;
- (void)_fadeAllViewsIn;
- (void)_fadeAllViewsOut;
- (void)_fadeViewOut:(id)arg1;
- (void)_fadeViewsIn:(id)arg1;
- (void)_fadeViewsOut:(id)arg1;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 rightViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 forViews:(id*)arg4 forItemAtIndex:(unsigned int)arg5;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 rightViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3 forViews:(id*)arg4;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg2 rightViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg3;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3 forItemAtIndex:(unsigned int)arg4;
- (void)_getTitleViewFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 leftViewFrames:(id)arg2 rightViewFrames:(id)arg3;
- (void)_gkApplyTheme:(id)arg1 navbarStyle:(int)arg2;
- (void)_gkApplyTheme:(id)arg1;
- (void)_handleMouseDownAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)_handleMouseUpAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (BOOL)_hasBackButton;
- (void)_hideButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_iTunesStoreUI_internalTitleViewFrameForNavigationItemIndex:(int)arg1;
- (id)_itemStack;
- (void)_navBarButtonPressed:(id)arg1;
- (void)_navigationAnimationDidFinish:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (id)_popNavigationItemWithTransition:(int)arg1;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)_prepareForPopAnimationWithNewTopItem:(id)arg1;
- (void)_prepareForPushAnimationWithItems:(id)arg1;
- (void)_propagateEffectiveTintColorWithPreviousColor:(id)arg1;
- (void)_pushNavigationItem:(id)arg1 transition:(int)arg2;
- (void)_removeAccessoryView;
- (void)_removeItemsFromSuperview:(id)arg1;
- (void)_setAutoAdjustTitle:(BOOL)arg1;
- (void)_setBackButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setBackgroundImage:(id)arg1 mini:(id)arg2;
- (void)_setBackgroundView:(id)arg1;
- (void)_setBarStyle:(int)arg1;
- (void)_setButtonBackgroundImage:(id)arg1 mini:(id)arg2 forStates:(unsigned int)arg3;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2 forState:(unsigned int)arg3;
- (void)_setButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setButtonTextShadowOffset:(struct CGSize { float x1; float x2; })arg1;
- (void)_setIsContainedInPopover:(BOOL)arg1;
- (void)_setItems:(id)arg1 transition:(int)arg2;
- (void)_setLeftView:(id)arg1 rightView:(id)arg2;
- (void)_setLeftViews:(id)arg1 rightViews:(id)arg2;
- (void)_setNeedsLayoutForce:(BOOL)arg1;
- (void)_setPressedButtonItemTextColor:(id)arg1 shadowColor:(id)arg2;
- (void)_setReversesButtonTextShadowOffsetWhenPressed:(BOOL)arg1;
- (void)_setupTopNavItem:(id)arg1 oldTopNavItem:(id)arg2;
- (BOOL)_shouldShowBackButtonForNavigationItem:(id)arg1;
- (void)_showLeftRightButtonsAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)_startBarStyleAnimation:(int)arg1 withTintColor:(id)arg2;
- (void)_startPopAnimationFromItems:(id)arg1 fromBarStyle:(int)arg2 toItems:(id)arg3 toBarStyle:(int)arg4;
- (void)_startPushAnimationFromItems:(id)arg1 fromBarStyle:(int)arg2;
- (BOOL)_subclassImplementsDrawBackgroundInRect;
- (BOOL)_subclassImplementsDrawRect;
- (unsigned int)_subviewIndexAboveBackground;
- (int)_transitionForOldItems:(id)arg1 newItems:(id)arg2;
- (void)_updateBackgroundImage;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(int)arg2 previousTintColor:(id)arg3;
- (void)_updateNavigationBarItem:(id)arg1 forStyle:(int)arg2;
- (void)_updateNavigationBarItemsForStyle:(int)arg1 previousTintColor:(id)arg2;
- (void)_updateNavigationBarItemsForStyle:(int)arg1;
- (void)_updateOpacity;
- (void)_updateTitleView;
- (unsigned int)animationDisabledCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })availableTitleArea;
- (id)backButtonViewAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)backItem;
- (id)backgroundImageForBarMetrics:(int)arg1;
- (int)barStyle;
- (id)buttonItemShadowColor;
- (id)buttonItemTextColor;
- (id)createButtonWithContents:(id)arg1 width:(float)arg2 barStyle:(int)arg3 buttonStyle:(int)arg4 isRight:(BOOL)arg5;
- (id)currentBackButton;
- (id)currentLeftView;
- (id)currentRightView;
- (void)dealloc;
- (float)defaultButtonHeight;
- (struct CGSize { float x1; float x2; })defaultSizeForOrientation:(int)arg1;
- (id)delegate;
- (void)didAddSubview:(id)arg1;
- (void)disableAnimation;
- (void)drawBackButtonBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withStyle:(int)arg2 pressed:(BOOL)arg3;
- (void)drawBackgroundInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withStyle:(int)arg2;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)enableAnimation;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)forceFullHeightInLandscape;
- (void)hideButtons;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 forEvent:(struct __GSEvent { }*)arg2;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isAnimationEnabled;
- (BOOL)isElementAccessibilityExposedToInterfaceBuilder;
- (BOOL)isLocked;
- (BOOL)isMinibar;
- (BOOL)isTranslucent;
- (id)items;
- (void)layoutSubviews;
- (void)mouseDown:(struct __GSEvent { }*)arg1;
- (void)mouseUp:(struct __GSEvent { }*)arg1;
- (id)navigationItemAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)navigationItems;
- (void)popNavigationItem;
- (id)popNavigationItemAnimated:(BOOL)arg1;
- (id)prompt;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })promptBounds;
- (id)promptView;
- (void)pushNavigationItem:(id)arg1 animated:(BOOL)arg2;
- (void)pushNavigationItem:(id)arg1;
- (void)setAccessoryView:(id)arg1 animate:(BOOL)arg2;
- (void)setAutoresizingMask:(unsigned int)arg1;
- (void)setBackgroundImage:(id)arg1 forBarMetrics:(int)arg2;
- (void)setBarStyle:(int)arg1;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setButton:(int)arg1 enabled:(BOOL)arg2;
- (void)setDelegate:(id)arg1;
- (void)setForceFullHeightInLandscape:(BOOL)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setItems:(id)arg1 animated:(BOOL)arg2;
- (void)setItems:(id)arg1;
- (void)setLocked:(BOOL)arg1;
- (void)setNavigationItems:(id)arg1;
- (void)setNeedsLayout;
- (void)setPrompt:(id)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setTintColor:(id)arg1;
- (void)setTitleAutoresizesToFit:(BOOL)arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (void)setTitleVerticalPositionAdjustment:(float)arg1 forBarMetrics:(int)arg2;
- (void)setTitleView:(id)arg1;
- (void)setTopItemAlpha:(float)arg1;
- (void)setTranslucent:(BOOL)arg1;
- (void)showBackButton:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showButtonsWithLeft:(id)arg1 right:(id)arg2 leftBack:(BOOL)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2 leftBack:(BOOL)arg3;
- (void)showButtonsWithLeftTitle:(id)arg1 rightTitle:(id)arg2;
- (void)showHideBackButtomAnimationDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3;
- (void)showLeftButton:(id)arg1 withStyle:(int)arg2 rightButton:(id)arg3 withStyle:(int)arg4;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (int)state;
- (id)tintColor;
- (BOOL)titleAutoresizesToFit;
- (id)titleTextAttributes;
- (float)titleVerticalPositionAdjustmentForBarMetrics:(int)arg1;
- (id)topItem;
- (float)topItemAlpha;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)updatePrompt;

@end
