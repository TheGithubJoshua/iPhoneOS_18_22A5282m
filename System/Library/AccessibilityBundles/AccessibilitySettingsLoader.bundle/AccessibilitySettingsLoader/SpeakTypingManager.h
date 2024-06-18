@interface SpeakTypingManager : NSObject

@property (nonatomic, getter=isRegisteredForAppNotifications) BOOL registeredForAppNotifications;

+ (id)sharedInstance;
+ (void)initializeMonitoring;

- (void)updateForCurrentTypingFeedbackStatus;
- (void)_notifyToInitializeServerConnection;
- (void)_registerForPhoneticFeedbackAXSettingsUpdate;
- (void)_registerForWordFeedbackAXSettingsUpdate;
- (void)_registerForLetterFeedbackAXSettingsUpdate;
- (void)updateForCurrentQuickTypeFeedbackStatus;
- (void)updateForCurrentWordFeedbackStatus;
- (void)_installSpeakTypingSafeCategoriesIfNeeded;
- (void)_registerForQuickTypePredictionFeedbackAXSettingsUpdate;
- (void)speakTypingLoadAccessibilityForExistingPredictions;

@end
