@class UIStackView, HFItem, NSArray, UIImage, UIImageView, HUMosaicLayoutGeometry, HUCCInfoMosaicGridView, UIVisualEffectView, UILabel;

@interface HUGridHomeCell : HUGridCell {
    HFItem *_item;
}

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UIImage *homeImage;
@property (retain, nonatomic) UIStackView *verticalStackView;
@property (retain, nonatomic) UILabel *primaryLabel;
@property (retain, nonatomic) UIVisualEffectView *secondaryLabelEffectView;
@property (retain, nonatomic) UILabel *secondaryLabel;
@property (retain, nonatomic) NSArray *cellConstraints;
@property (retain, nonatomic) HUCCInfoMosaicGridView *infoView;
@property (nonatomic) BOOL shouldShowHomeName;
@property (nonatomic) BOOL shouldShowAsEmptyHome;
@property (retain, nonatomic) HUMosaicLayoutGeometry *mosaicLayoutGeometry;

+ (BOOL)requiresConstraintBasedLayout;

- (void)setItem:(id)a0;
- (void)_invalidateConstraints;
- (void)updateConstraints;
- (id)item;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupCell;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updatePrimaryLabel;
- (id)cellLayoutOptions;
- (void)layoutOptionsDidChange;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
