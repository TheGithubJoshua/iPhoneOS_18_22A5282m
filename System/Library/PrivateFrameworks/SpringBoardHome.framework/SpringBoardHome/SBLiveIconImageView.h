@interface SBLiveIconImageView : SBIconImageView

- (void)setIcon:(id)a0 location:(id)a1 animated:(BOOL)a2;
- (id)snapshot;
- (void)updateAnimatingState;
- (void)updateImageAnimated:(BOOL)a0;
- (void)setPaused:(BOOL)a0;
- (void)prepareForReuse;
- (BOOL)isAnimationAllowed;
- (void)updateUnanimated;

@end
