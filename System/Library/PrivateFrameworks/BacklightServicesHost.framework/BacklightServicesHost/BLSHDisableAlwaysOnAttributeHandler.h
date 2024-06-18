@protocol BLSHDisableAlwaysOnProvider;

@interface BLSHDisableAlwaysOnAttributeHandler : BLSHLocalCountingAssertionAttributeHandler {
    id<BLSHDisableAlwaysOnProvider> _provider;
}

+ (Class)attributeBaseClass;
+ (id)attributeClasses;
+ (id)registerHandlerForService:(id)a0 provider:(id)a1;

- (void)deactivateWithFinalEntry:(id)a0;
- (id)initForService:(id)a0 provider:(id)a1;
- (void).cxx_destruct;
- (void)activateWithFirstEntry:(id)a0;

@end
