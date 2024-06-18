@interface PBFStaticPosterDescriptorStoreCoordinator : PBFPosterDescriptorStoreCoordinator

+ (BOOL)shouldBeExcludedFromBackup;
+ (long long)type;

- (id)_accessQueue_buildIdentityForVersion:(unsigned long long)a0 supplement:(unsigned long long)a1;

@end
