@class NSArray, NSString, _UIPassthroughScrollInteraction, UIView;

@interface _UIContextMenuContainerView : UIView <_UIPassthroughScrollInteractionDelegate> {
    BOOL _lastHitTestWasPassedThroughToInteraction;
    BOOL _inPassthroughViewHitTest;
    _UIPassthroughScrollInteraction *_passthroughInteraction;
}

@property (nonatomic) BOOL dismissesInstantly;
@property (weak, nonatomic) UIView *contentWrapperView;
@property (copy, nonatomic) id /* block */ dismissalHandler;
@property (copy, nonatomic) id /* block */ subtreeTraitPropagationHandler;
@property (copy, nonatomic) NSArray *passthroughViews;
@property (nonatomic) BOOL passthroughInteractionTouchEatingDisabledForSearchSuggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (BOOL)passthroughScrollInteractionDidRecognize:(id)a0;
- (BOOL)isTransparentFocusItem;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)_traitCollectionDidChangeOnSubtreeInternal:(const struct _UITraitCollectionChangeDescription { id x0; id x1; BOOL x2; struct _UITraitCollectionTraitChanges { BOOL x0; BOOL x1; BOOL x2; BOOL x3; BOOL x4; BOOL x5; BOOL x6; BOOL x7; BOOL x8; BOOL x9; } x3; } *)a0;
- (BOOL)passthroughScrollInteraction:(id)a0 shouldInteractAtLocation:(struct CGPoint { double x0; double x1; })a1 withEvent:(id)a2;
- (void)willMoveToWindow:(id)a0;
- (void)_attemptDismiss:(BOOL)a0;

@end
