@class NSMutableDictionary;

@interface SBLockScreenActionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *actionProviders;

- (id)init;
- (id)currentLockScreenActionContextActionSource:(unsigned long long *)a0;
- (id)currentLockScreenActionContext;
- (void).cxx_destruct;
- (void)runUnlockAction;
- (void)_clearActionOnAllProviders;
- (void)registerLockScreenActionProvider:(id)a0 forSource:(unsigned long long)a1;

@end
