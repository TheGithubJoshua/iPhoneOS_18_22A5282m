@class NSString, UILabel, UIActivityIndicatorView;

@interface CNFRegLoadingView : UIView {
    UILabel *_label;
    UIActivityIndicatorView *_spinner;
}

@property (copy, nonatomic) NSString *message;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setMessage:(id)a0;
- (id)message;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
