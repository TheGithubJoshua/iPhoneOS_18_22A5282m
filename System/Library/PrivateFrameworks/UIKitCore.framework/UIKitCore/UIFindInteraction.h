@class UITextSearchOptions, NSString, UIFindSession, UIView, _UIFindNavigatorHarness;
@protocol UIFindInteractionDelegate;

@interface UIFindInteraction : NSObject <UIInteraction> {
    UIView *_alternateHostView;
    unsigned long long _lastUsedHostingStrategy;
    struct { unsigned char respondToPlacementChangeNotifications : 1; unsigned char provideHostScrollView : 1; } _privateDelegateDoes;
    struct { unsigned char aWebView : 1; unsigned char aMailComposeView : 1; } _hostViewIs;
}

@property (class, copy, nonatomic, getter=_globalFindBuffer, setter=_setGlobalFindBuffer:) NSString *_globalFindBuffer;
@property (class, copy, nonatomic, getter=_globalFindBuffer, setter=_setGlobalFindBuffer:) NSString *_globalFindBuffer;

@property (retain, nonatomic) _UIFindNavigatorHarness *findNavigatorHarness;
@property (weak, nonatomic, getter=_hostView, setter=_setHostView:) UIView *_hostView;
@property (readonly, nonatomic) UITextSearchOptions *_configuredSearchOptions;
@property (weak, nonatomic, getter=_hostView, setter=_setHostView:) UIView *_hostView;
@property (readonly, nonatomic) UITextSearchOptions *_configuredSearchOptions;
@property (readonly, nonatomic, getter=isFindNavigatorVisible) BOOL findNavigatorVisible;
@property (readonly, nonatomic) UIFindSession *activeFindSession;
@property (copy, nonatomic) NSString *searchText;
@property (copy, nonatomic) NSString *replacementText;
@property (copy, nonatomic) id /* block */ optionsMenuProvider;
@property (readonly, weak, nonatomic) id<UIFindInteractionDelegate> delegate;
@property (readonly, weak, nonatomic) UIView *view;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)_createActiveFindSessionIfNecessary;
- (void)willMoveToView:(id)a0;
- (void)updateResultCount;
- (void)_willChangeNavigatorPlacement:(id)a0;
- (void)_systemInputAssistantCenterVisibilityChanged:(id)a0;
- (id)initWithSessionDelegate:(id)a0;
- (void)findNext;
- (id)_findNavigatorSceneComponent;
- (void)didMoveToView:(id)a0;
- (void)presentFindNavigatorShowingReplace:(BOOL)a0;
- (void)findPrevious;
- (id)_hostScrollView;
- (void).cxx_destruct;
- (void)setSearchableObject:(id)a0;
- (void)_didEndActiveFindSession;
- (id)_findNavigatorHosting;
- (id)_currentFindNavigatorController;
- (void)_presentFindNavigatorShowingReplace:(BOOL)a0;
- (void)_recomputeHostingStrategyIfNecessary;
- (unsigned long long)_currentHostingStrategy;
- (unsigned long long)_computedHostingStrategy;
- (id)_findNavigatorHostingForStrategy:(unsigned long long)a0;
- (void)_keyboardDidChangePlacementNotification:(id)a0;
- (void)_didBeginActiveFindSession;
- (void)dismissFindNavigator;
- (id)searchableObject;
- (void)_updateHostViewConformance;

@end
