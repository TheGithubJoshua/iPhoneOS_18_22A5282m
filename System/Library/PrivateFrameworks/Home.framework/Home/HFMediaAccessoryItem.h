@class NSString, HFMediaAccessoryCommonSettingsManager, NSSet, HMHome;
@protocol HFHomeKitSettingsVendor, HFMediaValueSource, HFHomeKitObject, HFMediaProfileContainer, HFCharacteristicValueSource, HFAccessoryRepresentable;

@interface HFMediaAccessoryItem : HFItem <HFAccessoryRepresentableItem, HFMediaAccessoryProtocol, HFMediaAccessoryLikeItem, HFActionBuilderFactory>

@property (readonly, nonatomic) id<HFAccessoryRepresentable> accessoryRepresentableObject;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HFMediaValueSource> mediaValueSource;
@property (nonatomic) BOOL isItemInActionBuilder;
@property (readonly, nonatomic) id<HFMediaProfileContainer> mediaProfileContainer;
@property (readonly, nonatomic) long long mediaAccessoryItemType;
@property (readonly, nonatomic) BOOL allowsAppleMusicAccount;
@property (readonly, nonatomic) BOOL supportsMediaAction;
@property (readonly, nonatomic) BOOL shouldShowMutedMicIcon;
@property (readonly, nonatomic) HFMediaAccessoryCommonSettingsManager *commonSettingsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<HFCharacteristicValueSource> valueSource;
@property (readonly, nonatomic) id<HFHomeKitObject> homeKitObject;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) BOOL isItemGroup;
@property (readonly, nonatomic) BOOL isContainedWithinItemGroup;
@property (readonly, nonatomic) unsigned long long numberOfItemsContainedWithinGroup;
@property (readonly, nonatomic) NSSet *accessoriesSupportingSoftwareUpdate;
@property (readonly, nonatomic) id<HFHomeKitSettingsVendor> homeKitSettingsVendor;

+ (id)itemWithAccessoryRepresentableObject:(id)a0 valueSource:(id)a1;

- (BOOL)isAppleTV;
- (BOOL)isHomePod;
- (id)init;
- (BOOL)isAnnounceEnabled;
- (id)copyWithValueSource:(id)a0;
- (id)accessories;
- (id)settings;
- (id)profiles;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)supportsMultiUser;
- (id)room;
- (unsigned long long)homePodVariant;
- (BOOL)isDoorbellChimeEnabled;
- (BOOL)containsActions;
- (id)containedMediaProfileContainers;
- (id)namingComponentForHomeKitObject;
- (unsigned long long)_effectiveLoadingStateForSuggestedLoadingState:(unsigned long long)a0;
- (id)_subclass_updateWithOptions:(id)a0;
- (BOOL)actionsMayRequireDeviceUnlock;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)enableDoorbellChime:(BOOL)a0;
- (id)initWithValueSource:(id)a0 mediaProfileContainer:(id)a1;
- (BOOL)isAudioAnalysisEnabled;
- (BOOL)isHomePodAndIsInMediaSystem;
- (BOOL)isHomePodMediaSystem;
- (BOOL)isSiriDisabled;
- (BOOL)isSiriEndpointAccessory;
- (id)serviceLikeBuilderInHome:(id)a0;
- (id)serviceNameComponents;
- (id)setEnableAnnounce:(BOOL)a0;
- (id)setEnableAudioAnalysis:(BOOL)a0;
- (id)setSiriDisabled:(BOOL)a0;
- (BOOL)isAudioReceiver;
- (id)iconDescriptor:(id)a0;
- (void)_decorateOutcomeWithAccessorySpecificKeys:(id)a0;
- (void)_decorateServiceLikeItemKeys:(id)a0;
- (void)_decorateSettingsSyncKeys:(id)a0;
- (void)_decorateWithMediaSessionKeys:(id)a0;
- (void)_decorateWithMediaSystemSpecificKeys:(id)a0;
- (void)_decorateWithSiriEndpointProfileSpecificKeys:(id)a0;
- (void)_decorateWithSoftwareUpdateStateKeys:(id)a0;
- (void)_decorateWithSymptomFixInFlightKeys:(id)a0;
- (BOOL)_hasOnboarded;
- (BOOL)_isDumbSpeaker;
- (BOOL)_isHAPCapableSpeaker;
- (BOOL)_isInstallingSoftwareUpdate;
- (id)createControlItemsWithOptions:(id)a0;
- (id)initWithValueSource:(id)a0 homeKitObject:(id)a1;
- (BOOL)isAirPort;
- (BOOL)isContainedWithinMediaSystem;
- (BOOL)isHomePodStereoPair;
- (BOOL)isStandaloneHomePod;
- (id)performStandardUpdateWithOptions:(id)a0;
- (unsigned long long)preferredActionOnTap:(id)a0;
- (BOOL)supportsAlarmQuickControls;
- (BOOL)supportsCoordinationForAlarmsAndTimers;
- (BOOL)supportsMediaQuickControls;
- (BOOL)supportsPlaybackState;
- (BOOL)supportsTimerQuickControls;

@end
