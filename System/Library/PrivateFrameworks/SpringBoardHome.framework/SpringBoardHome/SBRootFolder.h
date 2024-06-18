@class SBIconListModel, NSString, SBHIconModel;
@protocol SBRootFolderDelegate;

@interface SBRootFolder : SBFolder <SBIconIndexNodeObserver> {
    struct __CFRunLoopObserver { } *_checkIgnoredListRunLoopObserver;
}

@property (nonatomic, getter=isCheckingIgnoredListConsistency) BOOL checkingIgnoredListConsistency;
@property (retain, nonatomic, setter=_setDock:) SBIconListModel *dock;
@property (retain, nonatomic, setter=_setTodayList:) SBIconListModel *todayList;
@property (retain, nonatomic, setter=_setFavoriteTodayList:) SBIconListModel *favoriteTodayList;
@property (retain, nonatomic, setter=_setIgnoredList:) SBIconListModel *ignoredList;
@property (weak, nonatomic) id<SBRootFolderDelegate> delegate;
@property (weak, nonatomic) SBHIconModel *model;
@property (readonly, nonatomic) BOOL supportsBadging;
@property (readonly, nonatomic) BOOL containsWidgetIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsVisibleWidgetIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsNonDefaultSizedIconExcludingTodayList;
@property (readonly, nonatomic) BOOL containsVisibleNonDefaultSizedIconExcludingTodayList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isRootFolderClass;

- (BOOL)isExtraListIndex:(unsigned long long)a0;
- (BOOL)canBounceIcon:(id)a0;
- (void)_tearDownIgnoredListConsistencyCheckRunLoopObserverIfNeeded;
- (BOOL)isIconAtIndexPathInFavoriteTodayList:(id)a0;
- (id)nodeIdentifier;
- (id)nodeDescriptionWithPrefix:(id)a0;
- (id)listAtIndex:(unsigned long long)a0;
- (BOOL)isIconInIgnoredList:(id)a0;
- (void)iconList:(id)a0 didAddIcon:(id)a1;
- (unsigned long long)hiddenIndexOfList:(id)a0;
- (unsigned long long)_specialIndexOfList:(id)a0;
- (BOOL)isIconAtIndexPathInTodayList:(id)a0;
- (void)node:(id)a0 didAddContainedNodeIdentifiers:(id)a1;
- (void)_notifyIndexChange:(int)a0 identifiers:(id)a1 withValidationBlock:(id /* block */)a2;
- (unsigned long long)maxIconCountForDock;
- (void)node:(id)a0 didRemoveContainedNodeIdentifiers:(id)a1;
- (void)iconList:(id)a0 didReplaceIcon:(id)a1 withIcon:(id)a2;
- (void)enumerateExtraListsUsingBlock:(id /* block */)a0;
- (unsigned long long)visibleIndexOfList:(id)a0;
- (unsigned long long)columnCountForTodayList;
- (BOOL)isIconAtIndexPathInIgnoredList:(id)a0;
- (id)_handleBumpedIcons:(id)a0 afterInsertingIconIntoListAtIndex:(unsigned long long)a1 options:(unsigned long long)a2 didBump:(BOOL *)a3;
- (void)checkIgnoredListConsistency;
- (unsigned long long)allowedGridSizeClassesForDock;
- (void)scheduleIgnoredListConsistencyCheck;
- (void).cxx_destruct;
- (BOOL)canEditDisplayName;
- (void)delegateDidChange:(id)a0;
- (BOOL)isIconAtIndexPathInDock:(id)a0 includingDockFolders:(BOOL)a1;
- (id)initWithFolder:(id)a0 copyLeafIcons:(BOOL)a1;
- (id)icons;
- (BOOL)isIconAtIndexPathInDock:(id)a0;
- (void)_didExplicitlyRemoveHiddenLists:(id)a0;
- (void)removeList:(id)a0;
- (BOOL)canRemoveIcons;
- (unsigned long long)indexOfList:(id)a0;
- (void)dealloc;
- (BOOL)_compactsFirstList;
- (void)enumerateTodayListsUsingBlock:(id /* block */)a0;
- (BOOL)canAddIconCount:(unsigned long long)a0 startingAtList:(id)a1;
- (void)enumerateTodayListIconsUsingBlock:(id /* block */)a0;
- (void)nodeDidMoveContainedNodes:(id)a0;
- (BOOL)isRootFolder;
- (unsigned long long)allowedGridSizeClassesForTodayList;

@end
