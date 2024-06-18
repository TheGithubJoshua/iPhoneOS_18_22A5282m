@class NSString, SKUIEditorialCellLayout;

@interface SKUIEditorialCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView> {
    BOOL _layoutNeedsLayout;
}

@property (readonly, nonatomic) SKUIEditorialCellLayout *layout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setCellLayoutNeedsLayout;

@end