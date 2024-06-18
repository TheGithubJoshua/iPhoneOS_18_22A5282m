@class NSMutableDictionary, NSMutableSet, NSMapTable;
@protocol PULoadingStatusManagerDelegate;

@interface PULoadingStatusManager : NSObject {
    struct { BOOL respondsToDidUpdateLoadingStatusForItem; } _delegateFlags;
}

@property (nonatomic, setter=_setUpdateScheduled:) BOOL _isUpdateScheduled;
@property (readonly, nonatomic) NSMutableSet *_invalidLoadingStatusItems;
@property (readonly, nonatomic) NSMapTable *_loadOperationTrackingIDsByItem;
@property (readonly, nonatomic) NSMapTable *_loadingStatusByItem;
@property (readonly, nonatomic) NSMutableDictionary *_itemByLoadOperationTrackingID;
@property (readonly, nonatomic) NSMutableDictionary *_loadingStatusByLoadOperationTrackingID;
@property (weak, nonatomic) id<PULoadingStatusManagerDelegate> delegate;

- (void)didUpdateLoadOperationWithTrackingID:(id)a0 withProgress:(double)a1;
- (void)_updateIfNeeded;
- (id)init;
- (BOOL)_needsUpdate;
- (void)_setNeedsUpdate;
- (void)didCancelLoadOperationWithTrackingID:(id)a0;
- (void)_updateLoadingStatusForItemIfNeeded:(id)a0;
- (void)didCompleteLoadOperationWithTrackingID:(id)a0 withSuccess:(BOOL)a1 error:(id)a2;
- (id)loadingStatusForItem:(id)a0;
- (void)_updateLoadingStatusForItemsIfNeeded;
- (void).cxx_destruct;
- (void)_setLoadingStatus:(id)a0 forItem:(id)a1;
- (id)willBeginLoadOperationWithItem:(id)a0;
- (void)_updateNowIfNeeded;
- (void)_setLoadingStatus:(id)a0 forLoadOperationTrackingID:(id)a1;
- (void)_invalidateLoadingStatusForItem:(id)a0;
- (void)_updateLoadingStatusForItem:(id)a0;
- (void)_resetLoadingStatusForItemIfAppropriate:(id)a0;

@end
