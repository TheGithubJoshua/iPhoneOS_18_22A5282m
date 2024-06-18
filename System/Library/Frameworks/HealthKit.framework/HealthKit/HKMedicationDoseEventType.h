@class NSString;

@interface HKMedicationDoseEventType : HKSampleType <_HKStatisticsSampleTypeConfigurationProviding>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)medicationDoseEventType;
+ (id)allTypes;

- (long long)aggregationStyleForStatistics;
- (void)validateUnitForStatistic:(id)a0;
- (id)canonicalUnitForStatistics;
- (id)underlyingSampleType;
- (BOOL)supportsStatisticOptions:(unsigned long long)a0;

@end
