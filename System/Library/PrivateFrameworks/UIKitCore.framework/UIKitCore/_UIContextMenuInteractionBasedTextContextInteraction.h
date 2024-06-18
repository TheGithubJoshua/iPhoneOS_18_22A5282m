@class NSString, UIEditMenuInteraction, UIContextMenuConfiguration, UIEditMenuConfiguration;

@interface _UIContextMenuInteractionBasedTextContextInteraction : UITextContextMenuInteraction <UIContextMenuInteractionDelegate_Private, UIContextMenuInteractionDelegate_ForWebKitOnly, _UIContextMenuInteractionDelegateInternal, _UIEditMenuInteractionDelegateInternal> {
    struct { BOOL previewForHighlighting_DEPR; BOOL previewForDismissing_DEPR; BOOL highlightPreviewForItem; BOOL dismissalPreviewForItem; BOOL willPerformPreviewAction; BOOL willDisplay; BOOL willEndForConfiguration; BOOL styleForMenu; BOOL accessoriesForMenu; BOOL failedToBeginForSecondaryClickAtLocation; BOOL shouldBeDelayedByGestureRecognizer; BOOL asyncConfigurationForMenuAtLocation; BOOL overrideSuggestedActions; BOOL shouldAttemptToPresent; } _externalDelegateImplements;
    UIEditMenuConfiguration *_currentInputUIConfiguration;
    UIEditMenuConfiguration *_currentSelectionCommandsConfiguration;
    BOOL _isPresentingOrDismissingContextMenu;
}

@property (readonly, nonatomic) UIEditMenuInteraction *editMenuInteraction;
@property (readonly, nonatomic) UIContextMenuConfiguration *externallyManagedConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentMenuForInputUI:(id)a0;
- (void)_contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1 completion:(id /* block */)a2;
- (void)setExternalContextMenuDelegate:(id)a0;
- (BOOL)isDisplayingMenu;
- (void)dismissMenuForInputUI;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2;
- (void)updateVisibleMenuPosition;
- (BOOL)dismissedByActionSelection;
- (void)willMoveToView:(id)a0;
- (void)presentSelectionCommandsWithConfiguration:(id)a0;
- (id)init;
- (void)dismissSelectionCommandsWithReason:(long long)a0;
- (BOOL)dismissedRecently;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (id)_currentInputUIMenuElements;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 dismissalPreviewForItemWithIdentifier:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })editMenuInteraction:(id)a0 targetRectForConfiguration:(id)a1;
- (BOOL)_contextMenuInteraction:(id)a0 shouldAttemptToPresentConfiguration:(id)a1;
- (id)_contextMenuInteraction:(id)a0 accessoriesForMenuWithConfiguration:(id)a1;
- (BOOL)isDisplayingMenuForInputUI;
- (id)_contextMenuInteraction:(id)a0 overrideSuggestedActionsForConfiguration:(id)a1;
- (BOOL)isDisplayingMenuForSelectionCommands;
- (void)_logDeprecatedMenuControllerUsageIfNeeded;
- (id)_editMenuForSuggestedActions:(id)a0 rvItem:(id)a1 isEditMenu:(BOOL)a2;
- (void)contextMenuInteraction:(id)a0 willPerformPreviewActionForMenuWithConfiguration:(id)a1 animator:(id)a2;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void)didMoveToView:(id)a0;
- (BOOL)_isExternalConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)editMenuInteraction:(id)a0 willPresentMenuForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)_editMenuInteraction:(id)a0 menuForConfiguration:(id)a1 suggestedActions:(id)a2 completionHandler:(id /* block */)a3;
- (id)_editMenuInteraction:(id)a0 titleViewForMenu:(id)a1 configuration:(id)a2;
- (BOOL)_contextMenuInteraction:(id)a0 failedToBeginForSecondaryClickAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_presentEditMenuForInputUI;
- (void)_querySelectionCommandsForConfiguration:(id)a0 suggestedActions:(id)a1 completionHandler:(id /* block */)a2;
- (id)_targetedPreviewForCurrentSelection;
- (BOOL)_shouldBridgeMenuControllerItems;
- (BOOL)_contextMenuInteraction:(id)a0 shouldBeDelayedByGestureRecognizer:(id)a1;
- (id)_suggestedActionsForContextMenuInteraction:(id)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)editMenuInteraction:(id)a0 willDismissMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)_editMenuForCurrentSelectionWithSuggestedActions:(id)a0 isEditMenu:(BOOL)a1;
- (id)contextMenuInteraction:(id)a0 configuration:(id)a1 highlightPreviewForItemWithIdentifier:(id)a2;

@end
