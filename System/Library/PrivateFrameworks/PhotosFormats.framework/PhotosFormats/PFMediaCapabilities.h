@class NSDictionary;

@interface PFMediaCapabilities : NSObject

@property (retain) NSDictionary *capabilitiesInformation;
@property (retain) NSDictionary *outOfBandHints;

+ (id)stringForSupport:(long long)a0;
+ (id)capabilitiesForCurrentDeviceWithOptions:(id)a0;
+ (id)legacyCapabilities;
+ (id)videoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (void)setRecordSlomoConfiguration:(id)a0;
+ (id)proResVideoCodecTypesEligibleForBackwardsCompatibilityTranscoding;
+ (BOOL)setNewFormatsConfiguration:(long long)a0 fromSource:(long long)a1;
+ (long long)newFormatsConfiguration;
+ (BOOL)videoCodecIsProResEligibleForBackwardsCompatibilityTranscoding:(unsigned int)a0;
+ (id)testCapabilitiesNotSupportingHEIF;
+ (BOOL)currentDeviceIsEligibleForHDRPlayback;
+ (id)recordVideoConfigurationWithValidValues:(id)a0;
+ (unsigned int)currentDeviceHEVCCapabilities;
+ (BOOL)videoCodecIsEligibleForBackwardsCompatibilityTranscoding:(unsigned int)a0;
+ (id)capabilitiesInformationForCurrentDeviceWithOptions:(id)a0;
+ (id)testCapabilitiesNotSupportingHEVC;
+ (id)recordSlomoConfigurationWithValidValues:(id)a0;
+ (void)setRecordVideoConfiguration:(id)a0;
+ (id)capabilitiesForCurrentDevice;

- (void).cxx_destruct;
- (id)description;
- (long long)supportForAdjustmentBaseResources;
- (BOOL)supportsTranscodeChoice;
- (long long)supportValueByApplyingUserDefaultsPeerOverrideToValue:(long long)a0 selector:(SEL)a1;
- (long long)decodingSupportForAVAsset:(id)a0;
- (long long)decodingSupportForFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (id)initWithOpaqueRepresentation:(id)a0;
- (id)opaqueRepresentation;
- (long long)supportForAssetBundleVersion:(id)a0;
- (long long)supportForContainerTypeIdentifier:(id)a0;
- (long long)supportForLivePhotoVersion:(id)a0;
- (long long)supportValueByApplyingUserDefaultsPeerAssetBundleSupportOverrideToValue:(long long)a0 selector:(SEL)a1;
- (BOOL)supportsHDR;
- (long long)userDefaultsPeerAssetBundleSupportOverrideValue;
- (long long)userDefaultsPeerOverrideValue;

@end
