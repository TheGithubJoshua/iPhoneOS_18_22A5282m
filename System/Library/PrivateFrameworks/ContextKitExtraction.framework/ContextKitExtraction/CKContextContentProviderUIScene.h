@class UIScene, NSString, NSTimer, UIButton;

@interface CKContextContentProviderUIScene : CKContextContentProvider <_UISceneComponentProviding> {
    UIButton *_debugButton;
    UIButton *_recentsButton;
    BOOL _allowAppSwitcherControls;
    NSTimer *_toolInstallationTimer;
}

@property (weak, nonatomic, getter=_scene, setter=_setScene:) UIScene *_scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_allViewControllersFromUIViews:(id)a0;
+ (id)_UIElementsForWebViewContentString:(id)a0;
+ (id)_bestVisibleStringForView:(id)a0 usingExecutor:(id)a1;
+ (id)_descendantsRelevantForContentExtractionFromWindow:(id)a0;
+ (void)initialize;
+ (void)_donateText:(id)a0 withTitle:(id)a1 debugText:(id)a2 debugUrlString:(id)a3 rawHTML:(id)a4 leadImage:(id)a5 snapshot:(id)a6 uiElements:(id)a7 extractionItems:(id)a8 usingContextFromExecutor:(id)a9;
+ (id)_extractItemsFromViewControllers:(id)a0;
+ (void)extractFromScene:(id)a0 usingExecutor:(id)a1 withOptions:(unsigned long long)a2;
+ (BOOL)_isRelevantForExtractionWithView:(id)a0;
+ (void)_donateContentsOfWindow:(id)a0 usingExecutor:(id)a1 withOptions:(unsigned long long)a2;
+ (id)_bestContentStringForWebViewUIElements:(id)a0 andTitle:(id)a1;
+ (double)_fontSizeOfView:(id)a0 usingExecutor:(id)a1;
+ (void)_descendantsRelevantForContentExtractionFromView:(id)a0 intoArray:(id)a1;
+ (void)_extractContentFromWebView:(id)a0 includingSnapshot:(BOOL)a1 includingUIBoundingBox:(BOOL)a2 ignoreViewTextLengthRequirements:(BOOL)a3 ignoreViewCountCap:(BOOL)a4 includeRawHTML:(BOOL)a5 withCompletionHandler:(id /* block */)a6;
+ (id)_firstAvailableUIViewControllerForUIView:(id)a0;
+ (id)_getNotableSuperviewClassNamesForView:(id)a0;
+ (id)_handleWKWebView:(id)a0 withExecutor:(id)a1;
+ (BOOL)_isSensitiveTextContentType:(id)a0;

- (void)_setUpDebuggingControlsIfPossibleAfterDelay:(double)a0;
- (id)_containerViewForDebugButtons;
- (void)extractUsingExecutor:(id)a0 withOptions:(unsigned long long)a1;
- (void)_installDebuggingControlsIfApplicable;
- (void)_didSelectRecentsControl:(id)a0;
- (void)_installDebuggingButton;
- (void)_installRecentsButton;
- (void).cxx_destruct;
- (id)_descendantsRelevantForDebugControls:(id)a0;
- (void)_sceneWillInvalidate:(id)a0;
- (BOOL)_determineIfDebuggingControlsShouldBeAllowed;
- (void)_didSelectDebugControl:(id)a0;
- (id)initWithScene:(id)a0;
- (BOOL)_shouldInstallAppSwitcherControls;

@end
