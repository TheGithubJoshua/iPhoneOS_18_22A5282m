@class NSString;
@protocol DBSDisplayZoomSelectionControllerDelegate;

@interface DBSDisplayZoomSelectionListController : PSListController <DBSDisplayZoomTableViewCellDelegate>

@property (nonatomic) unsigned long long selectedDisplayZoomOption;
@property (retain) id<DBSDisplayZoomSelectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)userDidTapDone:(id)a0;
- (void)_updateNavigationButtonStateWithNewOption:(unsigned long long)a0;
- (void)_userDidConfirmDisplayZoomModeWithSpecifier:(id)a0;
- (id)confirmationDictForCurrentSelectedScale;
- (void)displayZoomTableViewCell:(id)a0 userDidTapOnDisplayZoomOption:(unsigned long long)a1;
- (unsigned long long)displayZoomTableViewCellCurrentlySelectedDisplayZoomOption:(id)a0;
- (id)supportedDisplayZoomOptions;
- (void)updateNavigationButtonStateWithCurrentState;
- (void)userDidTapCancel:(id)a0;

@end
