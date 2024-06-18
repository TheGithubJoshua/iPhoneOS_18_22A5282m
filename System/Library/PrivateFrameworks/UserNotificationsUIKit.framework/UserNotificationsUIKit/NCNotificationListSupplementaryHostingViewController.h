@class UIColor, NSString, PLPlatterView, NCNotificationListSupplementaryViewConfiguration, UIViewController;
@protocol NCNotificationListSupplementaryHostingViewControllerDelegate;

@interface NCNotificationListSupplementaryHostingViewController : UIViewController <NCNotificationListSupplementaryHostingViewDelegate, BSDescriptionProviding, NCMaterialDisplaying, NCNotificationListDimmable, NCNotificationListPresentable, PLContentSizeCategoryAdjusting>

@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) NCNotificationListSupplementaryViewConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier;
@property (readonly, nonatomic) UIViewController *hostedViewController;
@property (nonatomic, getter=isHostedViewControllerUserInteractionEnabled) BOOL hostedViewControllerUserInteractionEnabled;
@property (weak, nonatomic) id<NCNotificationListSupplementaryHostingViewControllerDelegate> delegate;
@property (readonly, nonatomic) PLPlatterView *platterView;
@property (nonatomic, getter=isContentVisible) BOOL contentVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long materialRecipe;
@property (copy, nonatomic) UIColor *materialTintColor;
@property (copy, nonatomic) NSString *materialGroupNameBase;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;

- (long long)overrideUserInterfaceStyle;
- (void)_showAuxiliaryOptionsView:(BOOL)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)loadView;
- (id)_logDescription;
- (void)_configureHostingViewAnimated:(BOOL)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (id)_hostingView;
- (id)succinctDescription;
- (BOOL)_useDefaultLookForColor:(id)a0 materialRecipe:(long long)a1;
- (id)initWithHostedViewController:(id)a0 sectionIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (BOOL)_canShowWhileLocked;
- (void)_preferredContentSizeDidChangeForChildViewController:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)supplementaryHostingViewWasTapped:(id)a0;
- (void)configureStackDimmingForTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setConfiguration:(id)a0 animated:(BOOL)a1;
- (void)_configureAuxiliaryViewAnimated:(BOOL)a0;
- (BOOL)adjustForContentSizeCategoryChange;

@end
