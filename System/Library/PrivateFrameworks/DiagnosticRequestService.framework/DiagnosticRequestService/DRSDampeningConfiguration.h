@interface DRSDampeningConfiguration : NSObject

@property (nonatomic) double hysteresis;
@property (nonatomic) unsigned long long countCap;
@property (nonatomic) double acceptanceRate;

+ (id)hangTracerWatchOSInternalOrSeedNoDownsamplingConfiguration;
+ (id)sentryMacOSAppLaunchConfiguration;
+ (id)drmResourceUsageConfiguration;
+ (id)memoryToolsDefaultConfiguration;
+ (id)hangTracerIOSCustomerConfiguration;
+ (id)coreAudioOverloadConfiguration;
+ (id)_entityName;
+ (id)hangTracerIOSSeedConfiguration;
+ (id)mailIssueCategoryConfiguration;
+ (id)rapidMicroDiagnosticsConfiguration;
+ (id)hangTracerWatchOSInternalOrSeedDownsamplingConfiguration;
+ (id)defaultSignatureDampeningConfiguration;
+ (id)spindumpMacOSSlowHIDConfiguration_SeedRC;
+ (id)spindumpMacOSSlowHIDConfiguration_Internal;
+ (id)ppsArchiveConfiguration;
+ (id)hangTracerIOSInternalNoDownsamplingConfiguration;
+ (id)RMEIssueCategoryConfiguration;
+ (id)nandDefaultConfiguration;
+ (id)nandAutoGBBSweepConfiguration;
+ (id)hangTracerIOSInternalDownsamplingConfiguration;
+ (id)caHitchesConfiguration;
+ (id)watchdogdDefaultConfiguration;
+ (id)memoryToolsInternalMemgraphOverTimeConfiguration;

- (id)_ON_MOC_QUEUE_moRepresentationInContext:(id)a0 identifier:(id)a1;
- (id)_initWithMO_ON_MOC_QUEUE:(id)a0;
- (id)initWithHysteresis:(double)a0 cap:(unsigned long long)a1 acceptanceRate:(double)a2;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (BOOL)isEqualToDampeningConfiguration:(id)a0;
- (id)jsonCompatibleDictRepresentation;
- (id)initWithPlistDict:(id)a0;

@end
