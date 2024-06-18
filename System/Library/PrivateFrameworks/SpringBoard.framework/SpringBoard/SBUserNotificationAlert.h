@class NSURL, SBSUserNotificationImageDefinition, BKSProcessAssertion, NSMapTable, SBUISound, NSDictionary, NSObject, UIAlertControllerVisualStyle, NSString, _SBLegacyRemoteAlertContentHostViewController, NSTimer, SBSUserNotificationSystemApertureContentDefinition, NSArray, _SBSUICFUserNotificationContentHostViewController;
@protocol OS_dispatch_source, BSInvalidatable;

@interface SBUserNotificationAlert : SBAlertItem <UITextFieldDelegate> {
    NSString *_alertSource;
    int _originatingPID;
    unsigned int _replyPort;
    NSObject<OS_dispatch_source> *_portWatcher;
    NSObject<OS_dispatch_source> *_expirationTimer;
    BOOL _sentResponse;
    BOOL _cleanedUp;
    int _token;
    int _timeout;
    unsigned long long _requestFlags;
    double _soundRepeatDuration;
    NSTimer *_soundStopTimer;
    double _creationTime;
    int _defaultButtonTag;
    int _unlockActionButtonTag;
    unsigned int _replyFlags;
    _SBSUICFUserNotificationContentHostViewController *_extensionContentViewController;
    _SBLegacyRemoteAlertContentHostViewController *_viewServiceContentViewController;
    NSArray *_textFieldDefinitions;
    NSArray *_customButtonDefinitions;
    long long _defaultButtonActionStyle;
    long long _alternateButtonActionStyle;
    long long _otherButtonActionStyle;
    unsigned char _allowedInLoginWindow : 1;
    unsigned char _canceled : 1;
    unsigned char _isActivated : 1;
    unsigned char _aboveLock : 1;
    unsigned char _displayActionButtonOnLockScreen : 1;
    unsigned char _dismissOnLock : 1;
    unsigned char _dontDismissOnUnlock : 1;
    unsigned char _behavesSuperModally : 1;
    unsigned char _allowMenuButtonDismissal : 1;
    unsigned char _wakeDisplay : 1;
    unsigned char _forcesModalAlertAppearance : 1;
    unsigned char _dismissesOverlaysOnLockScreen : 1;
    unsigned char _disableIdleSleepWhileVisible : 1;
    unsigned char _hideOnClonedDisplay : 1;
    unsigned char _configuredLocked : 1;
    unsigned char _configuredNeedsPasscode : 1;
    unsigned char _defaultResponseAppLaunchWaitingForPasscode : 1;
    unsigned char _deactivatingForPresentationUpdate : 1;
    SBUISound *_sound;
    BKSProcessAssertion *_processAssertion;
    unsigned char _allowLockscreenDismissal : 1;
    id<BSInvalidatable> _idleTimerDisableAssertion;
    NSMapTable *_imagesByDefinition;
    UIAlertControllerVisualStyle *_visualStyle;
}

@property (retain) id keyboardTypes;
@property (retain) id autocapitalizationTypes;
@property (retain) id autocorrectionTypes;
@property (retain) id textFieldTitles;
@property (retain) id textFieldValues;
@property (retain) NSString *soundPath;
@property unsigned int soundID;
@property unsigned int soundIDBehavior;
@property (retain) NSDictionary *vibrationPattern;
@property long long soundAlertType;
@property (retain) NSString *soundAlertTopic;
@property (retain) NSString *alertHeader;
@property (retain) id alertMessage;
@property (retain) NSString *alertMessageDelimiter;
@property (retain) NSString *lockScreenAlertHeader;
@property (retain) id lockScreenAlertMessage;
@property (retain) NSString *lockScreenAlertMessageDelimiter;
@property (retain) NSString *defaultButtonTitle;
@property (retain) NSString *alternateButtonTitle;
@property (retain) NSString *otherButtonTitle;
@property (retain) NSString *defaultResponseLaunchBundleID;
@property (retain) NSURL *defaultResponseLaunchURL;
@property (retain) SBSUserNotificationImageDefinition *headerImageDefinition;
@property (retain) SBSUserNotificationImageDefinition *iconImageDefinition;
@property (retain) SBSUserNotificationImageDefinition *attachmentImageDefinition;
@property BOOL prefersSystemAperturePresentation;
@property (retain) SBSUserNotificationSystemApertureContentDefinition *systemApertureContentDefinition;
@property (retain) NSString *remoteViewControllerClassName;
@property (retain) NSString *remoteServiceBundleIdentifier;
@property (retain) NSString *extensionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_cleanup;
- (id)sound;
- (id)clientIdentifier;
- (void)cancel;
- (int)token;
- (id)iconImage;
- (id)elementIdentifier;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (id)visualStyleForAlertControllerStyle:(long long)a0 traitCollection:(id)a1 descriptor:(id)a2;
- (BOOL)dismissOnLock;
- (id)_headerImage;
- (void)willActivate;
- (void)dismissIfNecessaryWithResponse:(int)a0;
- (void)updateWithMessage:(id)a0 requestFlags:(int)a1;
- (id)_safeLocalizedValue:(id)a0 withBundle:(id)a1;
- (void)_activateApplication:(id)a0 withURL:(id)a1;
- (id)_attachmentImage;
- (void)_cleanupCustomContentViewControllers;
- (void)_clearRemoteViewControllerIfPresent;
- (id)_createSystemApertureElement;
- (BOOL)_displayActionButtonOnLockScreen;
- (id)_imageDefinitionForPath:(id)a0 catalogPath:(id)a1 catalogImageKey:(id)a2;
- (id)_imageForDefinition:(id)a0;
- (void)_noteVolumeOrLockPressed;
- (id)_parseAssetDefinition:(id)a0;
- (id)_parseCustomButtonDefinitions:(id)a0 locBundle:(id)a1;
- (id)_parseLegacyTextFieldDefinitions:(id)a0 locBundle:(id)a1;
- (id)_parseSystemApertureContentDefinition:(id)a0;
- (id)_parseTextFieldDefinitions:(id)a0 locBundle:(id)a1;
- (id)_prepareNewAlertControllerWithLockedState:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)_publicDescription;
- (void)_sendResponseAndCleanUp:(int)a0;
- (void)_sendResponseAndCleanUp:(int)a0 customButtonResponse:(int)a1;
- (void)_setActivated:(BOOL)a0;
- (long long)_uiAlertActionLayoutDirectionFromSBUserNotificationButtonLayoutDirection:(unsigned int)a0;
- (long long)_uiAlertActionStyleFromSBUserNotificationButtonPresentationStyle:(int)a0;
- (BOOL)allowInLoginWindow;
- (BOOL)allowLockScreenDismissal;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)behavesSuperModally;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)didDeactivateForReason:(int)a0;
- (void)didFailToActivate;
- (void)dismissIfNecessaryWithResponse:(int)a0 customButtonResponse:(int)a1;
- (BOOL)dismissesOverlaysOnLockScreen;
- (void)doCleanupAfterDeactivationAnimation;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)hideOnClonedDisplay;
- (id)initWithMessage:(id)a0 replyPort:(unsigned int)a1 requestFlags:(int)a2 auditToken:(id)a3;
- (id)parseVisualStyleForMessage:(id)a0;
- (void)performUnlockAction;
- (void)presentationStateDidChangeFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (BOOL)shouldShowInLockScreen;
- (BOOL)wakeDisplay;
- (void)willDeactivateForReason:(int)a0;

@end