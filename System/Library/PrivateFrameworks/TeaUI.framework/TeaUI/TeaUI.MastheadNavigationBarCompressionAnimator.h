@interface TeaUI.MastheadNavigationBarCompressionAnimator : NSObject <TUBarCompressionAnimating> {
    void /* unknown type, empty encoding */ barCompressionAnimator;
    void /* unknown type, empty encoding */ scrollView;
}

@property (nonatomic, readonly) BOOL shouldCloseGapOnScroll;
@property (nonatomic, readonly) BOOL shouldCompressAtTop;
@property (nonatomic, readonly) double topOffset;

- (id)init;
- (void)scrollViewIsAtTop:(BOOL)a0 offset:(double)a1;
- (void)updateWithPercentage:(double)a0;
- (BOOL)animationShouldBeginForScrollView:(id)a0 currentlyFullyCompressed:(BOOL)a1;
- (void).cxx_destruct;
- (void)reloadWithTraitCollection:(id)a0;
- (void)prepareForUpdates;
- (double)minimumBarHeightForTraitCollection:(id)a0;
- (double)maximumBarHeightForTraitCollection:(id)a0;

@end
