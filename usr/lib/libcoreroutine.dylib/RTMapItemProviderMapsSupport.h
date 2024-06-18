@class RTMapItemProviderMapsSupportParameters, RTMapsSupportManager, NSString;

@interface RTMapItemProviderMapsSupport : RTMapItemProviderBase <RTMapItemProvider>

@property (retain, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (readonly, copy, nonatomic) RTMapItemProviderMapsSupportParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (double)confidenceFromMapItemSource:(unsigned long long)a0;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 mapsSupportManager:(id)a2;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 mapsSupportManager:(id)a2 parameters:(id)a3;
- (void).cxx_destruct;
- (BOOL)skipForOptions:(id)a0 error:(id *)a1;

@end
