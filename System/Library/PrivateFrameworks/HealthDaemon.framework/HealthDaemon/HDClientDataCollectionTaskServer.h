@class HKDevice, NSString, NSError, NSUUID, HKDataCollectorTaskServerConfiguration, HDDataAggregator, NSMutableDictionary, NSObject, HDDataCollectorState, HKSource, HKDataCollectorCollectionConfiguration;
@protocol OS_dispatch_queue;

@interface HDClientDataCollectionTaskServer : HDStandardTaskServer <HKDataCollectorTaskServerInterface, HDDataCollector> {
    NSObject<OS_dispatch_queue> *_queue;
    HDDataCollectorState *_dataCollectorState;
    HKDevice *_device;
    NSError *_fatalError;
    HKDataCollectorTaskServerConfiguration *_configuration;
    NSUUID *_registrationUUID;
    HDDataAggregator *_aggregator;
    HKDataCollectorCollectionConfiguration *_collectionConfiguration;
    NSMutableDictionary *_lastDatumByDevice;
    HKSource *_clientSource;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (id)requiredEntitlements;
+ (Class)configurationClass;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)connectionInvalidated;
- (void)connectionConfigured;
- (id)remoteInterface;
- (void)dataAggregator:(id)a0 didPersistDatums:(id)a1 success:(BOOL)a2 error:(id)a3;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (id)sourceForDataAggregator:(id)a0;
- (void).cxx_destruct;
- (void)remote_insertDatums:(id)a0 device:(id)a1 metadata:(id)a2 batchUUID:(id)a3 registrationUUID:(id)a4 completion:(id /* block */)a5;
- (void)remote_synchronizeWithCompletion:(id /* block */)a0;
- (void)remote_registerWithCompletion:(id /* block */)a0;
- (id)exportedInterface;
- (id)identifierForDataAggregator:(id)a0;
- (void)dataAggregator:(id)a0 requestsCollectionThroughDate:(id)a1 completion:(id /* block */)a2;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (Class)sensorDatumClassForAggregator:(id)a0;

@end
