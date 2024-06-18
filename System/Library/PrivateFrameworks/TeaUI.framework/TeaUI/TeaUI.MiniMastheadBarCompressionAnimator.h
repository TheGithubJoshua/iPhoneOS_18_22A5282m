@interface TeaUI.MiniMastheadBarCompressionAnimator : NSObject <TUBarCompressionAnimating> {
    void /* unknown type, empty encoding */ navigationBar;
}

@property (nonatomic) void /* unknown type, empty encoding */ topOffset;
@property (nonatomic, readonly) BOOL shouldCompressAtTop;
@property (nonatomic, readonly) BOOL shouldCloseGapOnScroll;

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
