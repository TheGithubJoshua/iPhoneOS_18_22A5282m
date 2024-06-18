@class UILabel;

@interface _UIRecentsAccessoryDefaultView : UIView

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subheadLabel;

- (id)init;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)_updateLabelTextColors;

@end
