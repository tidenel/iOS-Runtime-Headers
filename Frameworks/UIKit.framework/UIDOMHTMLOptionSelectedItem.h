/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class DOMHTMLOptionElement;

@interface UIDOMHTMLOptionSelectedItem : NSObject <UIWebSelectedItemPrivate> {
    DOMHTMLOptionElement *_node;
    BOOL _selected;
}

@property(retain) DOMHTMLOptionElement *_node;

- (id)_node;
- (void)dealloc;
- (id)initWithHTMLOptionNode:(id)arg1;
- (id)node;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (void)set_node:(id)arg1;
- (void)unselect;

@end