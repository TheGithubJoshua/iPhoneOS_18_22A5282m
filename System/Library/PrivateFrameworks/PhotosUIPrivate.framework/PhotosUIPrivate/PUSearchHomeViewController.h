@class NSString, PUSearchHomeGadgetDataSourceManager, PXProgrammaticNavigationDestination;
@protocol PXViewControllerEventTracker;

@interface PUSearchHomeViewController : PXGadgetUIViewController <UISearchControllerDelegate, PXChangeObserver> {
    PXProgrammaticNavigationDestination *_px_navigationDestination;
}

@property (retain, nonatomic) PUSearchHomeGadgetDataSourceManager *searchHomeDataSourceManager;
@property (retain, nonatomic) id<PXViewControllerEventTracker> searchControllerEventTracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)gadgetSpecClass;

- (unsigned long long)routingOptionsForDestination:(id)a0;
- (void)navigateToDestination:(id)a0 options:(unsigned long long)a1 completionHandler:(id /* block */)a2;
- (id)init;
- (void)presentSpotlightSearch:(id)a0;
- (id)px_gridPresentation;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (id)nextExistingParticipantOnRouteToDestination:(id)a0;
- (id)px_navigationDestination;
- (void)ppt_dismissKeyboard;
- (void)_clearSearchField;
- (void)ppt_prepareForSearchScrollingTestWithSearchText:(id)a0 completion:(id /* block */)a1;
- (id)_adjustedIndexPaths:(id)a0 withSection:(unsigned long long)a1;
- (void)gadget:(id)a0 didChange:(unsigned long long)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)performRecentSearch:(id)a0;
- (void)presentSearchWithTerms:(id)a0 searchCategories:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)didPresentSearchController:(id)a0;
- (void)ppt_prepareForSearchTest:(id /* block */)a0;
- (long long)scrollAnimationIdentifier;
- (void)_scrollViewStoppedScrolling;
- (id)_visibleZeroKeywordIndexPaths;
- (void)didDismissSearchController:(id)a0;
- (BOOL)pu_scrollToInitialPositionAnimated:(BOOL)a0;
- (void)viewDidLoad;
- (void)activateSearchField;
- (id)searchControllerSearchText;
- (void)viewDidAppear:(BOOL)a0;
- (void)_reportZeroKeywordsToParsec:(BOOL)a0 searchCancelled:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)searchBarIsActive;
- (void)_handleAnalyticsNotification:(id)a0;
- (void).cxx_destruct;
- (void)_notifyAnalyticsSearchAction:(unsigned long long)a0;
- (void)presentForSearchHashtag:(id)a0;
- (void)_updateNavigationBarForSharedLibrary;
- (void)presentSearchWithText:(id)a0 searchCategory:(unsigned long long)a1;
- (BOOL)pu_handleSecondTabTap;
- (BOOL)shouldPreventPlaceholder;
- (void)scrollViewDidScroll:(id)a0;
- (void)presentSiriSearchRequest:(id)a0 resultCount:(unsigned long long)a1;
- (void)_registerNotificationsForAnalytics;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)zeroKeywordGadgetDidScroll:(id)a0;
- (void)_configureSearchNavigationBar;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)presentOneYearAgo;
- (void)ppt_prepareZeroKeywordRequest:(id /* block */)a0;
- (id)searchControllerSearchTokens;
- (void)selectZeroKeyword:(id)a0;
- (void)_unregisterNotificationsForAnalytics;
- (void)zeroKeywordGadgetsDidReload;

@end
