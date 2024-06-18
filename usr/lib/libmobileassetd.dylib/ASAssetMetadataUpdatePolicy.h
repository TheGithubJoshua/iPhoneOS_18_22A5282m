@interface ASAssetMetadataUpdatePolicy : NSObject

+ (id)policy;

- (void)getDelay:(double *)a0 andGracePeriod:(double *)a1 forUpdateInterval:(double)a2;
- (void)getDelay:(double *)a0 andGracePeriod:(double *)a1 forUpdateError:(id)a2;
- (double)defaultNetworkTimeout;
- (id)checkPreferencesForOverride:(id)a0;
- (id)getSystemAppURL:(id)a0;
- (char *)trainName;
- (id)serverURLForAssetType:(id)a0;
- (double)automaticMetadataUpdateIntervalForAssetType:(id)a0;
- (id)_stringPreferenceValueForKey:(id)a0;

@end
