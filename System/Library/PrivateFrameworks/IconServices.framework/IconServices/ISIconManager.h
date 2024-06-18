@class ISIconCache, NSHashTable, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ISIconManager : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain) ISIconCache *iconCache;
@property (retain) NSHashTable *iconRegistry;
@property (retain) NSHashTable *observers;
@property (retain) NSObject<OS_dispatch_queue> *internalQueue;
@property (retain) NSXPCConnection *connection;

+ (id)sharedInstance;
+ (id)serviceName;

- (void)removeObserver:(id)a0;
- (id)_init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)findOrRegisterIcon:(id)a0;
- (void)addObserver:(id)a0;

@end
