/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

@class UITableView;



@interface CalendarEventAvailabilityEditItemView : CalendarEventEditItemView <UITableViewDelegate, UITableViewDataSource>
{
    NSInteger _availability;
    UITableView *_table;
    NSInteger _selectedItem;
}


- (void)absorbValueFromSerializedValue:(id)arg1;
- (id)navigationTitle;
- (void)_selectRow:(NSInteger)arg1;
- (NSInteger)availability;
- (void)setAvailability:(NSInteger)arg1;
- (NSInteger)tableView:(id)arg1 numberOfRowsInSection:(NSInteger)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;

@end