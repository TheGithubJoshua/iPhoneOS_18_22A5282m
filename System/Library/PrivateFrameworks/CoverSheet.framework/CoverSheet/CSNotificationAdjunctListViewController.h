@class CSContentActionInterpreter, PRWidgetMetricsProvider, NSString, CSRemoteContentInlineManager, CSAdjunctListModel, NSMutableDictionary, CSNowPlayingController, CSFocusActivityManager, NSArray, CSAdjunctListActionManager, UIViewController;
@protocol SBFActionProviding, CSNotificationAdjunctListViewControllerDelegate, CSRemoteContentInlineProviding;

@interface CSNotificationAdjunctListViewController : CSCoverSheetViewControllerBase <CSAdjunctListModelDelegate, CSFocusActivityDelegate> {
    CSAdjunctListModel *_model;
    BOOL _isFocusActivityIndicatorVisible;
    BOOL _isNowPlayingVisible;
    NSArray *_viewsPreferringProminentPresentationAndDismissal;
}

@property (retain, nonatomic) NSMutableDictionary *identifiersToItems;
@property (retain, nonatomic) CSNowPlayingController *nowPlayingController;
@property (retain, nonatomic) CSContentActionInterpreter *actionInterpreter;
@property (nonatomic) BOOL respondingToSubviewLayoutChange;
@property (retain, nonatomic) CSFocusActivityManager *focusActivityManager;
@property (retain, nonatomic) CSRemoteContentInlineManager *remoteContentInlineManager;
@property (retain, nonatomic) CSAdjunctListActionManager *actionManager;
@property (nonatomic) BOOL allowsAddRemoveAnimations;
@property (readonly, nonatomic, getter=isPresentingContent) BOOL presentingContent;
@property (readonly, nonatomic, getter=isPresentingTransientContent) BOOL presentingTransientContent;
@property (readonly, nonatomic, getter=isShowingMediaControls) BOOL showingMediaControls;
@property (weak, nonatomic) id<SBFActionProviding> contentActionProvider;
@property (weak, nonatomic) id<CSRemoteContentInlineProviding> remoteContentInlineProvider;
@property (weak, nonatomic) UIViewController *digestOnboardingSuggestionViewController;
@property (weak, nonatomic) id<CSNotificationAdjunctListViewControllerDelegate> delegate;
@property (readonly, nonatomic) double listViewContentAnimationDuration;
@property (readonly, nonatomic) double listViewContentAnimationDampingRatio;
@property (readonly, nonatomic) struct CGSize { double width; double height; } sizeToMimic;
@property (weak, nonatomic) PRWidgetMetricsProvider *widgetMetricsProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)viewClass;

- (id)init;
- (void)adjunctListModel:(id)a0 didAddItem:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)_insertItem:(id)a0 atPreferredIndex:(long long)a1 animated:(BOOL)a2;
- (void)adjunctListModel:(id)a0 didUpdateItem:(id)a1 withItem:(id)a2;
- (id)_createItemViewForHost:(id)a0 recipe:(long long)a1;
- (void)_setIsFocusActivityIndicatorVisible:(BOOL)a0;
- (void)focusActivityIndicatorDidChangeToVisible:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (BOOL)handleEvent:(id)a0;
- (struct CGSize { double x0; double x1; })sizeToMimicForHost:(id)a0;
- (struct CGSize { double x0; double x1; })stackViewContentSize;
- (void).cxx_destruct;
- (BOOL)_canAnimate;
- (void)_didUpdateDisplay;
- (void)adjunctListModel:(id)a0 didRemoveItem:(id)a1;
- (id)_stackView;
- (void)_updateItemsSizeToMimic;
- (void)_removeItem:(id)a0 animated:(BOOL)a1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (unsigned long long)_preferredIndexForItem:(id)a0;
- (id)_groupNameBase;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_disappearedTransformForContentWithHeight:(double)a0;

@end
