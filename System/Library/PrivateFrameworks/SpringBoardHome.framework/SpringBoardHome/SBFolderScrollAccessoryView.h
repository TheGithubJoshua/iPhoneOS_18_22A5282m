@class UIPageControl, _UIPortalView, SBFFluidBehaviorSettings, SBFolder, UIViewFloatAnimatableProperty, SBIconListPageControl, UIView;

@interface SBFolderScrollAccessoryView : UIView

@property (retain, nonatomic) UIPageControl *layoutPageControl;
@property (retain, nonatomic) _UIPortalView *pageControlPortalView;
@property (readonly, nonatomic) UIViewFloatAnimatableProperty *modeAnimatableProperty;
@property (readonly, nonatomic) SBFFluidBehaviorSettings *pageControlFadeInSettings;
@property (readonly, nonatomic) SBFFluidBehaviorSettings *auxiliaryViewFadeInSettings;
@property (readonly, nonatomic) SBFolder *folder;
@property (readonly, nonatomic) SBIconListPageControl *pageControl;
@property (retain, nonatomic) UIView *auxiliaryView;
@property (retain, nonatomic) UIView *backgroundView;
@property (nonatomic) long long mode;

- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFolder:(id)a0 pageControl:(id)a1;
- (long long)_numberOfPagesForWidth:(double)a0 maxPageCount:(unsigned long long)a1;
- (void)_configurePageControlPortaling;
- (void)_setUpAnimation;
- (void)_applyMatchingAnimationsForBackgroundMatchingContentView:(id)a0 backgroundView:(id)a1;
- (void).cxx_destruct;
- (void)_clearMatchingAnimationsForAuxiliaryView;
- (void)_clearMatchingAnimationsForBackground;
- (void)_applyMatchingAnimationsForAuxiliaryViewMatchingContentView:(id)a0;
- (void)dealloc;
- (void)_updateForModePropertyChanged;
- (void)layoutSubviews;
- (void)_applyCurrentMode;
- (id)_layoutPageControlMatchingPageControl:(id)a0;

@end
