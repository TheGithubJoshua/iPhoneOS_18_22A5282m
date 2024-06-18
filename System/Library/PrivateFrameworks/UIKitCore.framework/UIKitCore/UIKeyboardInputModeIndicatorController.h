@class UIDelayedAction, NSString, NSDate;
@protocol UIKeyboardInputModeIndicatorControllerDelegate;

@interface UIKeyboardInputModeIndicatorController : NSObject

@property (retain, nonatomic) UIDelayedAction *dismissAction;
@property (retain, nonatomic) UIDelayedAction *idleAction;
@property (retain, nonatomic) NSDate *lastPresentedTime;
@property (retain, nonatomic) NSString *focusedSceneID;
@property (weak, nonatomic) id<UIKeyboardInputModeIndicatorControllerDelegate> delegate;

+ (BOOL)enabled;

- (void)didBecomeActive;
- (void)willResignActive;
- (void)setNeedsIndicatorShow;
- (BOOL)enabled;
- (void)keyPressed;
- (void)clear;
- (void)focusChanged;
- (void)showIndicator;
- (void)presentIndicator;
- (void).cxx_destruct;
- (void)keyboardWindowEnabled:(BOOL)a0;
- (void)hardwareKeyboardDettached;
- (void)dismissIndicator;
- (void)focusedSceneChanged:(id)a0;
- (void)idle;
- (void)inputModeChanged;

@end
