@class NSNumber, NSMutableDictionary, AXCapabilityManager;

@interface PSCapabilityManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *overrides;
@property (retain, nonatomic) NSNumber *overrideForAllBoolValues;
@property (retain, nonatomic) AXCapabilityManager *axCapabilityManager;

+ (id)sharedManager;

- (BOOL)hasCapabilities:(id)a0;
- (id)supportPSPhoneNoiseCancellationCapability;
- (id)init;
- (id)supportsContinuityCamera;
- (id)capabilityAnswer:(id)a0;
- (id)supportsNightShiftCapability;
- (void)resetOverrides;
- (id)supportsWalletApplePayCapability;
- (id)supportsPSTTYCapability;
- (id)supportsPSCellularDataPlanCapability;
- (id)supportsPSTrackpadAndMouseCapability;
- (void)setOverrideValue:(id)a0 forKey:(id)a1;
- (id)preferencesCapabilityAnswer:(id)a0;
- (id)supportsDisplayZoomCapability;
- (id)supportsPSExposureNotificationsCapability;
- (id)supportsInStoreDemoModeCapability;
- (id)supportsAutoWhiteBalanceCapability;
- (id)supportsRaiseToWakeCapability;
- (id)supportsListeningExperienceCapbility;
- (void).cxx_destruct;
- (id)supportsPSDeveloperSettingsCapability;
- (id)supportsRetailKioskModeCapability;
- (id)supportsPSPencilCapability;
- (id)supportsPSTrackpadOnlyCapability;
- (BOOL)capabilityBoolAnswer:(id)a0;
- (id)supportPSPhotoFormatProRAWCapability;
- (id)supportsInEDUModeCapability;
- (id)applicationDisplayIdentifiers;
- (id)supportsPictureInPictureCapability;
- (id)supportPSPhotoFormatEnhancedProRAWCapability;
- (id)supportsPSHomeScreenPhoneCapability;
- (id)supportPSRecordHDRVideoCapability;
- (id)supportsLightningAdapterCapability;

@end
