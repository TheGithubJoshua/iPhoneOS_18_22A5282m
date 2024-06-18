@class NSString, BSCompoundAssertion;

@interface PBUIReplicaSourceObserverBox : NSObject <NSFastEnumeration, PBUIPosterReplicaSourceObserver, BSInvalidatable> {
    BOOL _wasLastActive;
    BSCompoundAssertion *_sharedUpdateAssertion;
}

@property (readonly, nonatomic) long long effectiveStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithIdentifier:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithIdentifier:(id)a0 activeStateDidChangeHandler:(id /* block */)a1;
- (id)registerSourceObserver:(id)a0;
- (void)setNeedsSourceUpdate;

@end
