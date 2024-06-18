@interface _UIKeyboardUsageTracking : NSObject

+ (void)predictionViewState:(BOOL)a0 forInputMode:(id)a1;
+ (void)countReachableKeyboardHandBiasChangeToBias:(long long)a0;
+ (void)keyboardExtensionCrashed;
+ (void)keyboardGestureSelectedPredictiveInputCandidate;
+ (void)signupPasswordFromKeyboardIncrement;
+ (void)normalPunctuationKeyCount;
+ (void)redoKeyCount;
+ (void)showCharacterPreviewPreference:(BOOL)a0;
+ (void)inputSwitcherSetPredictionPreference:(BOOL)a0;
+ (void)showLowercaseKeyplanePreference:(BOOL)a0;
+ (void)keyboardGestureTwoFingerTap:(BOOL)a0 withTapCount:(int)a1;
+ (void)keyboardGestureOneFingerForcePress:(BOOL)a0 withPressCount:(int)a1;
+ (void)loginPasswordFromKeyboardIncrement;
+ (void)loginPasswordFromAutofillIncrement;
+ (void)keyboardTotalOnScreenTime:(double)a0 orientation:(long long)a1;
+ (void)countKeystrokeForReachableKeyboardWithBias:(long long)a0;
+ (void)appAutofillFilled;
+ (void)restAndTypeTriggered;
+ (void)letterCaseToggleIncrement;
+ (void)signupPasswordFromAutofillIncrement;
+ (void)keyboardGestureOneFingerForcePan:(BOOL)a0;
+ (void)keyboardPerformanceFromTouchRelease:(double)a0 until:(double)a1;
+ (void)selectedPredictiveInputCandidate:(id)a0 isAutocorrection:(BOOL)a1 index:(unsigned long long)a2;
+ (void)appAutofillCredentialFromSafariUI;
+ (void)keyboardExtensionsOnDevice;
+ (void)keyboardSetToInputMode:(id)a0 fromPrevious:(id)a1;
+ (void)showVariantsIncrement;
+ (void)keyboardExtensionPrimaryLanguageChanged;
+ (void)singleStringKeyFlickUpCount;
+ (void)appAutofillDetectedDecrement;
+ (void)keyboardSupportsTouch:(BOOL)a0;
+ (void)keyboardReachabilityDistribution:(double)a0;
+ (void)dualStringsKeyFlickUpCount;
+ (void)appAutofillDetectedIncrement;
+ (void)keyboardGestureSetPredictionPreference:(BOOL)a0;
+ (void)panAlternateKeyFlickDownCount;
+ (void)appAutofillExtraKeyTapped;
+ (void)variantDeleteIncrement;
+ (void)undoKeyCount;
+ (void)keyboardPerformanceFromTouchStart:(double)a0 until:(double)a1;

@end
