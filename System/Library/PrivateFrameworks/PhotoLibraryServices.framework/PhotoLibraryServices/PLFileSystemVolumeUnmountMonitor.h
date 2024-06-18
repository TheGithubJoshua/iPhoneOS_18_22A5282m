@class NSURL, NSHashTable;

@interface PLFileSystemVolumeUnmountMonitor : NSObject {
    NSHashTable *_observers;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSURL *_volumeURL;
}

- (id)initWithVolumeURL:(id)a0;
- (void)removeVolumeUnmountObserver:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)addVolumeUnmountObserver:(id)a0;
- (void)dealloc;

@end
