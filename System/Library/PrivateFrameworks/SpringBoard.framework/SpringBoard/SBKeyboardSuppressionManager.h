@class NSMutableDictionary;

@interface SBKeyboardSuppressionManager : NSObject {
    NSMutableDictionary *_keyboardSuppressionAssertions;
}

+ (id)sharedInstance;

- (id)init;
- (id)acquireKeyboardSuppressionAssertionWithReason:(id)a0 predicate:(id /* block */)a1 displayIdentity:(id)a2;
- (void).cxx_destruct;
- (void)_setKeyboardSuppressed:(BOOL)a0 forReason:(id)a1 withPredicate:(id /* block */)a2 displayIdentity:(id)a3;
- (id)description;
- (void)stopSuppressingKeyboardWithReason:(id)a0;
- (void)startSuppressingKeyboardWithReason:(id)a0 predicate:(id /* block */)a1 displayIdentity:(id)a2;

@end
