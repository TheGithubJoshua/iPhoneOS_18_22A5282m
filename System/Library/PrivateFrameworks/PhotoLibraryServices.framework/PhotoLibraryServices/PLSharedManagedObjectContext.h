@interface PLSharedManagedObjectContext : PLManagedObjectContext {
    id _changeNotificationObserver;
}

- (void)_mergeChangesFromDidSaveDictionary:(id)a0 usingObjectIDs:(BOOL)a1;
- (BOOL)shouldMergeFromRemoteContextWithChanges:(id)a0;
- (void)setupLocalChangeNotifications;
- (void)performBlockAndWait:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_hasChangesForCloudShared:(id)a0;
- (BOOL)isUserInterfaceContext;
- (void)tearDownLocalChangeNotifications;

@end
