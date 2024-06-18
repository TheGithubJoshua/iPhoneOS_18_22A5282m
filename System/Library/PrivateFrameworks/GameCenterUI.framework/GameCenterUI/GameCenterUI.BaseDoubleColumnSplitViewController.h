@interface GameCenterUI.BaseDoubleColumnSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {
    void /* unknown type, empty encoding */ secondaryOverrideTraitCollection;
    void /* unknown type, empty encoding */ $__lazy_storage_$_backgroundView;
    void /* unknown type, empty encoding */ secondaryContainerViewController;
    void /* unknown type, empty encoding */ cachedSecondarySource;
}

- (id)initWithCoder:(id)a0;
- (void)showDetailViewController:(id)a0 sender:(id)a1;
- (id)init;
- (id)initWithStyle:(long long)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)setViewController:(id)a0 forColumn:(long long)a1;
- (void).cxx_destruct;
- (long long)splitViewController:(id)a0 displayModeForExpandingToProposedDisplayMode:(long long)a1;
- (long long)splitViewController:(id)a0 topColumnForCollapsingToProposedTopColumn:(long long)a1;

@end
