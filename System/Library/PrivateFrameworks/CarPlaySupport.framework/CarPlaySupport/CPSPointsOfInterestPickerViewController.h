@class NSString, NSArray, CPSActionButton, CPSPointsOfInterestTableView, UILabel, CPSPointsOfInterestPickerInfoView, UIViewPropertyAnimator;
@protocol UIFocusEnvironment, CPSPointsOfInterestPickerDelegate;

@interface CPSPointsOfInterestPickerViewController : CPSBaseEntityContentViewController <UITableViewDataSource, UITableViewDelegate, CPSButtonDelegate, CPSPointsOfInterestPickerInfoDelegate, CPSActionButtonLayoutDelegate, CPSLinearFocusProviding>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) CPSPointsOfInterestTableView *tableView;
@property (retain, nonatomic) CPSActionButton *cancelButton;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (nonatomic) double scrollHeight;
@property (retain, nonatomic) CPSPointsOfInterestPickerInfoView *infoView;
@property (nonatomic) unsigned long long pickerState;
@property (retain, nonatomic) UIViewPropertyAnimator *animator;
@property (retain, nonatomic) id<UIFocusEnvironment> requestedFocusItem;
@property (weak, nonatomic) id<CPSPointsOfInterestPickerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL useRightHandDriveFocusGuide;

- (struct CGSize { double x0; double x1; })buttonSize;
- (void)loadView;
- (void)completeTransition:(BOOL)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)updateViewConstraints;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)preferredFocusEnvironments;
- (void)cancelButtonPressed:(id)a0;
- (id)selectedItem;
- (void)setSelectedItem:(id)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didUpdateFocusInContext:(id)a1 withAnimationCoordinator:(id)a2;
- (void)resetLayoutConstraints;
- (void)setupLayoutConstraints;
- (void)setupViews;
- (id)template;
- (void)didSelectButton:(id)a0;
- (id)pointsOfInterest;
- (struct CGSize { double x0; double x1; })buttonGlyphSize;
- (void)modelDidSelect:(id)a0;
- (id)_linearFocusItems;
- (void)_updateFocusedItem:(id)a0;
- (void)actionButtonPressed:(id)a0 forModel:(id)a1;
- (void)didUpdateEntity:(id)a0;
- (id)initWithEntity:(id)a0 resourceProvider:(id)a1;
- (void)modelDidDeselect:(id)a0;
- (void)transitionToPrimaryCard;
- (void)transitionToSecondaryCard;

@end
