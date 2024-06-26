@class NSLayoutConstraint, NSArray, UIView;

@interface HUPCFullCenterContentViewController : PRXCardContentViewController

@property (retain, nonatomic) UIView *centerContentView;
@property (retain, nonatomic) NSLayoutConstraint *contentViewOptionalHeightAnchor;
@property (nonatomic) double contentViewMaxHeight;
@property (retain, nonatomic) NSArray *floatingConstraintGroup;
@property (retain, nonatomic) NSArray *pinnedConstraintGroup;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setCenteredContentView:(id)a0;
- (void)insertCenterContentView;
- (void)recalculateLayoutForTraitCollectionChange;

@end
