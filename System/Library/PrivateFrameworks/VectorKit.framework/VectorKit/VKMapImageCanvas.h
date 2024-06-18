@class NSString, VKManifestTileGroupObserverProxy;

@interface VKMapImageCanvas : VKImageCanvas <MDSnapshotMap> {
    void *_mapEngine;
    struct _retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc_arc, geo::_release_objc_arc, geo::_hash_objc, geo::_equal_objc> { void /* function */ **_vptr$_retain_ptr; VKManifestTileGroupObserverProxy *_obj; struct _retain_objc_arc { } _retain; struct _release_objc_arc { } _release; } _manifestTileGroupObserverProxy;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelTileRequests;
- (void)clearScene;
- (id)initWithMapEngine:(void *)a0;
- (void)resetCameraController;
- (void)tileGroupDidChange;
- (void)setMapType:(int)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateWithTimestamp:(double)a0 withContext:(void *)a1;
- (void)dealloc;

@end
