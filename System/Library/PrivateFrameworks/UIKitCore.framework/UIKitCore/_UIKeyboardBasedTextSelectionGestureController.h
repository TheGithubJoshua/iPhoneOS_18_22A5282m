@interface _UIKeyboardBasedTextSelectionGestureController : _UIKeyboardTextSelectionGestureController

@property (nonatomic) BOOL delayForceMagnify;
@property (nonatomic) BOOL didLongForcePress;

+ (id)sharedInstance;

- (BOOL)oneFingerForcePressShouldCancelTouchesInView;
- (BOOL)allowOneFingerDeepPress;
- (void)_cleanupDeadGesturesIfNecessary;
- (BOOL)oneFingerForcePressShouldFailWithoutForce;
- (double)oneFingerForcePressMinimumDuration;
- (Class)textInteractionClass;

@end
