@class NSString;

@interface AMSUICommonView : UIView

@property (nonatomic) unsigned long long edgesPropagatingSafeAreaInsetsToSubviews;
@property (readonly, nonatomic) NSString *accessibilityElementLabel;

- (id)initWithCoder:(id)a0;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToSubviews;
- (id)init;
- (void)_setup;
- (id)tintColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
