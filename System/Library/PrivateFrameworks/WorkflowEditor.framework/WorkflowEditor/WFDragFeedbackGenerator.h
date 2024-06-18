@class _UIDragSnappingFeedbackGenerator;

@interface WFDragFeedbackGenerator : NSObject

@property (nonatomic) long long activeDragSessions;
@property (retain, nonatomic) _UIDragSnappingFeedbackGenerator *feedbackGenerator;

- (void)userInteractionStarted;
- (void)userInteractionEnded;
- (id)init;
- (id)initWithCollectionView:(id)a0;
- (void)userInteractionCancelled;
- (void)draggedObjectLifted;
- (void).cxx_destruct;
- (void)draggedObjectLanded;
- (void)dropTargetUpdated;
- (void)positionUpdated;
- (void)objectSnapped;
- (void)draggingStarted;
- (void)performFeedbackWithDelay:(double)a0 insideBlock:(id /* block */)a1;
- (void)draggingCancelled;
- (void)draggingItemDropped;
- (void)draggingItemSnapped;
- (void)draggingPositionUpdated;

@end
