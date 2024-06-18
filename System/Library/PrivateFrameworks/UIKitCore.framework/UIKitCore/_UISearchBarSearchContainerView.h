@class _UISearchBarSearchContainerLayout;

@interface _UISearchBarSearchContainerView : UIView {
    BOOL _needsLayoutWhenThawed;
}

@property (retain, nonatomic) _UISearchBarSearchContainerLayout *layout;
@property (nonatomic) BOOL frozenLayout;

- (void)setNeedsLayout;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)description;
- (void)layoutSubviews;
- (BOOL)_isKnownUISearchBarComponentContainer;

@end
