@class NSArray, UILabel;

@interface SeymourUI.RemoteBrowsingDiscoveryViewController : UIViewController <UIGestureRecognizerDelegate, UICollectionViewDelegateFlowLayout> {
    void /* unknown type, empty encoding */ layout;
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ currentlyConnectingCell;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ indicatorView;
    void /* unknown type, empty encoding */ promptLabel;
    void /* unknown type, empty encoding */ promptIndicatorView;
    void /* unknown type, empty encoding */ menuGestureRecognizer;
    void /* unknown type, empty encoding */ playPauseGestureRecognizer;
}

@property (nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) UILabel *accessibilityTitleLabel;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveEvent:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)handleKohnahmiCodeSequence;
- (void)handleMenuButtonTapped;

@end
