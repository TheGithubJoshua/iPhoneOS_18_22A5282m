@class NSString, HFItem, HUTriggerConditionEditorItemModule, HUEventUIFlow, HUPresenceUserPickerItemModule;

@interface HULocationEventEditorSummaryItemManager : HFItemManager <HUPresenceUserPickerItemModuleDelegate>

@property (class, readonly, copy, nonatomic) NSString *usersHeaderSectionID;
@property (class, readonly, copy, nonatomic) NSString *usersListSectionID;
@property (class, readonly, copy, nonatomic) NSString *usersListFooterSectionID;
@property (class, readonly, copy, nonatomic) NSString *locationSectionID;

@property (retain, nonatomic) HFItem *usersInstructionsItem;
@property (retain, nonatomic) HFItem *locationItem;
@property (retain, nonatomic) HUEventUIFlow *flow;
@property (readonly, nonatomic) HUPresenceUserPickerItemModule *userPickerModule;
@property (readonly, nonatomic) HUTriggerConditionEditorItemModule *conditionEditorModule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)home;
- (BOOL)_canEditLocation;
- (id)_buildItemModulesForHome:(id)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (BOOL)_hasCustomLocation;
- (id)_userPickerOptions;
- (BOOL)canAddRegionToTriggerBuilder;
- (BOOL)canChangeLocation;
- (id)initWithDelegate:(id)a0 flow:(id)a1;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (BOOL)isInstructionsItem:(id)a0;
- (id)locationEventRegion;
- (void)updateLocationEventWithRegion:(id)a0;
- (void)userPickerModule:(id)a0 didUpdatePresenceEvent:(id)a1;

@end
