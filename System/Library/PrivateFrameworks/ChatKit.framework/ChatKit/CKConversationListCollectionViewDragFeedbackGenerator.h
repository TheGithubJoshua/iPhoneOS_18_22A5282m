@interface CKConversationListCollectionViewDragFeedbackGenerator : _UIDragSnappingFeedbackGenerator

- (void)draggedObjectLanded;
- (void)dropTargetUpdated;
- (void)positionUpdated;
- (void)objectSnapped;

@end
