@class UILabel;

@interface SBHAddWidgetDetailSheetWidgetDescriptionView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (id)_titleLabelFont;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_createConstraints;
- (id)_descriptionLabelFont;
- (id)initWithTitle:(id)a0 subtitle:(id)a1;

@end
