@class SBWorkspaceTransitionRequest;

@interface SBDismissOverlaysAnimationController : SBUIAnimationController {
    SBWorkspaceTransitionRequest *_transitionRequest;
}

@property (readonly, nonatomic) unsigned long long dismissOptions;

+ (unsigned long long)_overlaysToDismissForOptions:(unsigned long long)a0;
+ (BOOL)willDismissOverlaysForDismissOptions:(unsigned long long)a0;

- (id)animationSettings;
- (BOOL)_canBeInterrupted;
- (id)initWithTransitionContextProvider:(id)a0;
- (void).cxx_destruct;
- (void)_startAnimation;
- (id)initWithTransitionContextProvider:(id)a0 options:(unsigned long long)a1;

@end
