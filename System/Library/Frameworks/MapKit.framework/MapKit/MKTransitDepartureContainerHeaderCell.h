@class MKTransitDepartureContainerHeaderViewModel, UILayoutGuide, UIImageView, NSLayoutConstraint, _MKUILabel, MKTransitInfoLabelView;

@interface MKTransitDepartureContainerHeaderCell : MKCustomSeparatorCell {
    MKTransitInfoLabelView *_containerArtworkView;
    _MKUILabel *_containerTitleLabel;
    UIImageView *_incidentImageView;
    UILayoutGuide *_contentLayoutGuide;
    NSLayoutConstraint *_artworkToTitleLabelHorizontalSpacingConstraint;
}

@property (retain, nonatomic) MKTransitDepartureContainerHeaderViewModel *viewModel;

- (void)_commonInit;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (void)_updateAppearance;

@end
