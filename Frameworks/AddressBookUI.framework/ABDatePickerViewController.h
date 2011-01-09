/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class UIDatePicker, <ABDatePickerViewControllerDismissDelegate>;



@interface ABDatePickerViewController : UIViewController 
{
    void *_context;
    UIDatePicker *_datePicker;
    <ABDatePickerViewControllerDismissDelegate> *_dismissDelegate;
}

@property <ABDatePickerViewControllerDismissDelegate> *dismissDelegate;
@property(retain) UIDatePicker *datePicker;
@property void *context;

+ (struct CGSize { float x1; float x2; })datePickerSize;

- (void)setContext:(void*)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)loadView;
- (void)viewDidLoad;
- (void*)context;
- (void)dealloc;
- (id)dismissDelegate;
- (void)setDatePicker:(id)arg1;
- (id)datePicker;
- (void)setDismissDelegate:(id)arg1;
- (float)ab_heightToFitForViewInPopoverView;

@end