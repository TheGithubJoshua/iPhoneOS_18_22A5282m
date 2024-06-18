@class NSMutableSet, NSHashTable, NSMutableArray;

@interface SBHIconViewContextMenuStateController : NSObject {
    NSHashTable *_iconViews;
    NSMutableSet *_presentedWidgetsBundleIdentifiers;
    NSHashTable *_iconViewsPresentingContextMenues;
    NSHashTable *_iconViewsAnimatingContextMenues;
    NSMutableArray *_pendingIconAnimationCompletionBlocks;
}

@property (class, readonly, nonatomic) SBHIconViewContextMenuStateController *sharedInstance;

- (void)iconViewWillDismissContextMenu:(id)a0;
- (id)init;
- (void)iconViewWillAnimateContextMenu:(id)a0;
- (void)registerIconView:(id)a0;
- (BOOL)areAnyIconViewContextMenusAnimating;
- (void)iconViewWillPresentContextMenu:(id)a0;
- (BOOL)areAnyIconViewContextMenusShowing;
- (void)performAfterContextMenuAnimationsHaveCompleted:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dismissAppIconForceTouchControllers:(id /* block */)a0;
- (void)noteFolderControllerWillClose:(id)a0;
- (void)unregisterIconView:(id)a0;
- (void)containerViewDidScrollHiddenIconViewAway:(id)a0;
- (void)iconViewDidAnimateContextMenu:(id)a0;
- (void)earlyTerminateAnyContextMenuAnimations;
- (void)_firePendingIconAnimationBlocks;

@end
