@class NSString, PBUIReplicaSourceObserverBox;
@protocol PBUIReplicaSnapshotSource, PBUIReplicaPortalSource;

@interface PBUIFixedReplicaSourceProvider : NSObject <PBUIPosterReplicaPortalProviding, PBUIPosterReplicaSnapshotProviding, BSInvalidatable> {
    PBUIReplicaSourceObserverBox *_observers;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id<PBUIReplicaPortalSource> portalSource;
@property (retain, nonatomic) id<PBUIReplicaSnapshotSource> snapshotSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)registerPortalSourceObserver:(id)a0;
- (id)portalSourceForReplicaView:(id)a0;
- (id)registerSnapshotSourceObserver:(id)a0;
- (id)snapshotSourceForObserver:(id)a0;

@end
