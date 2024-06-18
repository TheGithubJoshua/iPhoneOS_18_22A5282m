@interface PaperKit.ToolPickerController : NSObject <UIPopoverPresentationControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_textToolListViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shapeButtonListViewController;
}

- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (id)init;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)toolPickerWillShowNotification:(id)a0;
- (void)toolPickerDidHideNotification:(id)a0;

@end
