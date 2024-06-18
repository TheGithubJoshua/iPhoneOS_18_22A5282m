@interface WDWorkoutRouteDisplayType : HKDisplayType

@property (class, readonly) WDWorkoutRouteDisplayType *sharedDisplayType;

- (id)sampleType;
- (long long)categoryIdentifier;
- (id)wd_listViewControllerDataProviderWithProfile:(id)a0 unitController:(id)a1 isHierarchical:(BOOL)a2;

@end
