@class NSString, UINavigationController, UIPrinterPickerController, UIWindow, UIPopoverController, UIViewController, PKPrinter, UIPrinterBrowserViewController;

@interface UIPrinterPickerViewController : UIViewController <UIPrinterBrowserOwner, UINavigationControllerDelegate> {
    UIViewController *_parentController;
    UIPrinterPickerController *_printerPickerController;
    UINavigationController *_navigationController;
    UIPrinterBrowserViewController *_printerBrowserViewController;
    UIViewController *_originalViewControllerInNav;
    id _originalNavControllerDelegate;
    UIPopoverController *_poverController;
    UIWindow *_window;
    BOOL _dismissed;
    BOOL _animated;
    BOOL _observingRotation;
    BOOL _parentHasNoPopover;
}

@property (retain, nonatomic) PKPrinter *printer;
@property BOOL userSelectedPrinter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAnimated:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)navigationController:(id)a0 didShowViewController:(id)a1 animated:(BOOL)a2;
- (void)dealloc;
- (void)popoverControllerDidDismissPopover:(id)a0;
- (BOOL)filtersPrinters;
- (void)_keyWindowWillRotate:(id)a0;
- (void)_presentInParentAnimated:(BOOL)a0;
- (void)_presentWindow;
- (void)cancelPrinting;
- (void)dismissPrinterPickerAnimated:(BOOL)a0;
- (id)initWithPrinterPickerController:(id)a0 inParentController:(id)a1;
- (void)presentPrinterPickerPanelAnimated:(BOOL)a0 hostingScene:(id)a1;
- (void)presentPrinterPickerPanelFromBarButtonItem:(id)a0 animated:(BOOL)a1;
- (void)presentPrinterPickerPanelFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1 animated:(BOOL)a2;
- (void)printerBrowserViewDidDisappear;
- (BOOL)shouldShowPrinter:(id)a0;

@end
