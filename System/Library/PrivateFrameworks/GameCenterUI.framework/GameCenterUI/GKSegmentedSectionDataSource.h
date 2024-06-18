@class GKSegmentInfo, NSArray, NSString, GKCollectionViewDataSource, GKCollectionViewPlaceholderView, GKSegmentedSectionHeaderView, NSMutableArray;

@interface GKSegmentedSectionDataSource : GKCollectionViewDataSource <GKSegmentInfoDelegagte>

@property (retain, nonatomic) NSMutableArray *segmentInfos;
@property (retain, nonatomic) GKSegmentedSectionHeaderView *headerView;
@property (retain, nonatomic) GKCollectionViewPlaceholderView *placeholderView;
@property (retain, nonatomic) GKSegmentInfo *selectedSegmentInfo;
@property (nonatomic) BOOL waitingForAnimation;
@property (retain, nonatomic) GKCollectionViewDataSource *rootDataSource;
@property (readonly, nonatomic) NSArray *dataSources;
@property (nonatomic) GKCollectionViewDataSource *selectedDataSource;
@property (nonatomic) BOOL usePlaceholder;
@property (nonatomic) BOOL shouldHideSegment;
@property (nonatomic) unsigned long long selectedDataSourceIndex;
@property (retain, nonatomic) NSString *noContentTitle;
@property (retain, nonatomic) NSString *noContentMessage;
@property (retain, nonatomic) NSString *noContentButtonTitle;
@property (nonatomic) id noContentButtonTarget;
@property (nonatomic) SEL noContentButtonAction;
@property (nonatomic) Class segmentedHeaderClass;

- (void)addDataSource:(id)a0;
- (void)removeDataSource:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)itemAtIndexPath:(id)a0;
- (id)collectionView:(id)a0 viewForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2;
- (id)initWithDataSources:(id)a0;
- (void)collectionViewWillBecomeActive:(id)a0;
- (id)infoForSegment:(long long)a0;
- (id)_gkDescriptionWithChildren:(long long)a0;
- (id)allTitles;
- (id)collectionView:(id)a0 evaluateFactoryForSupplementaryElementOfKind:(id)a1 atIndexPath:(id)a2 isRecursive:(BOOL)a3;
- (void)collectionViewDidBecomeInactive:(id)a0;
- (void)configureCollectionView:(id)a0;
- (void)configureSegmentedHeader:(id)a0;
- (BOOL)containsDataSource:(id)a0;
- (id)createMetricsTreeWithGridLayout:(id)a0;
- (void)dataSource:(id)a0 didInsertItemsAtIndexPaths:(id)a1;
- (void)dataSource:(id)a0 didInsertSections:(id)a1;
- (void)dataSource:(id)a0 didMoveItemAtIndexPath:(id)a1 toIndexPath:(id)a2;
- (void)dataSource:(id)a0 didMoveSection:(long long)a1 toSection:(long long)a2;
- (void)dataSource:(id)a0 didRefreshItemsAtIndexPaths:(id)a1;
- (void)dataSource:(id)a0 didRefreshSections:(id)a1;
- (void)dataSource:(id)a0 didRemoveItemsAtIndexPaths:(id)a1;
- (void)dataSource:(id)a0 didRemoveSections:(id)a1;
- (void)dataSource:(id)a0 performBatchUpdate:(id /* block */)a1 complete:(id /* block */)a2;
- (void)dataSourceDidLoad;
- (void)dataSourceDidReloadData:(id)a0;
- (id)dataSourceForSection:(unsigned long long)a0;
- (void)dataSourceWillLoad;
- (void)groupDidLoad:(id)a0;
- (void)hoistSegmentedFactoryToRoot;
- (id)indexPathsForItem:(id)a0;
- (id)infoForDataSource:(id)a0;
- (void)infosChanged;
- (id)initWithDataSources:(id)a0 rootDataSource:(id)a1;
- (BOOL)item:(id)a0 matchesSearchTerms:(id)a1 inSection:(long long)a2;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1 updateNotifier:(id)a2;
- (void)removeItemAtIndexPath:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)sectionForDataSource:(id)a0;
- (void)segmentDidChangeLoadingState:(id)a0;
- (void)selectedSegmentChanged:(id)a0;
- (void)setSelectedDataSourceIndex:(unsigned long long)a0 reload:(BOOL)a1;
- (void)setTitle:(id)a0 forDataSource:(id)a1;
- (void)updatePlaceholderNotify:(BOOL)a0;

@end