@class NSArray, CNPhotoPickerTrapView;

@interface CNPhotoPickerNavigationViewController : CNPortraitOnlyNavigationController

@property (retain, nonatomic) CNPhotoPickerTrapView *trapOverlayView;
@property (retain, nonatomic) NSArray *trapOverlayConstraints;
@property (nonatomic) struct CGSize { double width; double height; } previousSize;
@property (nonatomic) BOOL disablingRotation;
@property (nonatomic) BOOL isShowingKeyboard;
@property (nonatomic) BOOL allowRotation;

- (void)keyboardWillHide:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)keyboardWillShow:(id)a0;
- (id)initWithRootViewController:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)beginDisablingAutorotation;
- (void)endDisablingAutorotation;
- (void)endDisablingAutorotationIfNeeded;
- (BOOL)isDisplayingTrapView;
- (void)setupTrapOverlayView;
- (BOOL)shouldDisplayTrapOverlayView;
- (void)updateTrapOverlayViewIfNecessaryWithCoordinator:(id)a0;

@end
