@protocol UIKeyboardVisualModeManagerDelegate;

@interface UIKeyboardVisualModeManager : NSObject

@property (nonatomic) int lastVisualMode;
@property (weak, nonatomic) id<UIKeyboardVisualModeManagerDelegate> delegate;

+ (id)visualModeLog;
+ (BOOL)softwareKeyboardAllowedForActiveKeyboardSceneDelegate;
+ (BOOL)softwareKeyboardAllowedOnExternalScreen;
+ (BOOL)windowingSoftwareKeyboardAllowed;

- (id)init;
- (BOOL)windowingModeEnabled;
- (BOOL)expectedInputModeIsSpecialized;
- (void)enhancedWindowingModeDidChange:(id)a0;
- (BOOL)textEntryFocusOnExternalDisplay;
- (int)visualMode;
- (void).cxx_destruct;
- (BOOL)useVisualModeWindowed;
- (void)keyboardCameraNotification:(id)a0;

@end
