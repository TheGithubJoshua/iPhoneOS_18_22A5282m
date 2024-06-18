@interface ATXModeReadingFeaturizer : ATXModeAppLaunchFeaturizer

- (unsigned long long)expectedGenreId;
- (id)registrationId;
- (int)modeFeatureType;
- (id)additionalAllowedBundleIds;

@end
