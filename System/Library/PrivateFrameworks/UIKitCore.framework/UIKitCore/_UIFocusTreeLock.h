@class NSTimer, NSMapTable;

@interface _UIFocusTreeLock : NSObject

@property (readonly, nonatomic) NSMapTable *lockedEnvironments;
@property (readonly, nonatomic) NSTimer *validationTimer;

- (id)init;
- (void)lockEnvironmentTree:(id)a0;
- (void)_validateLockedEnvironments;
- (BOOL)isEnvironmentLocked:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (BOOL)unlockEnvironmentTree:(id)a0;

@end
