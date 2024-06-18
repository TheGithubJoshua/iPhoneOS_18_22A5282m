@protocol BLSHDisableCommitOnWakeMeasurementProvider;

@interface BLSHDisableCommitOnWakeMeasurementAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    id<BLSHDisableCommitOnWakeMeasurementProvider> _provider;
}

+ (Class)attributeBaseClass;
+ (id)attributeClasses;
+ (id)registerHandlerForService:(id)a0 provider:(id)a1;

- (void)deactivateWithFinalEntry:(id)a0;
- (void).cxx_destruct;
- (void)activateWithFirstEntry:(id)a0;

@end
