@class HDProfile;

@interface HDMedicationNanoSyncTriggerManager : NSObject {
    HDProfile *_profile;
}

@property (copy, nonatomic) id /* block */ hkt_willTriggerNanoSyncHandler;

- (id)initWithProfile:(id)a0;
- (id)init;
- (void)triggerNanoSyncWithReason:(id)a0;
- (void).cxx_destruct;

@end
