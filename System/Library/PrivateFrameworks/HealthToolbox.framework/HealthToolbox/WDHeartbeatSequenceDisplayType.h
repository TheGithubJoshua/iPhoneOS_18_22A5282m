@interface WDHeartbeatSequenceDisplayType : HKDisplayType

@property (class, readonly) WDHeartbeatSequenceDisplayType *sharedDisplayType;

- (id)sampleType;
- (long long)categoryIdentifier;
- (id)wd_listViewControllerDataProviderWithProfile:(id)a0 unitController:(id)a1 isHierarchical:(BOOL)a2;

@end
