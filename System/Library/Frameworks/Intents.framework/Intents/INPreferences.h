@class NSString, _INVocabularyConnection;

@interface INPreferences : NSObject {
    _INVocabularyConnection *_assistantdConnection;
}

@property (copy, setter=_setCachedSiriLanguageCode:) NSString *_cachedSiriLanguageCode;

+ (id)sharedPreferences;
+ (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
+ (id)siriLanguageCode;
+ (void)requestSiriAuthorization:(id /* block */)a0;
+ (long long)siriAuthorizationStatus;

- (id)init;
- (id)_init;
- (id)_siriLanguageCode;
- (long long)_siriAuthorizationStatus;
- (void)_verifyProcessCanDonateIntentWithName:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)assertThisProcessHasSiriEntitlement;
- (void)_THROW_EXCEPTION_FOR_PROCESS_MISSING_ENTITLEMENT_com_apple_developer_siri;
- (BOOL)_weAreRunningAsAnExtension;
- (void)_updateWithExtensionContext:(id)a0;
- (void)requestSiriAuthorization:(id /* block */)a0;

@end
