@class NSString;

@interface _HDSPPowerAssertion : NSObject <BSDescriptionProviding, HDSPAssertion>

@property (readonly, nonatomic) unsigned long long signpost_id;
@property (readonly, nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } assertionLock;
@property (readonly, nonatomic) unsigned int assertionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *identifier;

+ (id)assertionWithIdentifier:(id)a0;
+ (id)assertionWithIdentifier:(id)a0 timeout:(double)a1;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)succinctDescription;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (void)releaseAssertion;
- (void)_locked_release;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;
- (id)initWithIdentifier:(id)a0 timeout:(double)a1;

@end
