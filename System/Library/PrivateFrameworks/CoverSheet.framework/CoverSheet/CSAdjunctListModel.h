@class NSString, NSMutableDictionary, NSMutableSet;
@protocol CSAdjunctListModelDelegate;

@interface CSAdjunctListModel : NSObject <CSItemDestination> {
    NSMutableDictionary *_identifiersToItems;
    NSMutableSet *_pendingItems;
    BOOL _suspended;
}

@property (weak, nonatomic) id<CSAdjunctListModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)removeItemForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)_reallyAddOrUpdateItem:(id)a0;
- (void)_replayPendingChanges;
- (void)suspendItemHandling;
- (void)addOrUpdateItem:(id)a0;
- (void)resumeItemHandling;

@end
