@class NSString;

@interface VKStylesheetVendorResourceManifestTileGroupObserverProxy : NSObject <GEOResourceManifestTileGroupObserver> {
    struct weak_ptr<md::StylesheetVendor> { struct StylesheetVendor *__ptr_; struct __shared_weak_count *__cntrl_; } _vendor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)a0;
- (id)initWithStylesheetVendor:(struct shared_ptr<md::StylesheetVendor> { struct StylesheetVendor *x0; struct __shared_weak_count *x1; })a0;
- (void)dealloc;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)a0;

@end
