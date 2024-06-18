@class _UIDragDestinationControllerSessionState, _UIDragDestinationControllerDropProposalState, CADisplayLink, _UIDragDestinationControllerReorderingState, UIDropInteraction, UICollectionViewDropProposal, NSString, UICollectionView, NSIndexPath;
@protocol _UICollectionViewDragDestinationControllerDelegate, UIDropSession;

@interface _UICollectionViewDragDestinationController : NSObject <UIDropInteractionDelegate_Private, _UICollectionViewShadowUpdatesRebaseApplicable>

@property (weak, nonatomic) UICollectionView *collectionView;
@property (weak, nonatomic) UIDropInteraction *dropInteraction;
@property (weak, nonatomic) id<_UICollectionViewDragDestinationControllerDelegate> delegate;
@property (retain, nonatomic) CADisplayLink *reorderDisplayLink;
@property (retain, nonatomic) _UIDragDestinationControllerSessionState *sessionState;
@property (retain, nonatomic) _UIDragDestinationControllerReorderingState *reorderingState;
@property (retain, nonatomic) _UIDragDestinationControllerDropProposalState *dropProposalState;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL supportsLocalSessionReordering;
@property (readonly, nonatomic) NSIndexPath *currentIndexPath;
@property (readonly, nonatomic) UICollectionViewDropProposal *currentDropProposal;
@property (readonly, nonatomic) id<UIDropSession> currentDropSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)controllerForCollectionView:(id)a0 delegate:(id)a1;

- (void)dragSourceSelectedItemCountDidChangeWithCount:(long long)a0;
- (BOOL)_hasGapLargeEnoughToRequireDropActionCallForCurrentItemAttributes:(id)a0 proposedNextItemAttributes:(id)a1;
- (void)_cancelInteractiveReorderingIfNeeded;
- (void)dropInteraction:(id)a0 item:(id)a1 willAnimateDropWithAnimator:(id)a2;
- (void)dropInteraction:(id)a0 concludeDrop:(id)a1;
- (id)_computeNextItemAttributesStartingFromItemAttributes:(id)a0 withCurrentDragLocation:(struct CGPoint { double x0; double x1; })a1;
- (long long)_dropInteraction:(id)a0 dataOwnerForSession:(id)a1;
- (BOOL)_isLocalInteractiveMove;
- (BOOL)_shouldQueryDropActionForIndexPath:(id)a0;
- (void)_configureInteraction;
- (void)_commitCurrentInteractiveReordering;
- (id)_queryClientForPreviewParamtersForItemAtIndexPath:(id)a0;
- (id)initWithCollectionView:(id)a0 delegate:(id)a1;
- (id)_dropDelegateActual;
- (void)deactivate;
- (void)_updateDropProposalByQueryingClientIfNeeded:(id)a0 indicatorLayoutAttributes:(id)a1;
- (void)dropInteraction:(id)a0 sessionDidEnd:(id)a1;
- (void).cxx_destruct;
- (id)dropInteraction:(id)a0 previewForDroppingItem:(id)a1 withDefault:(id)a2;
- (id)dropInteraction:(id)a0 sessionDidUpdate:(id)a1;
- (void)dropWasCancelled;
- (id)_dragDestinationDelegateActual;
- (id)_dragAndDropController;
- (BOOL)_isMultiItemSource;
- (void)_resumeReorderingDisplayLink;
- (void)_cancelCurrentInteractiveReorder;
- (id)_dropDelegateProxy;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (id)_effectiveDropProposalForProposal:(id)a0;
- (void)dealloc;
- (void)_endInteractiveReorderingIfNeeded;
- (void)_commitCurrentDragAndDropSession;
- (void)dropInteraction:(id)a0 performDrop:(id)a1;
- (void)_reorderingDisplayLinkDidTick;
- (void)applyingRebasingUpdatesWithUpdateMap:(id)a0;
- (BOOL)_shouldPerformMovementForProposal:(id)a0;
- (id)_dragDestinationDelegateProxy;
- (void)dropInteraction:(id)a0 sessionDidEnter:(id)a1;
- (BOOL)hasPerformedReordering;
- (void)_pauseReorderingDisplayLink;
- (void)_configureReorderingDisplayLinkIfNeeded;
- (void)dropInteraction:(id)a0 sessionDidExit:(id)a1;

@end
