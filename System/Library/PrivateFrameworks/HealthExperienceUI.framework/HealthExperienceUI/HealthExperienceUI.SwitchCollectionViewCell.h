@interface HealthExperienceUI.SwitchCollectionViewCell : HealthExperienceUI.CollectionViewListDisclosureCellNonSelectable {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ switchView;
    void /* unknown type, empty encoding */ baseIdentifier;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageAccessory;
    void /* unknown type, empty encoding */ $__lazy_storage_$_switchViewAccessory;
}

@property (nonatomic) BOOL highlighted;
@property (nonatomic) BOOL selected;

- (id)initWithCoder:(id)a0;
- (BOOL)isSelected;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (BOOL)isHighlighted;
- (void)switchTapped;

@end