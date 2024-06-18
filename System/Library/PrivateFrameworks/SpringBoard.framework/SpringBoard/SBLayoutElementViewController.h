@class FBSDisplayIdentity, SBLayoutState, NSString, SBSDisplayLayoutElement, UIView, SBLayoutElement, SBOrientationTransformWrapperView;
@protocol BSInvalidatable;

@interface SBLayoutElementViewController : UIViewController <SBAppPlatterDragSourceViewProviding> {
    SBOrientationTransformWrapperView *_contentWrapperView;
    SBSDisplayLayoutElement *_displayLayoutElement;
    id<BSInvalidatable> _displayLayoutElementAssertion;
    BOOL _isViewVisible;
    BOOL _isTransitioningVisibility;
}

@property (readonly, nonatomic) UIView *_contentContainerView;
@property (readonly, nonatomic) BOOL _shouldDisplayLayoutElementBecomeActive;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity;
@property (readonly, nonatomic) SBLayoutElement *layoutElement;
@property (readonly, nonatomic) SBLayoutState *layoutState;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } referenceFrame;
@property (readonly, nonatomic) unsigned long long supportedContentInterfaceOrientations;
@property (nonatomic) long long contentWrapperInterfaceOrientation;
@property (readonly, nonatomic) BOOL supportsReuse;
@property (nonatomic, getter=isDragging) BOOL dragging;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)animationControllerForTransitionRequest:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_sbWindowScene;
- (void)loadView;
- (id)containerViewForBlurContentView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initialRimShadowFilters;
- (id)sourceView;
- (id)initialCornerRadiusConfiguration;
- (void)invalidate;
- (void).cxx_destruct;
- (struct SBDragPreviewShadowParameters { double x0; double x1; struct CGSize { double x0; double x1; } x2; })initialRimShadowParameters;
- (void)prepareForReuse;
- (void)dealloc;
- (struct SBDragPreviewShadowParameters { double x0; double x1; struct CGSize { double x0; double x1; } x2; })initialDiffuseShadowParameters;
- (id)initialDiffuseShadowFilters;
- (id)initWithDisplayIdentity:(id)a0;
- (id)_newDisplayLayoutElementForEntity:(id)a0;
- (void)_updateDisplayLayoutElementVisibility;
- (void)_updateDisplayLayoutElementWithBuilder:(id /* block */)a0;
- (void)configureWithWorkspaceEntity:(id)a0 forLayoutElement:(id)a1 layoutState:(id)a2 referenceFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;
- (void)didEndTransitionToVisible:(BOOL)a0;
- (id)mainWorkspaceApplicationSceneLayoutElementViewController;
- (void)willBeginTransitionToVisible:(BOOL)a0;

@end
