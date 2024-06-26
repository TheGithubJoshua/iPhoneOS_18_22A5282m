@class NSMutableSet;

@interface MTSafeUuidQueryObserver : MTBaseQueryObserver {
    NSMutableSet *currentInserts;
    NSMutableSet *currentDeletes;
    NSMutableSet *currentUpdates;
    NSMutableSet *currentItems;
}

- (void)notifyObservers;
- (void)startObserving;
- (void)controllerWillChangeContent:(id)a0;
- (void).cxx_destruct;
- (id)initWithFetchRequest:(id)a0 managedObjectContext:(id)a1;
- (void)controller:(id)a0 didChangeObject:(id)a1 atIndexPath:(id)a2 forChangeType:(unsigned long long)a3 newIndexPath:(id)a4;
- (void)controllerDidChangeContent:(id)a0;
- (id)addResultsChangedHandler:(id /* block */)a0;

@end
