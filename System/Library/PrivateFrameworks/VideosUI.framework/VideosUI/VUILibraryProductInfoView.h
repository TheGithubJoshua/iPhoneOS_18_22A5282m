@class NSArray, UIView;

@interface VUILibraryProductInfoView : UIView

@property (readonly, nonatomic) long long maxLineCount;
@property (readonly, nonatomic) double interitemSpacing;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } padding;
@property (copy, nonatomic) NSArray *groupedInfos;
@property (copy, nonatomic) NSArray *normalizedGroupedInfos;
@property (readonly, nonatomic) double lineSpacing;
@property (retain, nonatomic) UIView *headerView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } headerMargin;
@property (retain, nonatomic) UIView *footerView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } footerMargin;
@property (copy, nonatomic) NSArray *infos;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (unsigned long long)_columnCount;
- (id)_getNormalizedGroupedInfos;
- (void)_layouCellContentView:(id)a0 inCellBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (double)_maxWidthForGroupInfos:(id)a0;
- (double)_sectionInfoWidth;

@end
