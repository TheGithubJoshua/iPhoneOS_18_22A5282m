@class NSString, BSUIAnimationFactory, UIView;

@interface PBUIWallpaperFloatingLayerAssertion : BSSimpleAssertion <PBUIWallpaperAnimatedInvalidating> {
    BSUIAnimationFactory *_invalidationAnimationFactory;
    UIView *_containerView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (void)invalidateWithAnimationFactory:(id)a0;

@end
