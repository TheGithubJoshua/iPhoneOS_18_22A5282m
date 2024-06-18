@protocol UIKBFocusGuideDelegate;

@interface UIKBFocusGuide : UIFocusGuide

@property (nonatomic) unsigned long long focusHeading;
@property (weak, nonatomic) id<UIKBFocusGuideDelegate> keyboardDelegate;

- (id)focusGuideRegion:(id)a0 preferredFocusEnvironmentsForMovementRequest:(id)a1;
- (void)_didUpdateFocusToPreferredFocusedView;
- (float)_focusPriority;
- (BOOL)_ignoresSpeedBumpEdges;
- (BOOL)_isUnoccludable;
- (BOOL)_isUnclippable;
- (void).cxx_destruct;
- (id)description;

@end
