@class _PASLock;

@interface ATXTrialAssets : NSObject {
    _PASLock *_lock;
}

- (id)init;
- (id)_unarchiveResource:(id)a0;
- (id)_treatmentId;
- (BOOL)clearStaleUnarchivedLevels;
- (id)client;
- (id)dictionaryForClass:(Class)a0;
- (id)filePathForClassName:(id)a0;
- (void)addUpdateHandlerWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)dictionaryForResource:(id)a0;
- (id)filePathForClass:(Class)a0;
- (id)dictionaryForClassName:(id)a0;
- (BOOL)_cleanModelDirectory;
- (id)_unarchivedResourcePath;
- (id)filePathForResource:(id)a0;
- (id)pathForLegacyResourcePath:(id)a0;

@end
