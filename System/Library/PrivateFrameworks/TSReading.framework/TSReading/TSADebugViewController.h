@class UIViewController, TSADebugTableViewController;

@interface TSADebugViewController : TSKPopoverBasedViewController {
    UIViewController *_delegate;
    TSADebugTableViewController *_debugTableViewController;
}

- (void)loadView;
- (id)initWithDelegate:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)hideIt:(id)a0;
- (void)addItemWithTitle:(id)a0 target:(id)a1 action:(SEL)a2;
- (void)showIt:(id)a0;
- (void)toggleVisible:(id)a0;

@end
