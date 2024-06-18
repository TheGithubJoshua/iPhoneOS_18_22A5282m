@interface CKVAssistantSettingsBridge : NSObject

+ (BOOL)isCustomerInstall;
+ (BOOL)isSiriUODSupported;
+ (BOOL)isASRSupported;
+ (id)currentDictationLanguageCodes;
+ (id)getConformingSharedUserIds;
+ (BOOL)isSpeechProfileEnabled;
+ (BOOL)isDictationEnabled;
+ (id)currentSiriLanguageCode;
+ (BOOL)isAssistantEnabled;
+ (BOOL)isUnifiedAssetNamespaceEnabled;
+ (BOOL)isSiriMuxSupported;
+ (BOOL)isLinkVocabularyEnabled;

- (id)init;

@end
