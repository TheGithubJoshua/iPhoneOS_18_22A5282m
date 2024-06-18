@class NSString, _TtC12GameCenterUI16DynamicTypeLabel;

@interface GameCenterUI.ActivityFeedSharedView : UIView {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ playerGroupView;
    void /* unknown type, empty encoding */ playerGroupSubartworkView;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ componentData;
}

@property (nonatomic, copy) NSString *accessibilityLabel;
@property (nonatomic, readonly) _TtC12GameCenterUI16DynamicTypeLabel *accessibilityTitleLabel;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end