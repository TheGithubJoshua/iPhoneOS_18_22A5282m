@class UIColor, NSString, RUILinkLabel, UIImageView, UILabel;

@interface RUIHeaderView : UIView <RUIHeader> {
    UILabel *_navTitleLabel;
    UILabel *_navSubHeaderLabel;
    UILabel *_headerLabel;
    RUILinkLabel *_detailHeaderLabel;
    UILabel *_subHeaderLabel;
    UIImageView *_iconView;
    int _imageAlignment;
    BOOL _isFirstSection;
    BOOL _customIconSize;
    BOOL _hasLargeIcon;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } margins;
@property (nonatomic) double subHeaderTopMarginValue;
@property (nonatomic) double imageLabelPadding;
@property (copy, nonatomic) UIColor *headerLabelColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAttributes:(id)a0;
- (id)iconImage;
- (void).cxx_destruct;
- (void)setIconImage:(id)a0;
- (void)layoutSubviews;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (id)headerLabel;
- (BOOL)_hasIcon;
- (id)subHeaderLabel;
- (void)setImageAlignment:(int)a0;
- (id)detailHeaderLabel;
- (double)headerHeightForWidth:(double)a0 inView:(id)a1;
- (void)setDetailText:(id)a0 attributes:(id)a1;
- (void)setSectionIsFirst:(BOOL)a0;
- (void)setSubHeaderText:(id)a0 attributes:(id)a1;
- (void)setSubHeaderTopMargin:(double)a0;
- (void)setText:(id)a0 attributes:(id)a1;
- (void)setNavTitle:(id)a0;
- (void)setHeaderAlignment:(long long)a0;
- (void)setHeaderMargin:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)setHeaderColor:(id)a0;
- (double)_headerOffsetInView:(id)a0;
- (id)navSubHeaderLabel;
- (id)navTitleLabel;
- (void)setDetailHeaderColor:(id)a0;
- (void)setNavSubHeaderTitle:(id)a0;
- (void)setSubHeaderAlignment:(long long)a0;
- (void)setSubHeaderColor:(id)a0;

@end
