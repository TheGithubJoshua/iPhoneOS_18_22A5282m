@interface SeymourUI.PhoneSessionLandscapeSummaryViewController : UIViewController {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ contentSummaryView;
    void /* unknown type, empty encoding */ stringBuilder;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ scrollViewSizingView;
    void /* unknown type, empty encoding */ leadingStackView;
    void /* unknown type, empty encoding */ gridView;
    void /* unknown type, empty encoding */ trailingStackView;
    void /* unknown type, empty encoding */ doneButton;
    void /* unknown type, empty encoding */ shareButton;
    void /* unknown type, empty encoding */ cooldownButton;
    void /* unknown type, empty encoding */ ttrButton;
    void /* unknown type, empty encoding */ activityRingsView;
    void /* unknown type, empty encoding */ activityRingsToScrollViewBottomConstraint;
    void /* unknown type, empty encoding */ burnBarView;
    void /* unknown type, empty encoding */ burnBarToContentSummaryLeadingConstraint;
    void /* unknown type, empty encoding */ burnBarToActivityRingsTopConstraint;
    void /* unknown type, empty encoding */ burnBarToActivityRingsLeadingConstraint;
    void /* unknown type, empty encoding */ burnBarToGridViewTopConstraint;
    void /* unknown type, empty encoding */ burnBarToScrollViewBottomConstraint;
    void /* unknown type, empty encoding */ burnBarConstraints;
    void /* unknown type, empty encoding */ gridViewHeight;
    void /* unknown type, empty encoding */ gridViewWidth;
    void /* unknown type, empty encoding */ gridViewTopSpacing;
    void /* unknown type, empty encoding */ summary;
    void /* unknown type, empty encoding */ additionalMetadata;
}

- (void)traitCollectionDidChange:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateViewConstraints;

@end
