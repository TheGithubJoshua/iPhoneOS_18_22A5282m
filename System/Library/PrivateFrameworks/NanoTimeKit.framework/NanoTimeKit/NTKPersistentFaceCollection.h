@class NSString, NSXPCConnection, NSArray, NSUUID, NSNumber, NSMutableArray;

@interface NTKPersistentFaceCollection : NTKFaceCollection <NTKFaceObserver, NTKCollectionClient> {
    BOOL _hasLoaded;
    NSXPCConnection *_connection;
    BOOL _registrationNeeded;
    NSNumber *_seqId;
    NSArray *_referenceOrderedUUIDs;
    NSUUID *_referenceSelectedUUID;
    BOOL _suppressingFaceObserverCallbacks;
    BOOL _updatesFromDaemonSuspended;
    NSMutableArray *_updatesFromDaemonEnqueuedWhileSuspended;
    NSString *_updateSuspensionIdentifier;
    BOOL _isLibraryCollection;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_fromDaemon_updateFaceForUUID:(id)a0 withResourceDirectory:(id)a1;
- (void)_handleFlushCompleteForIdentifier:(id)a0;
- (void)_performOrEnqueueUpdateOfType:(long long)a0 forFaceUUID:(id)a1 block:(id /* block */)a2;
- (void)flushCompleteForIdentifier:(id)a0;
- (void)_notifyLoaded;
- (void)addFaceInstanceDescriptor:(id)a0 forUUID:(id)a1 seqId:(id)a2;
- (void)loadFullCollectionWithOrderedUUIDs:(id)a0 selectedUUID:(id)a1 facesDescriptorsByUUID:(id)a2 seqId:(id)a3 completion:(id /* block */)a4;
- (void)updateFaceForUUID:(id)a0 withResourceDirectory:(id)a1 seqId:(id)a2 completion:(id /* block */)a3;
- (void)_pruneEnqueuedUpdatesMadeObsoleteByNewUpdate:(id)a0;
- (void)_fromDaemon_removeFaceForUUID:(id)a0;
- (void)faceResourceDirectoryDidChange:(id)a0;
- (void)_didAddFace:(id)a0 withUUID:(id)a1 atIndex:(unsigned long long)a2;
- (void)_sendToDaemonAddedFace:(id)a0 forUUID:(id)a1;
- (void)_sendToDaemonReset;
- (void)_fromDaemon_updateFaceForUUID:(id)a0 withConfiguration:(id)a1;
- (BOOL)hasLoaded;
- (void)_handleConnectionInterrupted;
- (void)faceConfigurationDidChange:(id)a0;
- (id)initWithCollectionIdentifier:(id)a0 deviceUUID:(id)a1;
- (void).cxx_destruct;
- (void)_sendToDaemonFlushWithIdentifier:(id)a0;
- (void)_sendToDaemonUpdatedConfigurationForFace:(id)a0 withUUID:(id)a1;
- (id)_serverProxy;
- (void)faceUpgradeOccurred:(id)a0;
- (void)_sendToDaemonRemovedFaceForUUID:(id)a0;
- (void)removeFaceForUUID:(id)a0 seqId:(id)a1 completion:(id /* block */)a2;
- (void)_sendToDaemonUpgradeForFace:(id)a0 withUUID:(id)a1;
- (void)resumeUpdatesFromDaemon;
- (void)_didMoveFace:(id)a0 withUUID:(id)a1 toIndex:(unsigned long long)a2;
- (void)_sendToDaemonOrderedUUIDs;
- (void)_performSuppressingFaceObserverCallbacks:(id /* block */)a0;
- (void)dealloc;
- (void)_notifyReset;
- (void)_fromDaemon_addFace:(id)a0 forUUID:(id)a1;
- (void)updateOrderedFaceUUIDs:(id)a0 seqId:(id)a1;
- (void)_fromDaemon_computeSelectedUUIDFromReferenceAndNotifySelected;
- (void)_fromDaemon_upgradeFace:(id)a0 forUUID:(id)a1;
- (void)updateFaceForUUID:(id)a0 withConfigurationJSONRepresentation:(id)a1 seqId:(id)a2;
- (void)reset;
- (void)updateSelectedFaceUUID:(id)a0 seqId:(id)a1;
- (void)_register;
- (void)_sendToDaemonUpdatedResourceDirectoryForFace:(id)a0 withUUID:(id)a1;
- (void)suspendUpdatesFromDaemon;
- (void)upgradeFaceInstanceDescriptor:(id)a0 forUUID:(id)a1 seqID:(id)a2;
- (void)resetClientCollectionWithCompletion:(id /* block */)a0;
- (void)_didSelectFaceUUID:(id)a0 suppressingCallback:(BOOL)a1;
- (void)_sendToDaemonSelectedUUIDSuppressingCallback:(BOOL)a0;
- (void)_registerIfNeeded;
- (void)_didRemoveFace:(id)a0 withUUID:(id)a1;

@end
