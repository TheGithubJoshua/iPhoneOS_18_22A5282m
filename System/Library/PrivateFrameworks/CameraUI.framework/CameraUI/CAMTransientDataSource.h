@class NSMutableDictionary, NSSet, NSHashTable, NSString, NSMutableArray;

@interface CAMTransientDataSource : NSObject <PUTransientDataSource>

@property (readonly, nonatomic) NSHashTable *_observers;
@property (readonly, nonatomic) NSMutableArray *_assetUUIDs;
@property (readonly, nonatomic) NSMutableDictionary *_assetsByUUID;
@property (readonly, nonatomic) NSMutableDictionary *_representativeAssetsByBurstIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_enqueuedBurstAssetUUIDByBurstIdentifier;
@property (readonly, nonatomic) NSMutableDictionary *_enqueuedBurstConvertiblesByAssetUUID;
@property (nonatomic, setter=_setNestedPerformChanges:) long long _nestedPerformChanges;
@property (nonatomic, setter=_setPendingChangeNotifications:) long long _pendingChangeNotifications;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) NSSet *existingBurstIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)uuids;
- (void)unregisterChangeObserver:(id)a0;
- (void)registerChangeObserver:(id)a0;
- (id)transientAssetMapping;
- (id)init;
- (void)performChanges:(id /* block */)a0;
- (void)removeAssetWithUUID:(id)a0;
- (void)processPendingBurstAssets;
- (BOOL)_removeAssetWithUUID:(id)a0;
- (id)existingRepresentativeAssetForBurstIdentifier:(id)a0;
- (void)updateAssetWithConvertible:(id)a0;
- (void)removeRepresentativeAssetForBurstIdentifier:(id)a0;
- (void)_notifyObserversOfDataSourceChange;
- (id)insertAssetWithConvertible:(id)a0;
- (void)enqueuePendingBurstAssetWithConvertible:(id)a0;
- (void).cxx_destruct;
- (void)removeAllAssets;
- (id)existingAssetUUIDs;
- (id)existingAssetForUUID:(id)a0;
- (id)transientBurstMapping;

@end
