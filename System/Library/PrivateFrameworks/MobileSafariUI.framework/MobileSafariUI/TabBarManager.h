@class NSHashTable, _SFFluidProgressView, SFUnifiedTabBarItemArrangement, NSSet, UnifiedTabBar, SFLockdownStatusBar, BookmarksBarView, UnifiedBar;

@interface TabBarManager : NSObject {
    NSHashTable *_observers;
    UnifiedTabBar *_cachedInlineTabBar;
}

@property (nonatomic) long long displayMode;
@property (retain, nonatomic) NSSet *hiddenItems;
@property (retain, nonatomic) SFUnifiedTabBarItemArrangement *itemArrangement;
@property (retain, nonatomic) UnifiedBar *unifiedBar;
@property (nonatomic) BOOL suppressesStandaloneTabBar;
@property (readonly, nonatomic) UnifiedTabBar *inlineTabBar;
@property (readonly, nonatomic) UnifiedTabBar *standaloneTabBar;
@property (readonly, nonatomic) UnifiedTabBar *effectiveTabBar;
@property (retain, nonatomic) BookmarksBarView *bookmarksBar;
@property (readonly, nonatomic) SFLockdownStatusBar *lockdownStatusBar;
@property (nonatomic) BOOL showingLockdownStatusBar;
@property (readonly, nonatomic) _SFFluidProgressView *minimizedProgressView;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)_updateUsesStandaloneTabBar;
- (void)_configureStandaloneTabBar;
- (void)_notifyDidUpdateDisplayMode;
- (void)setActiveItemIsExpanded:(BOOL)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (BOOL)_canAnimateStandaloneTabBarForTransitionToItemArrangement:(id)a0;
- (void)scrollToActiveItemAnimated:(BOOL)a0;
- (BOOL)_canAnimateInlineTabBarForTransitionToItemArrangement:(id)a0;
- (void)_notifyDidCreateTabBar:(id)a0;
- (void)_setUsesInlineTabBar:(BOOL)a0;
- (void).cxx_destruct;
- (id)standaloneItemArrangementForItemArrangement:(id)a0 displayMode:(long long)a1;
- (void)_setUsesStandaloneTabBar:(BOOL)a0;
- (void)_updateUnifiedBarContentArrangement;
- (void)setItemArrangement:(id)a0 animated:(BOOL)a1 keepingItemVisible:(id)a2;
- (id)createStandaloneTabBar;
- (void)addObserver:(id)a0;
- (void)_setItemArrangement:(id)a0 animated:(BOOL)a1 keepingItemVisible:(id)a2 completionHandler:(id /* block */)a3;
- (void)setActiveItem:(id)a0 animated:(BOOL)a1;
- (id)_inlineItemArrangementForItemArrangement:(id)a0 displayMode:(long long)a1;

@end
