/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class <UITextInputDelegate>, <UITextInputTokenizer>, NSDictionary, UIColor, UIImage, UIResponder<UITextSelection>, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UITextSelectionView, UIView, UIView<UITextSelectingContent>;

@interface UIDefaultKeyboardInput : UIView <UIKeyboardInput> {
    UITextInputTraits *m_traits;
}

@property BOOL acceptsEmoji;
@property BOOL acceptsFloatingKeyboard;
@property BOOL acceptsSplitKeyboard;
@property int autocapitalizationType;
@property int autocorrectionType;
@property(readonly) UITextPosition * beginningOfDocument;
@property(readonly) UIView<UITextSelectingContent> * content;
@property BOOL contentsIsSingleValue;
@property BOOL displaySecureTextUsingPlainText;
@property(getter=isEditable,readonly) BOOL editable;
@property(getter=isEditing,readonly) BOOL editing;
@property int emptyContentReturnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property(readonly) UITextPosition * endOfDocument;
@property BOOL forceEnableDictation;
@property <UITextInputDelegate> * inputDelegate;
@property(retain) UIColor * insertionPointColor;
@property unsigned int insertionPointWidth;
@property(readonly) UITextInteractionAssistant * interactionAssistant;
@property int keyboardAppearance;
@property int keyboardType;
@property BOOL learnsCorrections;
@property(readonly) UITextRange * markedTextRange;
@property(copy) NSDictionary * markedTextStyle;
@property BOOL returnKeyGoesToNextResponder;
@property int returnKeyType;
@property(getter=isRichText) BOOL richText;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property(copy) UITextRange * selectedTextRange;
@property int selectionAffinity;
@property(retain) UIColor * selectionBarColor;
@property(retain) UIImage * selectionDragDotImage;
@property int selectionGranularity;
@property(retain) UIColor * selectionHighlightColor;
@property(readonly) UITextSelectionView * selectionView;
@property int shortcutConversionType;
@property int spellCheckingType;
@property BOOL suppressReturnKeyStyling;
@property(readonly) UIResponder<UITextSelection> * textDocument;
@property(readonly) UIView * textInputView;
@property int textLoupeVisibility;
@property int textSelectionBehavior;
@property id textSuggestionDelegate;
@property struct __CFCharacterSet { }* textTrimmingSet;
@property(readonly) <UITextInputTokenizer> * tokenizer;

- (struct _NSRange { unsigned int x1; unsigned int x2; })_markedTextNSRange;
- (BOOL)acceptsEmoji;
- (int)baseWritingDirectionForPosition:(id)arg1 inDirection:(int)arg2;
- (BOOL)becomesEditableWithGestures;
- (void)beginSelectionChange;
- (id)beginningOfDocument;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })caretRectForPosition:(id)arg1;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterBeforeCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (id)characterRangeAtPoint:(struct CGPoint { float x1; float x2; })arg1;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(int)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint { float x1; float x2; })arg1;
- (int)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)confirmMarkedText:(id)arg1;
- (id)content;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })convertCaretRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (id)delegate;
- (void)deleteBackward;
- (void)detachInteractionAssistant;
- (void)detachSelectionView;
- (id)endOfDocument;
- (void)endSelectionChange;
- (void)expandSelectionToStartOfWordContainingCaretSelection;
- (void)extendCurrentSelection:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })firstRectForRange:(id)arg1;
- (id)fontForCaretSelection;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasContent;
- (BOOL)hasSelection;
- (BOOL)hasText;
- (id)inputDelegate;
- (void)insertText:(id)arg1;
- (id)interactionAssistant;
- (BOOL)isPosition:(id)arg1 atBoundary:(int)arg2 inDirection:(int)arg3;
- (BOOL)isPosition:(id)arg1 withinTextUnit:(int)arg2 inDirection:(int)arg3;
- (BOOL)isSecure;
- (BOOL)isShowingPlaceholder;
- (id)markedText;
- (id)markedTextRange;
- (id)markedTextStyle;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)moveBackward:(unsigned int)arg1;
- (void)moveForward:(unsigned int)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (int)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)positionFromPosition:(id)arg1 inDirection:(int)arg2 offset:(int)arg3;
- (id)positionFromPosition:(id)arg1 offset:(int)arg2;
- (id)positionFromPosition:(id)arg1 toBoundary:(int)arg2 inDirection:(int)arg3;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(int)arg2;
- (id)previousUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(int)arg2 inDirection:(int)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectContainingCaretSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)rectsForNSRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (id)rectsForRange:(id)arg1;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (void)replaceRangeWithText:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 replacementText:(id)arg2;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)selectAll;
- (id)selectedDOMRange;
- (id)selectedTextRange;
- (BOOL)selectionAtDocumentStart;
- (BOOL)selectionAtWordStart;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionClipRect;
- (struct _NSRange { unsigned int x1; unsigned int x2; })selectionRange;
- (int)selectionState;
- (id)selectionView;
- (void)setAcceptsEmoji:(BOOL)arg1;
- (void)setBaseWritingDirection:(int)arg1 forRange:(id)arg2;
- (void)setBecomesEditableWithGestures:(BOOL)arg1;
- (void)setInputDelegate:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (void)setMarkedText:(id)arg1;
- (void)setMarkedTextStyle:(id)arg1;
- (void)setSecure:(BOOL)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(BOOL)arg2;
- (void)setSelectedTextRange:(id)arg1;
- (void)setSelectionWithPoint:(struct CGPoint { float x1; float x2; })arg1;
- (void)setText:(id)arg1;
- (void)setupPlaceholderTextIfNeeded;
- (void)takeTraitsFrom:(id)arg1;
- (id)text;
- (id)textColorForCaretSelection;
- (id)textDocument;
- (id)textInRange:(id)arg1;
- (id)textInputTraits;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)tokenizer;
- (void)unmarkText;
- (void)updateSelection;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleBounds;
- (id)wordContainingCaretSelection;
- (int)wordOffsetInRange:(id)arg1;
- (id)wordRangeContainingCaretSelection;

@end
