@class EKEvent;

@interface DDEKDayViewController : EKDayViewController

@property (retain) EKEvent *dd_event;

- (void)viewDidLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)dd_update_scroll;
- (void).cxx_destruct;

@end
