@interface SBSServiceFacilityClient : FBSServiceFacilityClient {
    long long _numberOfCheckOuts;
}

+ (void)checkInClient:(id)a0;
+ (id)checkOutClientWithClass:(Class)a0;
+ (id)serviceFacilityIdentifier;

- (id)initWithCalloutQueue:(id)a0;
- (id)initWithIdentifier:(id)a0 calloutQueue:(id)a1;
- (void)_incrementCheckout;
- (BOOL)_decrementCheckout;

@end
