/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIColor, UIImage;

@interface UITextInputTraits : NSObject <UITextInputTraits, UITextInputTraits_Private, NSCopying> {
    unsigned int keyboardType : 8;
    unsigned int keyboardAppearance : 8;
    BOOL acceptsEmoji;
    BOOL acceptsFloatingKeyboard;
    BOOL acceptsSplitKeyboard;
    int autocapitalizationType;
    int autocorrectionType;
    BOOL contentsIsSingleValue;
    BOOL displaySecureTextUsingPlainText;
    int emptyContentReturnKeyType;
    BOOL enablesReturnKeyAutomatically;
    BOOL forceEnableDictation;
    UIColor *insertionPointColor;
    unsigned int insertionPointWidth;
    BOOL learnsCorrections;
    BOOL returnKeyGoesToNextResponder;
    int returnKeyType;
    BOOL richText;
    BOOL secureTextEntry;
    UIColor *selectionBarColor;
    UIImage *selectionDragDotImage;
    UIColor *selectionHighlightColor;
    int shortcutConversionType;
    int spellCheckingType;
    BOOL suppressReturnKeyStyling;
    int textLoupeVisibility;
    int textSelectionBehavior;
    id textSuggestionDelegate;
    struct __CFCharacterSet { } *textTrimmingSet;
}

@property BOOL acceptsEmoji;
@property BOOL acceptsFloatingKeyboard;
@property BOOL acceptsSplitKeyboard;
@property int autocapitalizationType;
@property int autocorrectionType;
@property BOOL contentsIsSingleValue;
@property BOOL displaySecureTextUsingPlainText;
@property int emptyContentReturnKeyType;
@property BOOL enablesReturnKeyAutomatically;
@property BOOL forceEnableDictation;
@property(retain) UIColor * insertionPointColor;
@property unsigned int insertionPointWidth;
@property int keyboardAppearance;
@property int keyboardType;
@property BOOL learnsCorrections;
@property BOOL returnKeyGoesToNextResponder;
@property int returnKeyType;
@property(getter=isRichText) BOOL richText;
@property(getter=isSecureTextEntry) BOOL secureTextEntry;
@property(retain) UIColor * selectionBarColor;
@property(retain) UIImage * selectionDragDotImage;
@property(retain) UIColor * selectionHighlightColor;
@property int shortcutConversionType;
@property int spellCheckingType;
@property BOOL suppressReturnKeyStyling;
@property int textLoupeVisibility;
@property int textSelectionBehavior;
@property id textSuggestionDelegate;
@property struct __CFCharacterSet { }* textTrimmingSet;

+ (id)defaultTextInputTraits;
+ (BOOL)keyboardTypeRequiresASCIICapable:(int)arg1;
+ (id)traitsByAdoptingTraits:(id)arg1;

- (BOOL)acceptsEmoji;
- (BOOL)acceptsFloatingKeyboard;
- (BOOL)acceptsSplitKeyboard;
- (int)autocapitalizationType;
- (int)autocorrectionType;
- (BOOL)contentsIsSingleValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)displaySecureTextUsingPlainText;
- (int)emptyContentReturnKeyType;
- (BOOL)enablesReturnKeyAutomatically;
- (BOOL)forceEnableDictation;
- (id)init;
- (id)insertionPointColor;
- (unsigned int)insertionPointWidth;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRichText;
- (BOOL)isSecureTextEntry;
- (int)keyboardAppearance;
- (int)keyboardType;
- (BOOL)learnsCorrections;
- (BOOL)returnKeyGoesToNextResponder;
- (int)returnKeyType;
- (id)selectionBarColor;
- (id)selectionDragDotImage;
- (id)selectionHighlightColor;
- (void)setAcceptsEmoji:(BOOL)arg1;
- (void)setAcceptsFloatingKeyboard:(BOOL)arg1;
- (void)setAcceptsSplitKeyboard:(BOOL)arg1;
- (void)setAutocapitalizationType:(int)arg1;
- (void)setAutocorrectionType:(int)arg1;
- (void)setContentsIsSingleValue:(BOOL)arg1;
- (void)setDisplaySecureTextUsingPlainText:(BOOL)arg1;
- (void)setEmptyContentReturnKeyType:(int)arg1;
- (void)setEnablesReturnKeyAutomatically:(BOOL)arg1;
- (void)setForceEnableDictation:(BOOL)arg1;
- (void)setInsertionPointColor:(id)arg1;
- (void)setInsertionPointWidth:(unsigned int)arg1;
- (void)setKeyboardAppearance:(int)arg1;
- (void)setKeyboardType:(int)arg1;
- (void)setLearnsCorrections:(BOOL)arg1;
- (void)setReturnKeyGoesToNextResponder:(BOOL)arg1;
- (void)setReturnKeyType:(int)arg1;
- (void)setRichText:(BOOL)arg1;
- (void)setSecureTextEntry:(BOOL)arg1;
- (void)setSelectionBarColor:(id)arg1;
- (void)setSelectionDragDotImage:(id)arg1;
- (void)setSelectionHighlightColor:(id)arg1;
- (void)setShortcutConversionType:(int)arg1;
- (void)setSpellCheckingType:(int)arg1;
- (void)setSuppressReturnKeyStyling:(BOOL)arg1;
- (void)setTextLoupeVisibility:(int)arg1;
- (void)setTextSelectionBehavior:(int)arg1;
- (void)setTextSuggestionDelegate:(id)arg1;
- (void)setTextTrimmingSet:(struct __CFCharacterSet { }*)arg1;
- (void)setToDefaultValues;
- (void)setToSecureValues;
- (int)shortcutConversionType;
- (int)spellCheckingType;
- (BOOL)suppressReturnKeyStyling;
- (void)takeTraitsFrom:(id)arg1;
- (int)textLoupeVisibility;
- (int)textSelectionBehavior;
- (id)textSuggestionDelegate;
- (struct __CFCharacterSet { }*)textTrimmingSet;

@end
