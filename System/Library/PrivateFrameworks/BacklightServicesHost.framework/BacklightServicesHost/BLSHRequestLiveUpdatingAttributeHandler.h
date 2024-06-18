@interface BLSHRequestLiveUpdatingAttributeHandler : BLSHLocalCountingSceneAssertionAttributeHandler

+ (Class)attributeBaseClass;
+ (id)attributeClasses;

- (void)activateForSceneEnvironment:(id)a0;
- (void)deactivateForSceneEnvironment:(id)a0;

@end
