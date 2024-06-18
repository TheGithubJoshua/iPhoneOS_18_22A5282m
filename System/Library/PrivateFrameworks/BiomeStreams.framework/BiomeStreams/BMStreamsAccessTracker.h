@class _PASLock;

@interface BMStreamsAccessTracker : NSObject {
    _PASLock *_lock;
}

+ (id)sharedInstance;

- (id)init;
- (BOOL)_sandboxCheck:(id)a0 path:(id)a1;
- (void)logMissingEntitlementsForAccess:(id)a0;
- (BOOL)_checkAccess:(id)a0;
- (void).cxx_destruct;
- (BOOL)checkHasSandboxAccess:(id)a0;
- (void)_logMissingEntitlementsForAccess:(id)a0;

@end
