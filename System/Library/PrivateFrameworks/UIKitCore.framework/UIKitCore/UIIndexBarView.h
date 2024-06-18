@class UIColor, UISelectionFeedbackGenerator, NSArray, NSString, UIAccessibilityHUDGestureManager;
@protocol UIIndexBarViewDelegate, UIIndexBarVisualStyle;

@interface UIIndexBarView : UIControl <UIAccessibilityHUDGestureDelegate>

@property (nonatomic) double cachedDisplayHighlightedIndex;
@property (copy, nonatomic) UIColor *nonTrackingBackgroundColor;
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator;
@property (retain, nonatomic) UIAccessibilityHUDGestureManager *axHUDGestureManager;
@property (copy, nonatomic) NSArray *entries;
@property (weak, nonatomic) id<UIIndexBarViewDelegate> delegate;
@property (copy, nonatomic) UIColor *indexColor;
@property (copy, nonatomic) UIColor *trackingBackgroundColor;
@property (nonatomic) long long highlightStyle;
@property (nonatomic) double highlightedIndex;
@property (nonatomic) double deflection;
@property (retain, nonatomic) id<UIIndexBarVisualStyle> visualStyle;
@property (retain, nonatomic) NSArray *displayEntries;
@property (readonly, nonatomic) double displayHighlightedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerVisualStyle:(Class)a0 forIdiom:(long long)a1;
+ (void)makeIndexBarView:(id *)a0 containerView:(id *)a1 forTraits:(id)a2;
+ (id)visualStyleForIndexBarView:(id)a0;

- (void)_updateBackgroundColor;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (BOOL)_canDrawContent;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)endTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (BOOL)beginTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)backgroundColor;
- (void)cancelTrackingWithEvent:(id)a0;
- (BOOL)continueTrackingWithTouch:(id)a0 withEvent:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_accessibilityHUDGestureManager:(id)a0 HUDItemForPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)_selectEntry:(id)a0 atIndex:(long long)a1;
- (void)setBackgroundColor:(id)a0;
- (BOOL)canBecomeFocused;
- (void)didMoveToWindow;
- (BOOL)_accessibilityHUDGestureManager:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_accessibilityHUDGestureManager:(id)a0 gestureLiftedAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)tintColorDidChange;
- (BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)a0;
- (BOOL)_defaultCanBecomeFocused;
- (BOOL)_didSelectEntry:(id)a0 atIndex:(long long)a1;
- (void)_handleTouches:(id)a0 withEvent:(id)a1;
- (void)_largeContentViewerEnabledStatusDidChange:(id)a0;
- (void)_setupAXHUDGestureIfNecessary;
- (void)_updateDisplayEntries;
- (void)_userInteractionStarted;
- (void)_userInteractionStopped;
- (void)resetDeflection:(BOOL)a0;

@end
