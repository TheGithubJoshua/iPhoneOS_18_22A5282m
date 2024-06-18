@interface MapsSync.MapsSyncFetchedResultsControllerDelegate : NSObject <NSFetchedResultsControllerDelegate> {
    void /* unknown type, empty encoding */ _baseQuery;
    void /* unknown type, empty encoding */ _delegate;
    void /* unknown type, empty encoding */ _contentPredicate;
    void /* unknown type, empty encoding */ _otherWatchedContentPredicate;
}

- (id)init;
- (void)controllerWillChangeContent:(id)a0;
- (void)contextDidChangeWithNotification:(id)a0;
- (void).cxx_destruct;
- (void)remoteChangeWithNotification:(id)a0;
- (void)controller:(id)a0 didChangeObject:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void)controllerDidChangeContent:(id)a0;

@end