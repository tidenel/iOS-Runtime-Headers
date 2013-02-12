/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSData, NSDate, NSDictionary, NSMutableArray, RemoteUITableViewCell, UISwitch, UIWebView, WebContainerView;

@interface RUITableViewRow : RUIElement <UIPickerViewDelegate, UITextFieldDelegate> {
    float _cachedHeight;
    NSData *_data;
    NSDate *_date;
    NSDate *_dateMax;
    NSDate *_dateMin;
    id _delegate;
    NSDictionary *_deleteAction;
    BOOL _rowInvalid;
    NSMutableArray *_selectOptions;
    int _selectedRow;
    UISwitch *_switchControl;
    RemoteUITableViewCell *_tableCell;
    WebContainerView *_webContainerView;
    UIWebView *_webView;
}

@property(retain) NSData * data;
@property(retain) NSDate * date;
@property(retain) NSDate * dateMax;
@property(retain) NSDate * dateMin;
@property(retain) NSDictionary * deleteAction;
@property BOOL rowInvalid;
@property(readonly) int selectedRow;

+ (id)_monthAndDayFormatter;
+ (void)resetLocale;

- (void)_activate;
- (id)_dateFormatter;
- (void)_datePickerChanged:(id)arg1;
- (void)clearCachedHeight;
- (id)data;
- (id)date;
- (id)dateMax;
- (id)dateMin;
- (void)dealloc;
- (id)deleteAction;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3;
- (void)populatePostbackDictionary:(id)arg1;
- (float)rowHeightWithMax:(float)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (BOOL)rowInvalid;
- (id)selectOptions;
- (int)selectedRow;
- (void)setData:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setDateMax:(id)arg1;
- (void)setDateMin:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDeleteAction:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setRowInvalid:(BOOL)arg1;
- (BOOL)supportsAutomaticSelection;
- (id)tableCell;
- (Class)tableCellClass;
- (int)tableCellStyle;
- (BOOL)textFieldShouldReturn:(id)arg1;

@end
