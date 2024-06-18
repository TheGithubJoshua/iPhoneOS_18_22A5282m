@class UIView, NSString, UIKBVisualEffectView, TUISystemInputAssistantLayoutStandard, TUISystemInputAssistantLayout, UITextInputAssistantItem, TUISystemInputAssistantPageView, UIKBRenderConfig, TUIAssistantButtonBarView, TUIPredictionView, TUICandidateView;
@protocol _UIButtonBarAppearanceDelegate, TUISystemInputAssistantStyle, TUISystemInputAssistantViewDelegate;

@interface TUISystemInputAssistantView : UIView <TUIAssistantButtonBarViewDelegate, TUISystemInputAssistantPageViewDelegate> {
    BOOL _buttonBarItemsExpanded;
    BOOL _needsValidation;
    int _needsValidationGuard;
}

@property (readonly, nonatomic) TUIPredictionView *predictionView;
@property (readonly, nonatomic) TUICandidateView *candidateView;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } containerFrame;
@property (retain, nonatomic) UIKBVisualEffectView *backdropView;
@property (retain, nonatomic) TUIAssistantButtonBarView *unifiedButtonBar;
@property (retain, nonatomic) TUISystemInputAssistantPageView *centerPageView;
@property (retain, nonatomic) TUISystemInputAssistantLayoutStandard *defaultLayout;
@property (retain, nonatomic) id<_UIButtonBarAppearanceDelegate> appearanceDelegate;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig;
@property (retain, nonatomic) TUIAssistantButtonBarView *leftButtonBar;
@property (retain, nonatomic) TUIAssistantButtonBarView *rightButtonBar;
@property (weak, nonatomic) id<TUISystemInputAssistantViewDelegate> delegate;
@property (retain, nonatomic) TUISystemInputAssistantLayout *layout;
@property (retain, nonatomic) id<TUISystemInputAssistantStyle> style;
@property (nonatomic) BOOL backgroundVisible;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } overrideSafeAreaInsets;
@property (retain, nonatomic) UIView *centerView;
@property (retain, nonatomic) UIView *secondaryView;
@property (nonatomic) BOOL centerViewHidden;
@property (nonatomic) BOOL scrollEnabled;
@property (readonly, nonatomic) BOOL showsCenterView;
@property (nonatomic) double centerViewWidth;
@property (nonatomic) BOOL showsExpandableButtonBarItems;
@property (nonatomic) BOOL hidesExpandableButton;
@property (nonatomic) BOOL showsButtonBarItemsInline;
@property (retain, nonatomic) UITextInputAssistantItem *inputAssistantItem;
@property (readonly, nonatomic) BOOL isInputAssistantItemHidden;
@property (retain, nonatomic) UITextInputAssistantItem *systemInputAssistantItem;
@property (readonly, nonatomic) BOOL isTransitioning;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setNeedsValidation;
- (void)_setRenderConfig:(id)a0;
- (BOOL)_swiftPlaygroundsWorkaroundEnabled;
- (void)_exchangeCenterViewIfNecessaryForCompatibility;
- (void)transitionToLayout:(id)a0 withStyle:(id)a1 start:(id /* block */)a2;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsets;
- (BOOL)_shouldHostCenterViewOutsidePageView;
- (id)_currentLayoutViewSet;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_hostedCenterView;
- (void)_didTapExpandButton:(id)a0;
- (BOOL)_areButtonBarItemsVisible;
- (void)_updateBarButtonGroups;
- (void)assistantPageView:(id)a0 didSwitchToSecondaryViewVisible:(BOOL)a1;
- (void).cxx_destruct;
- (void)_setButtonBarItemsExpanded:(BOOL)a0 animationType:(unsigned long long)a1;
- (void)_updateVisualProvider;
- (BOOL)validateIfNeeded;
- (void)assistantButtonBarView:(id)a0 wantsToShowCollapsedItemGroup:(id)a1 fromButton:(id)a2;
- (BOOL)shouldSkipValidation;
- (void)_updateExpandableButtonBarItems;
- (id)_createUnifiedButtonBarIfNecessary;
- (void)layoutSubviews;
- (void)_updateStyle;
- (void)_updateBarButtonGroupsIfNeeded;
- (void)setButtonBarItemsExpanded:(BOOL)a0 animated:(BOOL)a1;

@end
