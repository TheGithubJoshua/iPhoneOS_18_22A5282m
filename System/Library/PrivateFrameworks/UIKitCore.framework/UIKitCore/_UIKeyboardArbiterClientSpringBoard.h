@interface _UIKeyboardArbiterClientSpringBoard : _UIKeyboardArbiterClientInputDestination

- (void)preserveKeyboardWithId:(id)a0;
- (void)forceKeyboardAway;
- (void)restoreKeyboardWithId:(id)a0;
- (void)userSelectedApp:(id)a0 onCompletion:(id /* block */)a1;
- (id)init;
- (void)willLock:(id)a0;
- (void)userSelectedProcessIdentifier:(int)a0 withSceneIdentity:(id)a1 onCompletion:(id /* block */)a2;
- (BOOL)allowedToShowKeyboard;
- (BOOL)isSpotlight:(id)a0;

@end
