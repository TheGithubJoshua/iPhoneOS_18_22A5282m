@class NSMutableDictionary, _HKMedicalIDData, HKHealthStore, CNUIContactsEnvironment, HKMedicalIDStore;
@protocol CNScheduler;

@interface CNHealthStoreManager : NSObject {
    int _healthNotificationToken;
}

@property (retain, nonatomic) CNUIContactsEnvironment *environment;
@property (retain, nonatomic) _HKMedicalIDData *medicalIDData;
@property (readonly, nonatomic) id<CNScheduler> workQueue;
@property (nonatomic) BOOL needsFetching;
@property (nonatomic) BOOL isListeningToChanges;
@property (readonly, nonatomic) NSMutableDictionary *medicalIDDataHandlers;
@property (readonly, nonatomic) id<CNScheduler> stateLock;
@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKMedicalIDStore *medicalIDStore;

+ (id)log;
+ (id /* block */)emergencyContactMatchingContact:(id)a0;
+ (id)descriptorForRequiredKeys;
+ (id)identifiersForContactMatchingEmergencyContacts:(id)a0 contactStore:(id)a1;
+ (BOOL)shouldShowEmergencyContacts;

- (id)initWithEnvironment:(id)a0;
- (id)nts_lazyMedicalIDStore;
- (void)updateAndDispatchMedicalIDData;
- (id)nts_lazyHealthStore;
- (void)unregisterHandlerForToken:(id)a0;
- (void).cxx_destruct;
- (void)startListeningForChanges;
- (void)notifyHandlersWithMedicalIDData:(id)a0;
- (void)dealloc;
- (id)createMedicalIDFromContact:(id)a0;
- (id)initWithEnvironment:(id)a0 healthStore:(id)a1 medicalIDStore:(id)a2;
- (id)registerMedicalIDDataHandler:(id /* block */)a0;

@end
