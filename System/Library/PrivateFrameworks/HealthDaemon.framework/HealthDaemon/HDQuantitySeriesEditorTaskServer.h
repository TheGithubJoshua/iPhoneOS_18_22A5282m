@class HKQuantitySample;

@interface HDQuantitySeriesEditorTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleEditorTaskServerInterface> {
    HKQuantitySample *_quantitySample;
}

+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)requiredEntitlements;
+ (Class)configurationClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)remote_commitRemovedDatums:(id)a0 completion:(id /* block */)a1;

@end
