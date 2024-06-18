@class NSString, NSMapTable;

@interface SBPIPCompoundAssertion : NSObject {
    NSMapTable *_controllerToStashAssertionMap;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long reason;

- (void)addAssertionForController:(id)a0 windowScene:(id)a1;
- (id)initWithIdentifier:(id)a0 reason:(long long)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)removeAssertionForController:(id)a0;
- (void)dealloc;

@end
