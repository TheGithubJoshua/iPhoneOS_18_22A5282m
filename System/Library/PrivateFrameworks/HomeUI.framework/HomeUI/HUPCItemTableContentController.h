@class HUItemTableViewController, NSString, NSLayoutConstraint;

@interface HUPCItemTableContentController : PRXCardContentViewController <HUPreloadableViewController>

@property (retain, nonatomic) HUItemTableViewController *itemTableViewController;
@property (retain, nonatomic) NSLayoutConstraint *itemTableViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (id)hu_preloadContent;
- (id)initWithTitle:(id)a0 detailText:(id)a1 itemTableViewController:(id)a2;

@end
