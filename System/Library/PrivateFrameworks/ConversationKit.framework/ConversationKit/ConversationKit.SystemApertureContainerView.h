@class NSString;

@interface ConversationKit.SystemApertureContainerView : UIView <SBUISystemApertureAccessoryView> {
    void /* unknown type, empty encoding */ content;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } intrinsicContentSize;
@property (nonatomic, copy) NSString *accessibilityLabel;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0 forLayoutMode:(long long)a1;

@end
