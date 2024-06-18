@class AFPreferences;

@interface UIDictationConnectionPreferences : NSObject

@property (retain, nonatomic) AFPreferences *afPreferences;

+ (id)sharedInstance;

- (id)languageCode;
- (BOOL)isSmartLanguageSelectionEnabled;
- (BOOL)ignoreServerManualEndpointingThreshold;
- (BOOL)isOnDeviceEmojiRecognitionSupportAvailableForLanguage:(id)a0;
- (long long)dataSharingOptInStatus;
- (id)initSingleton;
- (BOOL)isOnDeviceDictationSupportMissingAssetForLanguage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isOnDeviceDictationSupportAvailableForLanguage:(id)a0;
- (BOOL)dictationIsEnabled;
- (id)manualEndpointingThreshold;
- (id)getOfflineDictationStatusForLanguage:(id)a0;
- (BOOL)suppressDataSharingOptIn;
- (id)dictationSLSEnabledLanguages;
- (BOOL)suppressDictationOptIn;
- (void)afPreferencesChanged:(id)a0;

@end
