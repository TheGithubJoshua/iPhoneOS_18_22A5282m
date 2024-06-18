@class NSString, LAContext, _SFAccountPickerTableViewController, _ASIncomingCallObserver;

@interface SFAccountPickerViewController : UINavigationController <_SFAccountPickerTableViewControllerDelegate> {
    id /* block */ _completionHandler;
    _SFAccountPickerTableViewController *_accountPickerTableViewController;
    _ASIncomingCallObserver *_callObserver;
}

@property (retain, nonatomic) LAContext *authenticatedContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_dismiss;
- (void)dealloc;
- (void)accountPickerTableViewController:(id)a0 didPickSavedAccounts:(id)a1;
- (void)accountPickerTableViewControllerDidCancel:(id)a0;
- (id)initWithConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
