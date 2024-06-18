@class MKMapAttribution, UISegmentedControl, UIView, UIButton;
@protocol FMFMapOptionsViewControllerDelegate;

@interface FMFMapOptionsViewController : UIViewController

@property (retain, nonatomic) UIButton *mapAttributionButton;
@property (retain, nonatomic) UIView *topTapView;
@property (retain, nonatomic) UISegmentedControl *segmentedControl;
@property (retain, nonatomic) UIView *bottomWhitePane;
@property (retain, nonatomic) MKMapAttribution *mapAttribution;
@property (weak, nonatomic) id<FMFMapOptionsViewControllerDelegate> delegate;

- (id)init;
- (void)awakeFromNib;
- (void)viewDidLoad;
- (void)_dismiss:(id)a0;
- (void).cxx_destruct;
- (void)segmentedControlChanged:(id)a0;
- (void)attributionButtonPressed:(id)a0;
- (void)openInMaps:(id)a0;
- (struct CGSize { double x0; double x1; })paneSize;

@end
