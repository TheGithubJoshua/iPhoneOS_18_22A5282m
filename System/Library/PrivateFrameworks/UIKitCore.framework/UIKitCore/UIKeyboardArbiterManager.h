@interface UIKeyboardArbiterManager : NSObject

@property (readonly) BOOL remoteKeyboardUndocked;

+ (id)sharedArbiterManager;
+ (id)arbiterClient;

- (void)preserveKeyboardWithId:(id)a0;
- (void)forceKeyboardAway;
- (void)restoreKeyboardWithId:(id)a0;
- (void)userSelectedApp:(id)a0 onCompletion:(id /* block */)a1;
- (void)userSelectedProcessIdentifier:(int)a0 withSceneIdentity:(id)a1 onCompletion:(id /* block */)a2;

@end
