@protocol TIPreferencesControllerActions;

@interface UIKeyboardPreferencesController : NSObject

@property (readonly, nonatomic) UIKeyboardPreferencesController<TIPreferencesControllerActions> *preferencesActions;
@property long long handBias;
@property long long compactAssistantBarPersistentLocation;
@property long long visceral;
@property BOOL enableProKeyboard;

+ (id)sharedPreferencesController;

- (void)preferencesControllerChanged:(id)a0;
- (BOOL)allEnabledInputModesAreValid;
- (id)init;
- (id)valueForPreferenceKey:(id)a0;
- (id)methodSignatureForSelector:(SEL)a0;
- (BOOL)defaultGlobeAsEmojiKeySetting;
- (void)setValue:(id)a0 forPreferenceKey:(id)a1;
- (void)setLastUsedDictationLanguages:(id)a0;
- (void)setLanguageAwareInputModeLastUsed:(id)a0;
- (BOOL)spaceConfirmationEnabled;
- (BOOL)boolForPreferenceKey:(id)a0;
- (void)setEnabledDictationLanguages:(id)a0;
- (BOOL)inputModeSupportsCrescendo:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)setValue:(id)a0 forKey:(int)a1;
- (BOOL)useHardwareGlobeKeyAsEmojiKey;
- (id)valueForKey:(int)a0;
- (void)touchSynchronizePreferencesTimer;
- (void)synchronizePreferences;
- (double)rivenSizeFactor:(double)a0;
- (BOOL)currentInputModeSupportsCrescendo;
- (BOOL)isPreferenceKeyLockedDown:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)setDictationAutoPunctuation:(BOOL)a0;
- (BOOL)isPasswordAutoFillAllowed;
- (void)performedFirstReachableKeyboardInteraction;
- (void)_configurePreferences;
- (BOOL)boolForKey:(int)a0;
- (void)dealloc;
- (BOOL)crescendoEnabled;
- (void)saveInputModes:(id)a0;
- (BOOL)isFirstReachableKeyboardInteraction;

@end
