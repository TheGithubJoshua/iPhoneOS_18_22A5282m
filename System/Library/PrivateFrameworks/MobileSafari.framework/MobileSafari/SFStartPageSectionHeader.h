@class UIStackView, NSString, NSArray, SFBannerCell, NSLayoutConstraint, WBSStartPageBanner, SFStartPageSectionHeaderTitleView, UIVisualEffectView;

@interface SFStartPageSectionHeader : UICollectionReusableView {
    SFBannerCell *_bannerView;
    NSLayoutConstraint *_bannerViewBottomConstraint;
    UIStackView *_buttonStackView;
    NSLayoutConstraint *_titleBottomConstraint;
    SFStartPageSectionHeaderTitleView *_titleView;
    UIVisualEffectView *_separatorView;
    NSLayoutConstraint *_stackLeadingConstraint;
    NSLayoutConstraint *_stackCenterXConstraint;
}

@property (class, readonly, copy, nonatomic) NSString *reuseIdentifier;

@property (readonly, copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) WBSStartPageBanner *banner;
@property (nonatomic) double bottomGap;

- (id)initWithCoder:(id)a0;
- (void)updateViewsDependingOnCustomTraits;
- (void)_createSeparatorViewIfNeeded;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)setActions:(id)a0 expandsModally:(BOOL)a1 withSize:(long long)a2;
- (id)_disclosureButtonForLayout;
- (void)configureUsingSection:(id)a0 visualStyleProvider:(id)a1 resolvingActionsUsingBlock:(id /* block */)a2;
- (void)layoutSubviews;

@end
