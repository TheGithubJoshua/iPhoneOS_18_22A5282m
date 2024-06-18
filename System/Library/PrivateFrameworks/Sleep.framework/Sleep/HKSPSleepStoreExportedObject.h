@class HKSPSleepStore;

@interface HKSPSleepStoreExportedObject : NSObject <HKSPSleepClient>

@property (weak, nonatomic) HKSPSleepStore *sleepStore;

- (id)_mergeExternalSleepScheduleChange:(id)a0 clientIdentifier:(id)a1;
- (void)sleepEventRecordChanged:(id)a0 clientIdentifier:(id)a1;
- (void)clientShouldCheckInWithCompletion:(id /* block */)a0;
- (void)sleepSettingsChanged:(id)a0 clientIdentifier:(id)a1;
- (void)getClientIdentifierWithCompletion:(id /* block */)a0;
- (void)sleepScheduleChanged:(id)a0 clientIdentifier:(id)a1;
- (id)_mergeExternalSleepEventRecordChange:(id)a0 clientIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)sleepModeChanged:(id)a0;
- (void)sleepScheduleStateChanged:(id)a0;
- (void)sleepEventOccurred:(id)a0;
- (id)_mergeExternalSleepSettingsChange:(id)a0 clientIdentifier:(id)a1;

@end
