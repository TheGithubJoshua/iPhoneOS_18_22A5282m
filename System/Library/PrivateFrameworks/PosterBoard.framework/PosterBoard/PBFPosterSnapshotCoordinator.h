@class NSString, NSMapTable, PRSServerPosterPath;

@interface PBFPosterSnapshotCoordinator : NSObject <BSCancellable> {
    PRSServerPosterPath *_path;
    NSMapTable *_lock_definitionToSnapshotReservationMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) BOOL hasSnapshots;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeAllSnapshots;
- (id)initWithPath:(id)a0;
- (void)cancel;
- (id)removeSnapshotsAtURLs:(id)a0;
- (id)snapshotURLForDefinition:(id)a0 configuredProperties:(id)a1;
- (id)snapshotReservationForDefinition:(id)a0 configuredProperties:(id)a1;
- (void).cxx_destruct;
- (id)_lock_ingestImageAtURL:(id)a0 forDefinition:(id)a1 configuredProperties:(id)a2;
- (void)dealloc;
- (void)ingestSnapshotsByDefinition:(id)a0 path:(id)a1 configuredProperties:(id)a2;
- (BOOL)snapshotExistsForDefinition:(id)a0 configuredProperties:(id)a1;

@end
