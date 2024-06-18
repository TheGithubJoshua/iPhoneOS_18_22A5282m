@class SBHFolderZoomSettings, NSString, SBFolderController, SBFloatyFolderView, SBFFluidBehaviorSettings, SBFolderIcon, SBSearchGesture, _SBInnerFolderIconZoomAnimator, SBIconView;
@protocol SBHSearchPresenting;

@interface SBFolderIconZoomAnimator : SBScaleIconZoomAnimator <SBSearchGestureObserver, SBHSearchPresenterObserver> {
    SBFolderController *_innerFolderController;
    SBFloatyFolderView *_innerFolderView;
    _SBInnerFolderIconZoomAnimator *_innerZoomAnimator;
}

@property (retain, nonatomic) SBSearchGesture *searchGesture;
@property (retain, nonatomic) id<SBHSearchPresenting> searchPresenter;
@property (nonatomic) BOOL isAnimatingInFloatingDock;
@property (retain, nonatomic) SBHFolderZoomSettings *settings;
@property (retain, nonatomic) SBFFluidBehaviorSettings *dockAnimationSettings;
@property (readonly, nonatomic) SBFolderIcon *targetIcon;
@property (readonly, nonatomic) SBIconView *targetIconView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_zoomedFrame;
- (void)_setupMatchMoveAnimation;
- (id)targetIconView;
- (void)_cleanupAnimation;
- (void)_prepareAnimation;
- (id)_referenceFolderIconView;
- (void).cxx_destruct;
- (void)_setupCounterDockMatchMoveAnimationWithOffset:(double)a0 layer:(id)a1 additive:(BOOL)a2;
- (void)_performAnimationToFraction:(double)a0 withCentralAnimationSettings:(id)a1 delay:(double)a2 alreadyAnimating:(BOOL)a3 sharedCompletion:(id /* block */)a4;
- (void)_setupMatchMoveWithDockWithTargetIconCenter:(struct CGPoint { double x0; double x1; })a0 targetIconAnchor:(struct CGPoint { double x0; double x1; })a1;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_visuallyCompleteAnimationImmediately;
- (void)dealloc;
- (void)searchGesture:(id)a0 changedPercentComplete:(double)a1;
- (id)initWithAnimationContainer:(id)a0 innerFolderController:(id)a1 folderIcon:(id)a2;
- (void)searchPresenterWillPresentSearch:(id)a0 animated:(BOOL)a1;
- (void)searchGesture:(id)a0 startedShowing:(BOOL)a1;
- (void)_updateDockMatchMoveWithFraction:(double)a0;
- (void)_setupMatchMoveWithDock;
- (id)defaultTargetIconContainerView;
- (void)_setAnimationFraction:(double)a0;
- (BOOL)_forceSquareZoomDimension;
- (BOOL)shouldMatchMoveWithDock;

@end
