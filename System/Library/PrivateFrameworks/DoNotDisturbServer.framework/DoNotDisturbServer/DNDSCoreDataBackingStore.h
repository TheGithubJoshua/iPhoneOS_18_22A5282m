@class NSPersistentContainer, NSURL;

@interface DNDSCoreDataBackingStore : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _setupLock;
    NSPersistentContainer *_persistentContainer;
    NSURL *_testDatabaseURL;
}

- (id)newManagedObjectContext;
- (void).cxx_destruct;
- (void)setupPersistentStoreIfNeeded;
- (id)_initWithURL:(id)a0;

@end
