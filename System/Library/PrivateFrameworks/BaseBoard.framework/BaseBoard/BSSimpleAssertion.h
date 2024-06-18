@class NSString, BSAtomicSignal, NSObject;
@protocol OS_dispatch_queue;

@interface BSSimpleAssertion : NSObject <BSInvalidatable, BSDescriptionProviding> {
    BSAtomicSignal *_invalidated;
    NSObject<OS_dispatch_queue> *_queue;
    id /* block */ _invalidationBlock;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (id)initWithIdentifier:(id)a0 forReason:(id)a1 queue:(id)a2 invalidationBlock:(id /* block */)a3;
- (id)initWithIdentifier:(id)a0 forReason:(id)a1 invalidationBlock:(id /* block */)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)dealloc;

@end
