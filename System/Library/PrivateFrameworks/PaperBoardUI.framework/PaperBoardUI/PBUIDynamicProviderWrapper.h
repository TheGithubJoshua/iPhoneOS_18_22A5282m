@class NSString, PBUIReplicaSourceObserverBox;
@protocol BSInvalidatable;

@interface PBUIDynamicProviderWrapper : NSObject <PBUIPosterReplicaPortalProviding, PBUIPosterReplicaSnapshotProviding, BSInvalidatable> {
    id /* block */ _makePortalProvider;
    PBUIReplicaSourceObserverBox *_portalObservers;
    id<BSInvalidatable> _portalObserver;
    id /* block */ _makeSnapshotProvider;
    PBUIReplicaSourceObserverBox *_snapshotObservers;
    id<BSInvalidatable> _snapshotObserver;
}

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) id rootObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)registerPortalSourceObserver:(id)a0;
- (id)portalSourceForReplicaView:(id)a0;
- (id)_snapshotProvider;
- (id)_portalProvider;
- (id)registerSnapshotSourceObserver:(id)a0;
- (id)initWithRootObject:(id)a0 portalProvider:(id /* block */)a1 snapshotProvider:(id /* block */)a2;
- (id)snapshotSourceForObserver:(id)a0;

@end
