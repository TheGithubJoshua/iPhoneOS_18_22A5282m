@class NSArray, NSString, CCUIContinuousSliderView, UIViewPropertyAnimator, BrightnessSystemClient;
@protocol CCUIDisplayModuleViewControllerDelegate;

@interface CCUIDisplayModuleViewController : UIViewController <CCUIGroupRendering, CCUIContentModuleContentViewController> {
    struct BKSDisplayBrightnessTransaction { } *_brightnessTransaction;
    BrightnessSystemClient *_brightnessSystemClient;
    BOOL _expanded;
}

@property (retain, nonatomic) CCUIContinuousSliderView *sliderView;
@property (weak, nonatomic) id<CCUIDisplayModuleViewControllerDelegate> delegate;
@property (readonly, nonatomic) float currentBrightness;
@property (readonly, nonatomic, getter=isGroupRenderingRequired) BOOL groupRenderingRequired;
@property (readonly, nonatomic) NSArray *punchOutRenderingViews;
@property (readonly, nonatomic) NSArray *punchOutRootLayers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) double preferredExpandedContentHeight;
@property (readonly, nonatomic) double preferredExpandedContentWidth;
@property (readonly, nonatomic) double preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;

- (void)_sliderEditingDidBegin:(id)a0;
- (void)loadView;
- (BOOL)_canAdjustBrightness;
- (void)setGlyphPackageDescription:(id)a0;
- (void)viewWillLayoutSubviews;
- (float)_backlightLevel;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_noteScreenBrightnessDidChange:(id)a0;
- (void)_sliderValueDidChange:(id)a0;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (id)viewForTouchContinuation;
- (void).cxx_destruct;
- (void)_sliderEditingDidEnd:(id)a0;
- (BOOL)shouldExpandModuleOnTouch:(id)a0;
- (void)_updateBrightnessControlAvailability;
- (BOOL)_canShowWhileLocked;
- (void)_updateWithCurrentBrightnessAnimated:(BOOL)a0;
- (void)willTransitionToExpandedContentMode:(BOOL)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_setBacklightLevel:(float)a0;
- (void)setGlyphState:(id)a0;

@end
