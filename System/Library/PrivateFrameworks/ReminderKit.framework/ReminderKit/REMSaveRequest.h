@class NSString, NSMutableDictionary, NSMutableSet, REMStore;
@protocol REMReplicaManagerProviding, REMSaveRequestNotifyChangeDelegate;

@interface REMSaveRequest : NSObject

@property (readonly, nonatomic) NSMutableDictionary *trackedTemplateChangeItems;
@property (retain, nonatomic) NSMutableSet *saveRequestChangeEvents;
@property (copy, nonatomic) NSString *author;
@property (nonatomic, getter=isSaved) BOOL saved;
@property (readonly, nonatomic) NSMutableDictionary *trackedAccountChangeItems;
@property (readonly, nonatomic) NSMutableDictionary *trackedListChangeItems;
@property (readonly, nonatomic) NSMutableDictionary *trackedSmartListChangeItems;
@property (readonly, nonatomic) NSMutableDictionary *trackedReminderChangeItems;
@property (readonly, nonatomic) NSMutableDictionary *trackedAccountCapabilities;
@property (nonatomic) BOOL updateLastModifiedDates;
@property (nonatomic) BOOL saveIsNoopIfNoChangedKeys;
@property (nonatomic) BOOL cloneCompletedRecurrentRemindersAtSave;
@property (nonatomic) BOOL applyCRDTsWithoutMerging;
@property (nonatomic) BOOL syncToCloudKit;
@property (retain, nonatomic) id<REMReplicaManagerProviding> replicaManagerProvider;
@property (weak, nonatomic) id<REMSaveRequestNotifyChangeDelegate> notifyChangeDelegate;
@property (readonly, nonatomic) REMStore *store;

- (id)updateAccount:(id)a0;
- (id)_addExchangeAccountWithName:(id)a0 accountObjectID:(id)a1;
- (void)_updateTrackedListChangeItem:(id)a0 withObjectID:(id)a1;
- (id)_updateListWithReminderChangeItem:(id)a0;
- (id)_addLocalAccountWithName:(id)a0;
- (void)_updateTrackedSmartListChangeItem:(id)a0 withObjectID:(id)a1;
- (id)importRemindersFromICSData:(id)a0 insertIntoListChangeItem:(id)a1 error:(id *)a2;
- (void)_willSaveAccountChangeItems:(id)a0 listChangeItems:(id)a1 smartListChangeItems:(id)a2 templateChangeItems:(id)a3 reminderChangeItems:(id)a4;
- (id)addTemplateWithName:(id)a0 configuration:(id)a1 toAccountChangeItem:(id)a2 templateObjectID:(id)a3;
- (id)_trackedListChangeItemForObjectID:(id)a0;
- (id)addListUsingTemplate:(id)a0 toAccountChangeItem:(id)a1;
- (id)_addTestOnlyExtraPrimaryCKAccountWithName:(id)a0;
- (id)updateList:(id)a0;
- (id)icsDueOrEndDateWithICSCalendarItem:(id)a0 options:(id)a1;
- (id)performRecurrenceClone;
- (id)__addAccountWithType:(long long)a0 name:(id)a1;
- (id)addListWithName:(id)a0 toListSublistContextChangeItem:(id)a1;
- (id)_addCalDavAccountWithName:(id)a0;
- (id)addReminderWithTitle:(id)a0 toListChangeItem:(id)a1;
- (id)_addAccountWithType:(long long)a0 name:(id)a1;
- (id)initWithStore:(id)a0;
- (BOOL)saveSynchronouslyWithError:(id *)a0;
- (void)_addAlarmsToReminderChangeItem:(id)a0 withICSAlarm:(id)a1 icsCalendar:(id)a2;
- (id)_updateListStorage:(id)a0 accountCapabilities:(id)a1;
- (void)updateUIDInReminderChangeItem:(id)a0 fromICSComponent:(id)a1 icsCalendar:(id)a2;
- (void)notifyChangeDelegateForSaveSuccess:(BOOL)a0;
- (id)updateSmartList:(id)a0;
- (id)_addTestOnlyLocalInternalAccountWithName:(id)a0 accountObjectID:(id)a1;
- (id)_addTestOnlyPrimaryCKAccountWithName:(id)a0;
- (id)addGroupWithName:(id)a0 toAccountGroupContextChangeItem:(id)a1;
- (BOOL)updateReminderChangeItem:(id)a0 fromICSData:(id)a1 isNew:(BOOL)a2 withOptions:(id)a3 error:(id *)a4;
- (id)__addAccountWithType:(long long)a0 name:(id)a1 accountObjectID:(id)a2;
- (id)addCustomSmartListWithName:(id)a0 toListSublistContextChangeItem:(id)a1 smartListObjectID:(id)a2;
- (void)updateReminderChangeItem:(id)a0 fromICSTodo:(id)a1 icsCalendar:(id)a2 isNew:(BOOL)a3 withOptions:(id)a4;
- (id)addReminderWithTitle:(id)a0 toListChangeItem:(id)a1 reminderObjectID:(id)a2;
- (id)_addTestOnlyPrimaryCKAccountWithName:(id)a0 accountObjectID:(id)a1;
- (id)_copyReminder:(id)a0 toReminderSubtaskContextChangeItem:(id)a1;
- (id)_updateAccountWithListChangeItem:(id)a0;
- (id)_addExchangeAccountWithName:(id)a0;
- (id)_addTestOnlyExtraPrimaryCKAccountWithName:(id)a0 accountObjectID:(id)a1;
- (void)_updateTrackedReminderChangeItem:(id)a0 withObjectID:(id)a1;
- (void).cxx_destruct;
- (void)saveWithQueue:(id)a0 completion:(id /* block */)a1;
- (id)_copyReminderChangeItem:(id)a0 toReminderSubtaskContextChangeItem:(id)a1;
- (id)_addTestOnlyNonPrimaryCKAccountWithName:(id)a0 accountObjectID:(id)a1;
- (id)description;
- (id)_addTestOnlyLocalInternalAccountWithName:(id)a0;
- (void)_trackReminderChangeItem:(id)a0;
- (void)_trackListChangeItem:(id)a0;
- (id)addReminderWithTitle:(id)a0 toReminderSubtaskContextChangeItem:(id)a1 reminderObjectID:(id)a2;
- (id)addListWithName:(id)a0 toAccountChangeItem:(id)a1 listObjectID:(id)a2;
- (id)_addLocalAccountWithName:(id)a0 accountObjectID:(id)a1;
- (void)_updateResolutionTokenMapForChangeItem:(id)a0;
- (void)_trackAccountCapabilities:(id)a0 forObjectID:(id)a1;
- (id)_trackedReminderChangeItemForObjectID:(id)a0;
- (id)_trackedAccountCapabilitiesForObjectID:(id)a0;
- (id)addReminderWithTitle:(id)a0 toReminderSubtaskContextChangeItem:(id)a1;
- (void)_trackSmartListChangeItem:(id)a0;
- (void)_prepareSave:(id /* block */)a0;
- (id)_trackedTemplateChangeItemForObjectID:(id)a0;
- (void)_populateAlarmsInReminderChangeItem:(id)a0 withICSAlarms:(id)a1 icsCalendar:(id)a2;
- (id)addTemplateWithName:(id)a0 configuration:(id)a1 toAccountChangeItem:(id)a2;
- (id)_addCalDavAccountWithName:(id)a0 accountObjectID:(id)a1;
- (void)_populateRecurrencesInReminderChangeItem:(id)a0 withICSComponent:(id)a1 icsCalendar:(id)a2;
- (id)addListWithName:(id)a0 toListSublistContextChangeItem:(id)a1 listObjectID:(id)a2;
- (id)_addTestOnlyNonPrimaryCKAccountWithName:(id)a0;
- (BOOL)_changeItemsAreAllEmpty;
- (void)_updateTrackedAccountChangeItem:(id)a0 withObjectID:(id)a1;
- (void)_trackAccountChangeItem:(id)a0;
- (id)addListWithName:(id)a0 toAccountChangeItem:(id)a1;
- (void)_trackTemplateChangeItem:(id)a0;
- (id)_trackedSmartListChangeItemForObjectID:(id)a0;
- (id)addCustomSmartListWithName:(id)a0 toAccountChangeItem:(id)a1 smartListObjectID:(id)a2;
- (id)_trackedAccountChangeItemForObjectID:(id)a0;
- (id)updateTemplate:(id)a0;
- (void)_populateReminderChangeItem:(id)a0 withICSTodoItem:(id)a1 icsCalendar:(id)a2 isNew:(BOOL)a3 withOptions:(id)a4;
- (void)performPreSaveActions;
- (id)_addAccountWithType:(long long)a0 name:(id)a1 accountObjectID:(id)a2;
- (id)_copyReminderChangeItem:(id)a0 toListChangeItem:(id)a1;
- (id)_iCalendarDataFromICSTodoItem:(id)a0 icsCalendar:(id)a1;
- (id)_copyReminder:(id)a0 toListChangeItem:(id)a1;
- (id)addGroupWithName:(id)a0 toAccountGroupContextChangeItem:(id)a1 groupObjectID:(id)a2;
- (id)addListUsingPublicTemplateWithREMListRepresentation:(id)a0 toAccountChangeItem:(id)a1;
- (id)updateReminder:(id)a0;

@end
