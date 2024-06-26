@class NSString, UIActionSheet, UIAlertView, CNContactPickerViewController;

@interface MSTonePurchaseContinuation : SUPurchaseContinuation <CNContactPickerDelegate, UIActionSheetDelegate, UIAlertViewDelegate> {
    UIActionSheet *_actionSheet;
    UIAlertView *_alertView;
    CNContactPickerViewController *_contactPicker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;
- (void)start;
- (void)dealloc;
- (void)actionSheet:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)alertView:(id)a0 didDismissWithButtonIndex:(long long)a1;
- (void)alertViewCancel:(id)a0;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (void)contactPickerDidCancel:(id)a0;
- (id)initWithPurchase:(id)a0;
- (void)actionSheetCancel:(id)a0;
- (void)_dismissContactPicker;
- (id)_copyAllowedToneStyles;
- (void)_destroyActionSheet;
- (void)_destroyAlertView;
- (void)_pickAssigneeToneStyle;
- (void)_showPeoplePicker;

@end
