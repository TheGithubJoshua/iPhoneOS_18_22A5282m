@class NSArray, UIInputWindowController, NSMutableArray;

@interface UIInputWindowControllerHosting : NSObject {
    NSMutableArray *_hostingItems;
    unsigned long long _currentState;
}

@property (nonatomic) int extraHostsRequired;
@property (weak, nonatomic) UIInputWindowController *owner;
@property (readonly, retain, nonatomic) NSArray *allHostingItems;
@property (nonatomic) BOOL requiresConstraintUpdate;

- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_inputViewPadding;
- (void)removeInputAssistantHostView;
- (void)extendKeyboardBackdropHeight:(double)a0 withDuration:(double)a1;
- (void)resetInputViewVisibility;
- (void)disableViewSizingConstraints:(unsigned long long)a0 forNewView:(id)a1;
- (void)layoutIfNeeded;
- (void)updateViewSizingConstraints;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })visibleFrame;
- (void)initializeTranslateGestureRecognizerIfNecessary;
- (id)expectedPlacementForHost:(id)a0;
- (id)placementForHost:(id)a0;
- (void)resetBackdropHeight;
- (void)updateEmptyHeightConstraint;
- (void)clearInputViewEdgeConstraints;
- (void)unloadForPlacement;
- (void)clearInputAssistantViewEdgeConstraints;
- (void)clearInputAccessoryViewEdgeConstraints;
- (void)_updateBackdropViews;
- (void)updateConstraintInsets;
- (BOOL)useCrescendoHostingItem;
- (void)removeAllAnimations;
- (BOOL)host:(id)a0 isForPurpose:(unsigned long long)a1;
- (void)setNeedsLayout;
- (id)subPlacementFromPlacement:(id)a0 forHost:(id)a1;
- (void).cxx_destruct;
- (id)itemForPurpose:(unsigned long long)a0;
- (id)initWithHost:(id)a0;
- (void)updateViewConstraints;
- (void)performForInputAccessoryBackdropViews:(id /* block */)a0;
- (unsigned long long)indexOfHost:(id)a0;
- (void)reloadForPlacementForInputViewSet:(id)a0;

@end
