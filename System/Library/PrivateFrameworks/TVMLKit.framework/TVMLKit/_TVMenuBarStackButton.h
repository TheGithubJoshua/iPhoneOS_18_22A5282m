@class NSDictionary;

@interface _TVMenuBarStackButton : UIButton

@property (retain, nonatomic) NSDictionary *tabBarItem;

- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_updateSelectionViewForState:(unsigned long long)a0;
- (void)_configureSubviews;
- (void)_setSelectedOrHighlighted:(BOOL)a0;
- (void)_updateImageEdgeInsets;

@end
