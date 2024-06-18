@interface ConversationKit.SystemApertureInCallLeadingView : UIView <SBUISystemApertureAccessoryView> {
    void /* unknown type, empty encoding */ icon;
    void /* unknown type, empty encoding */ iconView;
    void /* unknown type, empty encoding */ durationView;
    void /* unknown type, empty encoding */ interItemSpacing;
}

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forLayoutMode:(long long)a1;

@end
