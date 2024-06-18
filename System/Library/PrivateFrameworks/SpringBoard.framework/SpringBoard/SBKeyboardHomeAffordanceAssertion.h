@class UIWindow;

@interface SBKeyboardHomeAffordanceAssertion : NSObject

@property (weak, nonatomic) UIWindow *sourceWindow;
@property (nonatomic) double additionalEdgeMargin;

+ (id)assertionForGestureWindow:(id)a0;

- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithGestureWindow:(id)a0;

@end
