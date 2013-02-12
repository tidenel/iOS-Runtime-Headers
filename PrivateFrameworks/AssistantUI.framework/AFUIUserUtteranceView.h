/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class AFUIUtteranceCorrectionTextView, UIImageView;

@interface AFUIUserUtteranceView : AFUIUtteranceView {
    UIImageView *_beginQuoteImage;
    BOOL _editable;
    AFUIUtteranceCorrectionTextView *_editableText;
    UIImageView *_endQuoteImage;
}

@property BOOL editable;
@property int textAlignment;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_adjustTextFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContentFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_bubbleImageFrame;
- (void)_notifyTextDidChange;
- (void)_notifyTextDidFinishCorrecting;
- (void)_notifyTextWillBeginCorrecting;
- (id)_textView;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_textViewFrameForLayoutFromFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)canResignFirstResponder;
- (void)dealloc;
- (BOOL)editable;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isFirstResponder;
- (void)layoutSubviews;
- (BOOL)resignFirstResponder;
- (void)setCorrectablePhrases:(id)arg1 correctionIdentifier:(id)arg2;
- (void)setEditable:(BOOL)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (id)text;
- (int)textAlignment;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (BOOL)textViewShouldBeginEditing:(id)arg1;
- (void)utteranceTextDidBecomeFirstResponder:(id)arg1;
- (void)utteranceTextDidResignFirstResponder:(id)arg1;

@end
