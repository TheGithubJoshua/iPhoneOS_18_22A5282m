@class NSMutableArray, NSMutableDictionary;

@interface CCUIStatusUpdateQueue : NSObject {
    NSMutableArray *_queuedIdentifiers;
    NSMutableDictionary *_latestUpdateByIdentifier;
}

- (id)init;
- (id)dequeueNextStatusUpdate;
- (void).cxx_destruct;
- (void)enqueueStatusUpdate:(id)a0 forIdentifier:(id)a1;
- (void)removeAllStatusUpdates;

@end
