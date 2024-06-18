@class NSArray;

@interface _PXActionStackedViewController : UIViewController {
    double _separatorHeight;
    NSArray *_separatorViews;
}

@property (readonly, copy, nonatomic) NSArray *viewControllers;

- (void)loadView;
- (void)viewWillLayoutSubviews;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (id)initWithViewControllers:(id)a0;

@end
