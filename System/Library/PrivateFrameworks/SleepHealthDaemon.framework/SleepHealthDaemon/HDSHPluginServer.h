@class NSObject, NSString, HDProfile, HDSHProfileExtension, HDHealthStoreClient;
@protocol OS_dispatch_queue;

@interface HDSHPluginServer : HDStandardTaskServer <HDDiagnosticObject, HDSleepHealthDaemonPluginServerInterface> {
    HDProfile *_profile;
    HDSHProfileExtension *_profileExtension;
    HDHealthStoreClient *_client;
    NSObject<OS_dispatch_queue> *_serializer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;
+ (id)requiredEntitlements;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)diagnosticDescription;
- (id)exportedInterface;
- (void)remote_stopSleepTrackingSession;
- (void)remote_saveSleepTrackingSamples:(id)a0 completion:(id /* block */)a1;
- (void)remote_startSleepTrackingSession;
- (void)remote_updateCurrentSleepSchedules:(id)a0 sleepDurationGoal:(id)a1 completion:(id /* block */)a2;
- (BOOL)_deleteSamples:(id)a0 error:(id *)a1;
- (BOOL)_insertSamplesWithClientSource:(id)a0 error:(id *)a1;
- (BOOL)_populateSamplesToInsert:(id)a0 samplesToDelete:(id)a1 forSleepDurationGoal:(id)a2 error:(id *)a3;
- (BOOL)_populateSamplesToInsert:(id)a0 samplesToDelete:(id)a1 forSleepSchedules:(id)a2 error:(id *)a3;
- (BOOL)_replaceSamples:(id)a0 withSamples:(id)a1 error:(id *)a2;
- (void)_saveSleepTrackingSamplesAfterFirstUnlock:(id)a0 completion:(id /* block */)a1;

@end
