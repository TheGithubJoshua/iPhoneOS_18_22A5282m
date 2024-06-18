@class SKUIStarRatingControl;

@interface SKUIReviewInAppRatingControlViewController : UIViewController

@property (retain, nonatomic) SKUIStarRatingControl *ratingControl;

- (id)initWithCoder:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)commonInit;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_repeatedTemplateImageForImage:(id)a0;

@end
