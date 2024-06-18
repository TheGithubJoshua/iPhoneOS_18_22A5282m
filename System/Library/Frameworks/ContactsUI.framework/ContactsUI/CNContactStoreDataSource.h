@class NSDictionary, CNCoalescingTimer, NSObject, NSString, CNContactFormatter, CNContactStoreSnapshot, CNContactStoreFilter, CNManagedConfiguration, CNContact, NSArray, CNGroup, CNContainer, CNContactStore, CNContactFilter;
@protocol CNContactDataSourceDelegate, OS_dispatch_queue, CNScheduler;

@interface CNContactStoreDataSource : NSObject <CNContactDataSource> {
    CNContactStoreSnapshot *_currentSnapshot;
    NSDictionary *_sectionHeadersDictionary;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _loadingSnapshot;
    id<CNScheduler> _mainThreadScheduler;
}

@property (copy, nonatomic) CNContact *meContact;
@property (nonatomic) BOOL meContactNeedsUpdate;
@property (retain, nonatomic) CNGroup *filteredGroup;
@property (retain, nonatomic) CNContainer *filteredContainer;
@property (retain, nonatomic) CNContactStore *store;
@property (retain, nonatomic) CNContactStoreSnapshot *currentSnapshot;
@property (readonly, nonatomic) long long sortOrder;
@property (readonly, nonatomic) NSDictionary *sectionHeadersDictionary;
@property (readonly, nonatomic) NSArray *indexSectionsArray;
@property (readonly, nonatomic) NSDictionary *localizedSectionHeaders;
@property (readonly, nonatomic) NSDictionary *localizedSectionIndices;
@property (retain, nonatomic) CNCoalescingTimer *timer;
@property (copy, nonatomic) CNContactStoreFilter *filter;
@property (nonatomic) BOOL shouldRevalidateFilterOnStoreChange;
@property (retain, nonatomic) CNManagedConfiguration *managedConfiguration;
@property (retain, nonatomic) NSArray *keysToFetch;
@property (nonatomic) BOOL fetchUnified;
@property (readonly, nonatomic) BOOL filterShowsSingleGroup;
@property (readonly, nonatomic) BOOL filterShowsSingleExchangeFolder;
@property (readonly, nonatomic) NSArray *contacts;
@property (readonly, nonatomic) NSDictionary *contactMatchInfos;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) NSArray *indexSections;
@property (weak, nonatomic) id<CNContactDataSourceDelegate> delegate;
@property (readonly, nonatomic) BOOL canReload;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CNContactFilter *effectiveFilter;
@property (retain, nonatomic) CNContactFormatter *contactFormatter;
@property (readonly, nonatomic) BOOL shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isErrorPossiblyRelatedToExtraStores:(id)a0;
+ (id)keyPathsForValuesAffectingEffectiveFilter;

- (void)reload;
- (BOOL)isLoading;
- (id)accountForContainerIdentifier:(id)a0;
- (id)completeContactFromContact:(id)a0 fromMainStoreOnly:(BOOL)a1 keysToFetch:(id)a2;
- (BOOL)setMeContact:(id)a0 error:(id *)a1;
- (void)contactStoreDidChangeHandler;
- (id)contacts;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)titleForContainer:(id)a0;
- (id)initWithStore:(id)a0;
- (id)preferredForNameMeContactWithKeysToFetch:(id)a0;
- (void)contactStoreDidChange:(id)a0;
- (void)validateFilter;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_reloadSynchronously:(BOOL)a0;
- (BOOL)doesFilterShowAllContainersForAccount:(id)a0;
- (id)preferredForNameMeContactIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)canUseTitleForAccount:(id)a0;
- (void)dealloc;
- (void)registerForRelevantChangeNotifications;
- (void)contactStoreMeContactDidChange:(id)a0;
- (void)reset;
- (id)indexPathForContact:(id)a0;
- (void)reloadAsynchronously;

@end
