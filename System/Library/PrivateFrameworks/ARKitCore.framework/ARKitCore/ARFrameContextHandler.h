@class NSArray, NSMutableOrderedSet, ARFrameContext, NSMutableSet;

@interface ARFrameContextHandler : NSObject {
    NSMutableOrderedSet *_inFlightContexts;
    ARFrameContext *_mostRecentInFlightContext;
    NSMutableOrderedSet *_anchorsToAdd;
    NSMutableOrderedSet *_anchorsToRemove;
    NSMutableOrderedSet *_anchorsToStopTracking;
    BOOL _sessionTransformReset;
    NSMutableSet *_collaborationDatas;
}

@property (nonatomic) struct { void /* unknown type, empty encoding */ columns[4]; } sessionTransform;
@property (readonly, nonatomic) BOOL sessionTransformUpdated;
@property (readonly, nonatomic) NSArray *anchorsToAdd;

- (id)init;
- (void)removeAnchor:(id)a0;
- (void)clearInFlightContextsReapplyingChanges;
- (void).cxx_destruct;
- (void)addAnchor:(id)a0;
- (void)addCollaborationData:(id)a0;
- (id)createdContextByConsumingPendingChanges;
- (void)markFrameContextProcessed:(id)a0;
- (void)resetSessionTransform;
- (void)clearAddedAnchors;
- (void)stopTrackingAnchors:(id)a0;

@end
