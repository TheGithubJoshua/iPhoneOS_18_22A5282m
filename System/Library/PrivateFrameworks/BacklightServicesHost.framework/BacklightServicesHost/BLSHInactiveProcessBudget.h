@class NSString, BLSHInactiveProcessSecondsBudget, BLSHInactiveProcessMinutesBudget;
@protocol BLSHOSInterfaceProviding;

@interface BLSHInactiveProcessBudget : NSObject <BLSHInactiveProcessBudgeting> {
    NSString *_identifier;
    id<BLSHOSInterfaceProviding> _osInterfaceProvider;
    BLSHInactiveProcessSecondsBudget *_secondsBudget;
    BLSHInactiveProcessMinutesBudget *_minutesBudget;
    unsigned long long _stateHandler;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)validateAndChargeFutureSpecifier:(id)a0 nextSpecifier:(id)a1 expectedFidelity:(long long)a2;
- (void)chargeRenderedSpecifier:(id)a0 expectedFidelity:(long long)a1;
- (BOOL)stillTrackingAfterPurgingStaleDataForNowDate:(id)a0;
- (void)resetFutureSpecifiers;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 osInterfaceProvider:(id)a1;
- (void)invalidateAtRequestDate:(id)a0 expectedFidelity:(long long)a1 invalidationBlock:(id /* block */)a2;
- (void)dealloc;
- (void)performInvalidation;
- (long long)allowedFidelityAtDate:(id)a0 expectedFidelity:(long long)a1;

@end
