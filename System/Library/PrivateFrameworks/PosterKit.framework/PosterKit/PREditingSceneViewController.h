@class NSMutableDictionary, PRComplicationDescriptor, UINavigationController, PREditingSceneClientSettingsDiffInspector, NSMutableArray, UIView, BSUIVibrancyConfiguration, NSString, NSHashTable, WFWidgetConfigurationViewController, PRSServerPosterPath, NSArray, PREditingSessionModifications, ATXComplicationSet;
@protocol PREditingSceneViewControllerDelegate, BSInvalidatable;

@interface PREditingSceneViewController : PRSceneViewController <PRComplicationContainerViewControllerDelegate, PRComplicationGalleryViewControllerDelegate, PRInlineComplicationGalleryViewControllerDelegate, UIGestureRecognizerDelegate, WFWidgetConfigurationViewControllerDelegate, UISheetPresentationControllerDelegate> {
    NSHashTable *_observers;
    BOOL _didFinalize;
}

@property (retain, nonatomic) PREditingSceneClientSettingsDiffInspector *sceneClientSettingsDiffInspector;
@property (retain, nonatomic) NSMutableArray *complicationContainerViewControllers;
@property (nonatomic, getter=isAlternateDateEnabled) BOOL alternateDateEnabled;
@property (retain, nonatomic) ATXComplicationSet *inlineComplicationSuggestionSet;
@property (retain, nonatomic) NSArray *graphicComplicationSuggestionSets;
@property (retain, nonatomic) NSArray *selectedGraphicComplications;
@property (retain, nonatomic) PRComplicationDescriptor *selectedInlineComplication;
@property (retain, nonatomic) WFWidgetConfigurationViewController *presentedWidgetConfigurationViewController;
@property (retain, nonatomic) PRComplicationDescriptor *widgetBeingConfigured;
@property (retain, nonatomic) UINavigationController *presentedComplicationsGallery;
@property (retain, nonatomic) UINavigationController *presentedInlineComplicationsGallery;
@property (copy, nonatomic) NSArray *presentationDismissalGestureViews;
@property (nonatomic) struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leadingTopButtonFrame; struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trailingTopButtonFrame; } lastValidDelegateTopButtonLayout;
@property (nonatomic, getter=isHero) BOOL hero;
@property (nonatomic, getter=isDismissing) BOOL dismissing;
@property (nonatomic, getter=isTornDown) BOOL tornDown;
@property (retain, nonatomic) BSUIVibrancyConfiguration *vibrancyConfiguration;
@property (retain, nonatomic) UIView *inlineComplicationGestureView;
@property (retain, nonatomic) UIView *complicationsAddGestureView;
@property (nonatomic, getter=isClientPresentingModalViewController) BOOL clientPresentingModalViewController;
@property (nonatomic, getter=isDraggingComplication) BOOL draggingComplication;
@property (nonatomic) long long focusedElement;
@property (nonatomic) BOOL clientHasBackgroundTasks;
@property (retain, nonatomic) id<BSInvalidatable> backgroundTaskIdleTimerAssertion;
@property (retain, nonatomic) NSMutableDictionary *engagementCountsForViewedSuggestedComplications;
@property (retain, nonatomic) PRSServerPosterPath *path;
@property (retain, nonatomic) UIView *saveIndicatorContainerView;
@property (weak, nonatomic) id<PREditingSceneViewControllerDelegate> delegate;
@property (nonatomic) long long variant;
@property (nonatomic) long long acceptButtonType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } leadingTopButtonFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } trailingTopButtonFrame;
@property (nonatomic, getter=areControlsHidden) BOOL controlsHidden;
@property (nonatomic) BOOL usesEditingLayout;
@property (nonatomic) BOOL showsContentWhenReady;
@property (nonatomic) BOOL allowsTransparentContent;
@property (nonatomic, getter=isContentHidden) BOOL contentHidden;
@property (copy, nonatomic) PREditingSessionModifications *modifications;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)role;

- (void)presentationControllerDidDismiss:(id)a0;
- (void)_finalize;
- (void)removeObserver:(id)a0;
- (void)scene:(id)a0 didReceiveActions:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)prefersStatusBarHidden;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_teardown;
- (void)scene:(id)a0 didUpdateClientSettingsWithDiff:(id)a1 oldClientSettings:(id)a2 transitionContext:(id)a3;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)addObserver:(id)a0;
- (void)_dismissWithAction:(long long)a0;
- (void)_configureInitialSceneSettings:(id)a0;
- (BOOL)_presentIntentConfigurationForComplicationDescriptorIfPossible:(id)a0;
- (void)complicationGalleryViewController:(id)a0 didBeginDraggingComplication:(id)a1;
- (void)_sceneContentReadinessDidChange;
- (void)inlineComplicationGalleryViewController:(id)a0 didToggleAlternateDate:(BOOL)a1;
- (BOOL)_areComplicationsDisallowed;
- (BOOL)_canAddComplicationDescriptor:(id)a0;
- (void)_complicationsSceneCreated:(id)a0;
- (id)_configureNavigationControllerForGalleryViewController:(id)a0;
- (void)_configureUsingPath:(id)a0;
- (BOOL)_hasGraphicComplications;
- (void)_insertGraphicComplication:(id)a0 atIndex:(long long)a1 animated:(BOOL)a2;
- (BOOL)_isPosterCoveredByModalPresentation;
- (BOOL)_posterUserInfo:(id)a0 containsUserChangesFromPrevious:(id)a1;
- (void)_prefetchComplicationSuggestions;
- (void)_presentComplicationGallery;
- (void)_presentFullAlertForComplication:(id)a0;
- (void)_presentInlineComplicationGallery;
- (void)_presentIntentConfigurationForComplicationDescriptor:(id)a0;
- (id)_presentationBackgroundColor;
- (BOOL)_shouldAllowAddComplicationsTapGesture;
- (BOOL)_shouldAllowInlineComplicationTapGesture;
- (BOOL)_shouldDepthEffectBeDisallowed;
- (struct PREditingSceneViewControllerTopButtonLayout { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; })_topButtonLayout;
- (void)_unregisterComplicationContainerViewControllerDelegates;
- (void)_updateAddComplicationsTapGestureAllowed;
- (void)_updateComplicationsVibrancyConfiguration;
- (void)_updatePresentationDismissalGestureView;
- (void)_updateSceneSettings:(id)a0 transitionContext:(id)a1;
- (void)_updateSceneSettingsForDepthEffectDisallowed;
- (void)_updateSceneSettingsForPosterCoveredByModalPresentation;
- (id)addComplicationGestureViewForElement:(unsigned long long)a0 tapAction:(SEL)a1 initiallyAllowed:(BOOL)a2;
- (void)addComplicationTapped:(id)a0;
- (void)addLongSaveOperationIndicator;
- (BOOL)complicationContainerViewController:(id)a0 canAddGraphicComplication:(id)a1;
- (void)complicationContainerViewController:(id)a0 didCancelDropOperationForComplication:(id)a1;
- (void)complicationContainerViewController:(id)a0 didDropComplication:(id)a1 atIndex:(long long)a2;
- (void)complicationContainerViewController:(id)a0 didEditComplication:(id)a1;
- (void)complicationContainerViewController:(id)a0 didRemoveComplication:(id)a1;
- (void)complicationContainerViewControllerDidTapAdd:(id)a0;
- (void)complicationContainerViewControllerDidTapInlineGallery:(id)a0;
- (void)complicationGalleryViewController:(id)a0 didAddComplication:(id)a1;
- (void)complicationGalleryViewController:(id)a0 didEndDraggingComplication:(id)a1 withOperation:(unsigned long long)a2;
- (void)complicationGalleryViewControllerDidFinish:(id)a0;
- (void)dismissAnyPresentedComplicationGalleryAnimated:(BOOL)a0;
- (void)dismissWithAction:(long long)a0;
- (id)initWithProvider:(id)a0 contents:(id)a1 configurableOptions:(id)a2 configuredProperties:(id)a3 additionalInfo:(id)a4;
- (void)inlineComplicationGalleryViewController:(id)a0 didSelectComplication:(id)a1;
- (void)inlineComplicationGalleryViewControllerDidFinish:(id)a0;
- (void)inlineComplicationGestureViewTapped:(id)a0;
- (void)modalPresentationDismissGestureDidFire:(id)a0;
- (void)presentedViewControllerDismissalDidEnd:(id)a0;
- (void)presentedViewControllerDismissalWillBegin:(id)a0;
- (void)removeLongSaveOperationIndicator;
- (void)setContentHidden:(BOOL)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)setContentHidden:(BOOL)a0 animationSettings:(id)a1 completion:(id /* block */)a2;
- (void)setControlsHidden:(BOOL)a0 animated:(BOOL)a1;
- (void)setControlsHidden:(BOOL)a0 animationSettings:(id)a1;
- (void)setSelectedGraphicComplications:(id)a0 animated:(BOOL)a1;
- (void)setUsesEditingLayout:(BOOL)a0 animated:(BOOL)a1;
- (void)setUsesEditingLayout:(BOOL)a0 animationSettings:(id)a1;
- (void)widgetConfigurationViewController:(id)a0 didFinishWithIntent:(id)a1;

@end