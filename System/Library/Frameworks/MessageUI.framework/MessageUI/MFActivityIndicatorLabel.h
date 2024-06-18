@class UILabel, UIActivityIndicatorView;

@interface MFActivityIndicatorLabel : UIView

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator;
@property (retain, nonatomic) UILabel *textLabel;

- (void)startAnimating;
- (void)stopAnimating;
- (id)init;
- (void)setActivityIndicator:(id)a0;
- (id)accessibilityLabel;
- (void).cxx_destruct;

@end
