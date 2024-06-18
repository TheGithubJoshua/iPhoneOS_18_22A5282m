@class NSDictionary, PKAccountService, UILabel, PKWorldRegionUpdater, NSString, PKTransactionSourceCollection, FHSearchSuggestionController, PKDashboardPaymentTransactionItemPresenter, NSArray, NSMutableDictionary, PKFamilyMemberCollection, PKSearchSuggestionCollectionViewCell, PKSearchQuery, PKSearchService, NSObject, PKTransactionHistoryViewController, PKSearchResults, PKTransactionGroupThumbnailPresenter, PKDashboardTitleHeaderView, NSMutableOrderedSet, PKPassLibrary, PKTransactionGroupItemPresenter;
@protocol OS_dispatch_queue, PKPaymentDataProvider, OS_dispatch_source;

@interface PKSearchResultsViewController : UICollectionViewController <CNAvatarViewDelegate, PKAccountServiceObserver, PKSearchServiceObserver, UICollectionViewDelegateFlowLayout, PKWorldRegionUpdaterObserver, PKForegroundActiveArbiterObserver, PKPaymentDataProviderDelegate, UISearchResultsUpdating> {
    PKDashboardTitleHeaderView *_sampleHeaderView;
    PKSearchSuggestionCollectionViewCell *_sampleSuggestionCell;
    PKDashboardPaymentTransactionItemPresenter *_transactionPresenter;
    PKTransactionGroupItemPresenter *_transactionGroupPresenter;
    PKTransactionGroupThumbnailPresenter *_thumbnailPresenter;
    PKWorldRegionUpdater *_regionUpdater;
    PKFamilyMemberCollection *_familyCollection;
    PKSearchService *_searchService;
    PKAccountService *_accountService;
    PKPassLibrary *_passLibrary;
    id<PKPaymentDataProvider> _paymentDataProvider;
    NSDictionary *_accountsPerIdentifier;
    NSDictionary *_accountUserCollectionsPerIdentifier;
    NSDictionary *_physicalCardsPerIdentifier;
    PKTransactionSourceCollection *_transactionSourceCollection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lockQuery;
    NSString *_currentQueryIdentifier;
    NSMutableOrderedSet *_lastQueries;
    PKSearchQuery *_queryForCurrentResults;
    PKSearchResults *_currentResults;
    BOOL _queryInProgress;
    NSMutableDictionary *_lastResultsPerQueryIdentifier;
    NSObject<OS_dispatch_queue> *_queuePrepareResults;
    NSArray *_transactions;
    NSArray *_categories;
    NSArray *_merchants;
    NSArray *_locations;
    NSArray *_people;
    NSArray *_transactionTags;
    NSArray *_suggestions;
    NSMutableDictionary *_passesForResults;
    BOOL _hasReceivedResults;
    BOOL _hasLoadedRequiredData;
    unsigned long long _presentationCounter;
    unsigned long long _seeAllPresentationCounter;
    PKTransactionHistoryViewController *_seeAllHistoryVC;
    NSObject<OS_dispatch_source> *_seeAllPresentationTimer;
    BOOL _queryHasNoResults;
    BOOL _fullResultsNotAvailable;
    BOOL _hasSearchableContent;
    UILabel *_noResultsTitleLabel;
    UILabel *_noResultsBodyLabel;
    BOOL _queryIsReplay;
    BOOL _keyboardVisible;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    BOOL _usingThumbnailLayout;
    BOOL _atNaturalRestingBounds;
    BOOL _isScrolling;
    struct { BOOL foreground; BOOL foregroundActive; } _foregroundActiveState;
    id /* block */ _pendingPreflightCompletion;
    FHSearchSuggestionController *_searchSuggestionController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)accountChanged:(id)a0;
- (void)accountRemoved:(id)a0;
- (void)accountAdded:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (void)didUpdateFamilyMembers:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForFooterInSection:(long long)a2;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)_updateContentUnavailableConfigurationUsingState:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)keyboardWillHide:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillLayoutSubviews;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)_scrollViewStoppedScrolling;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void)keyboardWillShow:(id)a0;
- (void).cxx_destruct;
- (id)presentingViewControllerForAvatarView:(id)a0;
- (void)foregroundActiveArbiter:(id)a0 didUpdateForegroundActiveState:(struct { BOOL x0; BOOL x1; })a1;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 shouldHighlightItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (long long)_numberOfItemsInSection:(long long)a0;
- (id)_searchController;
- (void)keyboardWillChange:(id)a0;
- (double)_thumbnailSpacing;
- (void)accountUsersChanged:(id)a0 forAccountIdentifier:(id)a1;
- (void)invalidateSearchResults;
- (void)preflightWithCompletion:(id /* block */)a0;
- (void)searchDidCompleteWithError:(id)a0 results:(id)a1 forIdentifier:(id)a2;
- (void)_configureHeaderView:(id)a0 inSection:(unsigned long long)a1;
- (double)_thumbnailInset;
- (void)_updateLayoutForKeyboardAction:(id /* block */)a0;
- (void)_applyMaskToCell:(id)a0 firstInSection:(BOOL)a1 lastInSection:(BOOL)a2;
- (void)_configureSuggestionCell:(id)a0 withSuggestion:(id)a1;
- (id)_historyViewControllerForQuery:(id)a0 groups:(id)a1 headerGroup:(id)a2;
- (void)_initiateSeeAllPresentationForQuery:(id)a0;
- (BOOL)_isQueryIdentifierMatchingCurrentQuery:(id)a0;
- (id)_queryWithIdentifier:(id)a0;
- (id)_resultsLayout;
- (void)_saveResults:(id)a0 forQuery:(id)a1;
- (void)_seeAllHeaderGroupForQuery:(id)a0 groups:(id)a1 transactions:(id)a2 completion:(id /* block */)a3;
- (id)_thumbnailLayout;
- (void)_udpateOrPresentSeeAllViewControllerForQuery:(id)a0 groups:(id)a1 transactions:(id)a2;
- (void)_updateAccountsWithCompletion:(id /* block */)a0;
- (BOOL)_updateGroup:(id)a0 withRegion:(id)a1;
- (void)_updateUIIfPossibleWithResults:(id)a0 query:(id)a1 completion:(id /* block */)a2;
- (void)_updateUIWithResults:(id)a0 forQuery:(id)a1 completion:(id /* block */)a2;
- (id)initWithPaymentDataProvider:(id)a0 transactionSourceCollection:(id)a1 familyCollection:(id)a2;
- (void)worldRegionUpdated:(id)a0 updatedRegion:(id)a1;

@end