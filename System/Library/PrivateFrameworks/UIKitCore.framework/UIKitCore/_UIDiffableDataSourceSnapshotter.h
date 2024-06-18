@interface _UIDiffableDataSourceSnapshotter : _UIDiffableDataSource

- (void)applySnapshot:(id)a0;
- (void)reloadFromSnapshot:(id)a0 completion:(id /* block */)a1;
- (id)snapshot;
- (void)applyDifferencesFromSnapshot:(id)a0;
- (void)reloadFromSnapshot:(id)a0;
- (id)emptySnapshot;
- (void)applyDifferencesFromSnapshot:(id)a0 completion:(id /* block */)a1;

@end
