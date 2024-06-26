@class UILabel, NSLayoutConstraint;
@protocol PXPeopleSummaryDelegate;

@interface PXPeopleConfirmationSummaryViewController : UIViewController

@property (retain) NSLayoutConstraint *labelSpacingConstraint;
@property (retain) UILabel *summaryLabel;
@property (weak) id<PXPeopleSummaryDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateDynamicTypeSpacing;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;

@end
