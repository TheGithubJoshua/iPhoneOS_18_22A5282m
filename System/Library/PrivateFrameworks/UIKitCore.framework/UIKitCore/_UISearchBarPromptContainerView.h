@class UILabel;

@interface _UISearchBarPromptContainerView : UIView

@property (nonatomic) long long barMetrics;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInset;
@property (retain, nonatomic) UILabel *promptLabel;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)description;
- (void)layoutSubviews;
- (BOOL)_isKnownUISearchBarComponentContainer;
- (BOOL)useMini;

@end
