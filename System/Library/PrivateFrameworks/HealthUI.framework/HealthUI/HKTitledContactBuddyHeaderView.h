@class NSLayoutConstraint;

@interface HKTitledContactBuddyHeaderView : HKTitledBuddyHeaderView {
    NSLayoutConstraint *_titleBaselineConstraint;
}

- (void)_updateForCurrentSizeCategory;
- (void)traitCollectionDidChange:(id)a0;
- (double)bottomPadding;
- (void).cxx_destruct;
- (id)initWithTopInset:(double)a0 parentViewController:(id)a1;

@end
