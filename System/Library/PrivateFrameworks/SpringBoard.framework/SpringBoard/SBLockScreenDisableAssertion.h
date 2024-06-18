@class NSString, SBFAuthenticationAssertion;

@interface SBLockScreenDisableAssertion : SBUILockScreenDisableAssertion {
    NSString *_identifier;
    SBFAuthenticationAssertion *_disableLockAssertion;
}

+ (void)initialize;

- (id)initWithIdentifier:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;

@end
