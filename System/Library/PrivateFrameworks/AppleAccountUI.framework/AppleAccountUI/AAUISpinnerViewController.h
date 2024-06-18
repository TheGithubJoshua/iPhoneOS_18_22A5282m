@class UILabel, UIActivityIndicatorView;

@interface AAUISpinnerViewController : UIViewController {
    UIActivityIndicatorView *_spinnerView;
}

@property (retain, nonatomic) UILabel *label;
@property (nonatomic, getter=isSpinning) BOOL spinning;

- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;

@end
