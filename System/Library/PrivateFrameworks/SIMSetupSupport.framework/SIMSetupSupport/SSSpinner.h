@class UILabel, UIActivityIndicatorView;

@interface SSSpinner : UIStackView

@property (retain) UIActivityIndicatorView *activityIndicator;
@property (retain) UILabel *label;
@property (readonly, nonatomic, getter=isAnimating) BOOL animating;

- (void)startAnimating;
- (void)stopAnimating;
- (void).cxx_destruct;
- (id)initWithText:(id)a0;
- (void)updateText:(id)a0;

@end
