@interface _UITableViewHeaderFooterContentView : UIView

- (id)_headerFooterView;
- (void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setBackgroundColor:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_concreteDefaultLayoutMargins;
- (void)_updateConstraintsIfNeededWithViewForVariableChangeNotifications:(id)a0;

@end
