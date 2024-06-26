@class UIWindowScene, NSString, NSArray, UIImage, _SBAlertController;
@protocol SAElement;

@interface SBAlertItem : NSObject <SAUILayoutObserving, BSDescriptionProviding, SAElementIdentifying> {
    _SBAlertController *_alertController;
    id<SAElement> _systemApertureElement;
    BOOL _didEverActivate;
    BOOL _didEverDeactivate;
    BOOL _didPlayPresentationSound;
}

@property (readonly, nonatomic) id<SAElement> _existingSystemApertureElement;
@property (nonatomic, setter=_setPresentationState:) unsigned long long _presentationState;
@property (nonatomic, getter=_isPresented, setter=_setPresented:) BOOL presented;
@property (retain, nonatomic, setter=_setHeaderImage:) UIImage *_headerImage;
@property (retain, nonatomic, setter=_setAttachmentImage:) UIImage *_attachmentImage;
@property (nonatomic, setter=_setIgnoresQuietMode:) BOOL _ignoresQuietMode;
@property (retain, nonatomic, setter=_setPreferredActivationWindowScene:) UIWindowScene *_preferredActivationWindowScene;
@property (retain, nonatomic, setter=setIconImage:) UIImage *iconImage;
@property (retain, nonatomic, getter=_iconImagePath) NSString *iconImagePath;
@property (nonatomic) BOOL ignoreIfAlreadyDisplaying;
@property (nonatomic) BOOL allowInSetup;
@property (nonatomic) BOOL pendInSetupIfNotAllowed;
@property (nonatomic) BOOL pendWhileKeyBagLocked;
@property (retain, nonatomic) NSArray *allowedBundleIDs;
@property (nonatomic) BOOL suppressForKeynote;
@property (nonatomic) BOOL allowInCar;
@property (nonatomic) BOOL allowMessageInCar;
@property (nonatomic) BOOL allowDuringTransitionAnimations;
@property (nonatomic) BOOL shouldMaskIcon;
@property (retain, nonatomic) NSString *contactIdentifier;
@property (retain, nonatomic) NSString *contentType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSString *elementIdentifier;

+ (void)activateAlertItem:(id)a0;
+ (id)_alertItemsController;

- (id)init;
- (void)dismiss;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)sound;
- (id)succinctDescription;
- (void)deactivate;
- (void).cxx_destruct;
- (id)succinctDescriptionBuilder;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)_alertController;
- (id)alertController;
- (id)visualStyleForAlertControllerStyle:(long long)a0 traitCollection:(id)a1 descriptor:(id)a2;
- (id)lockLabel;
- (id)shortLockLabel;
- (BOOL)dismissOnLock;
- (void)dismiss:(int)a0;
- (void)willActivate;
- (void)_clearAlertController;
- (id)_createSystemApertureElement;
- (void)_deactivationCompleted;
- (BOOL)_didEverActivate;
- (BOOL)_displayActionButtonOnLockScreen;
- (void)_noteVolumeOrLockPressed;
- (id)_prepareNewAlertControllerWithLockedState:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (id)_publicDescription;
- (id)_systemApertureElement;
- (BOOL)allowInLoginWindow;
- (BOOL)allowLockScreenDismissal;
- (BOOL)allowMenuButtonDismissal;
- (BOOL)behavesSuperModally;
- (void)configure:(BOOL)a0 requirePasscodeForActions:(BOOL)a1;
- (void)deactivateForButton;
- (void)deactivateForReason:(int)a0;
- (void)didActivate;
- (void)didDeactivateForReason:(int)a0;
- (void)didFailToActivate;
- (BOOL)dismissesOverlaysOnLockScreen;
- (void)doCleanupAfterDeactivationAnimation;
- (void)elementLayoutSpecifier:(id)a0 layoutModeDidChange:(long long)a1 reason:(long long)a2;
- (BOOL)forcesModalAlertAppearance;
- (BOOL)hideOnClonedDisplay;
- (void)performUnlockAction;
- (void)playPresentationSound;
- (void)presentationStateDidChangeFromState:(unsigned long long)a0 toState:(unsigned long long)a1;
- (BOOL)reappearsAfterLock;
- (BOOL)reappearsAfterUnlock;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (BOOL)wakeDisplay;
- (void)willDeactivateForReason:(int)a0;
- (void)buttonDismissed;
- (BOOL)_hasActiveKeyboardOnScreen;
- (void)alertItemDidAppear;
- (void)alertItemDidDisappear;
- (int)alertPriority;
- (BOOL)didPlayPresentationSound;
- (BOOL)undimsScreen;
- (BOOL)unlocksScreen;
- (void)willRelockForButtonPress:(BOOL)a0;

@end
