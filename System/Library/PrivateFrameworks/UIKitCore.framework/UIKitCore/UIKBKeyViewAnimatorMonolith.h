@class NSString, NSMutableDictionary;

@interface UIKBKeyViewAnimatorMonolith : UIKBKeyViewAnimator <_UIFloatingContentViewDelegate> {
    NSMutableDictionary *_selectedKeyTimestamps;
    NSMutableDictionary *_transitionCompletions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)floatingContentView:(id)a0 isTransitioningFromState:(unsigned long long)a1 toState:(unsigned long long)a2;
- (id)init;
- (void)transitionOutKeyView:(id)a0 fromState:(int)a1 toState:(int)a2 completion:(id /* block */)a3;
- (void)floatingContentView:(id)a0 didFinishTransitioningToState:(unsigned long long)a1;
- (Class)keyViewClassForKey:(id)a0 renderTraits:(id)a1 screenTraits:(id)a2;
- (long long)_transitionFromState:(int)a0 toState:(int)a1;
- (BOOL)shouldTransitionKeyView:(id)a0 fromState:(int)a1 toState:(int)a2;
- (void)transitionKeyView:(id)a0 fromState:(int)a1 toState:(int)a2 completion:(id /* block */)a3;
- (void)animateFloatingKeyView:(id)a0 toControlState:(unsigned long long)a1;
- (void).cxx_destruct;
- (void)transitionFloatingKeyView:(id)a0 toState:(int)a1 completion:(id /* block */)a2;
- (void)reset;
- (void)addTransitionCompletion:(id /* block */)a0 forKeyName:(id)a1;
- (BOOL)shouldPurgeKeyViews;
- (unsigned long long)controlStateForKeyState:(int)a0;
- (BOOL)shouldAssertCurrentKeyState:(id)a0;

@end
