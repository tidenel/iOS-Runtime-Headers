/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSTimer, UIView, UIWebDocumentView, UIWebSelection, UIWebSelectionGraph, UIWebSelectionHandle, UIWebSelectionNode, UIWebSelectionOutline, UIWebTextRangeView;

@interface UIWebSelectionView : UIView {
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    struct { 
        UIWebSelectionHandle *scrollingHandle; 
        double startTime; 
        int direction; 
        NSTimer *timer; 
    struct { 
        UIWebSelectionHandle *activeHandle; 
        struct CGPoint { 
            float x; 
            float y; 
        } handleCenterStart; 
        float handleOffset; 
    struct { 
        UIWebSelectionHandle *start; 
        UIWebSelectionHandle *end; 
        struct CGSize { 
            float width; 
            float height; 
        } startingOffset; 
        BOOL anchorAtStart; 
        struct { 
            BOOL flipPossible; 
            BOOL rectsChanged; 
            struct CGRect { 
                struct CGPoint { 
                    float x; 
                    float y; 
                } origin; 
                struct CGSize { 
                    float width; 
                    float height; 
                } size; 
            } originalSelectionRect; 
        } flipData; 
    } _autoscrollData;
    } _blockSelectionData;
    UIWebSelectionHandle *_bottom;
    BOOL _calloutBarIsHiddenBeforeRotation;
    UIView *_center;
    BOOL _creatingSelection;
    UIWebDocumentView *_documentView;
    float _growThreshold;
    UIWebSelectionHandle *_left;
    int _nestedLayoutCalls;
    UIWebSelectionOutline *_outline;
    } _rangedSelectionData;
    UIWebSelectionHandle *_right;
    BOOL _rotating;
    } _selectionFrame;
    UIWebSelectionGraph *_selectionGraph;
    int _selectionInFixedPosition;
    UIWebSelectionNode *_selectionNode;
    float _shrinkThreshold;
    UIWebTextRangeView *_textRangeView;
    UIWebSelectionHandle *_top;
}

@property(readonly) UIWebSelection * selection;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectionFrame;
@property(retain) UIWebSelectionNode * selectionNode;

- (void)_didScroll;
- (void)_subscribeToScrollNotificationsIfNecessary:(id)arg1;
- (id)activeHandle;
- (BOOL)activelyManipulatingBlockSelectionHandle;
- (BOOL)activelyManipulatingTextSelectionHandle;
- (void)animateSloppyReleaseOfHandleInText:(id)arg1 withMagnifier:(id)arg2;
- (int)autoscrollDirectionsForHandle:(id)arg1;
- (void)autoscrollTimerFired:(id)arg1;
- (void)calloutBar:(id)arg1 selectedCommand:(id)arg2;
- (BOOL)canFlip;
- (void)clearSelection;
- (void)computeExpandAndContractThresholdsForActiveHandle;
- (void)considerFlipping;
- (void)contractForActiveHandle;
- (void)dealloc;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })desiredBox;
- (void)didEndScrollingOverflow;
- (void)didEndScrollingPage;
- (void)endSelectionCreationWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)expandForActiveHandle;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fetchSelectionBoundingRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fetchSelectionBoundingTextSelectionRect;
- (id)handleWithPosition:(int)arg1;
- (id)handles;
- (void)hideControls;
- (void)hideControlsBeforeRotation;
- (void)hideCopyCallout;
- (id)hitTest:(struct CGPoint { float x1; float x2; })arg1 withEvent:(id)arg2;
- (id)initWithWebDocumentView:(id)arg1;
- (void)layoutChangedByScrolling:(BOOL)arg1;
- (id)nodeInPristineGraphAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)onAfterScrollShowingSelection:(BOOL)arg1;
- (void)onBeforeScrollHidingSelection:(BOOL)arg1;
- (void)removeFromSuperview;
- (void)resetSelection;
- (void)scaleChanged;
- (id)selection;
- (void)selectionChanged;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionFrame;
- (id)selectionNode;
- (void)setHandleCenters;
- (void)setSelectionFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 animated:(BOOL)arg2;
- (void)setSelectionFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setSelectionNode:(id)arg1;
- (void)shiftWebRangeSelectionAnimationDidStop:(id)arg1 finished:(id)arg2;
- (BOOL)shouldContractForActiveHandle;
- (BOOL)shouldExpandForActiveHandle;
- (BOOL)shouldSwitchToBlockModeForHandle:(id)arg1;
- (void)showControls;
- (void)showControlsAfterRotation;
- (void)showCopyCalloutWithAnimation:(BOOL)arg1;
- (void)startSelectionCreationWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)stopAnyAutoscrolling;
- (void)switchToBlockModeForHandle:(id)arg1;
- (void)switchToTextModeForHandle:(id)arg1;
- (id)tintView;
- (void)touchChanged:(id)arg1 forHandle:(id)arg2;
- (void)touchChanged:(id)arg1 forHandleInText:(id)arg2;
- (void)updateAutoscrollForHandle:(id)arg1;
- (void)updateForChangedLayoutWhileManipulatingBlockSelectionHandle;
- (void)updateForChangedLayoutWhileManipulatingTextSelectionHandle;
- (void)updateFrameAndHandlesWithAnimation:(BOOL)arg1;
- (BOOL)updateRectForCalloutBar:(id)arg1 inWindow:(id)arg2;
- (void)updateSelectionCreationWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)updateSelectionRects;
- (void)updateTextRangeViewSelectionRects;
- (void)willStartScrollingOverflow;
- (void)willStartScrollingPage;

@end
