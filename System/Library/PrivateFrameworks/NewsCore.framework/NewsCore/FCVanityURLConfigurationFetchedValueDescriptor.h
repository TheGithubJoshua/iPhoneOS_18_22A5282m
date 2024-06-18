@class FCFetchedValueManager;

@interface FCVanityURLConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) FCFetchedValueManager *configurationManager;

- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (id)inputManagers;
- (id)init;
- (id)_vanityURLConfiguration;
- (id)fastCachedValue;
- (id)initWithConfigurationManager:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;

@end
