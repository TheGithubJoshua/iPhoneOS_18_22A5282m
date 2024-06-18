@class NSString, PXInboxAggregateDataSourceManager;

@interface PXInboxGadgetProvider : PXGadgetProvider <PXChangeObserver, PXSectionedDataSourceManagerObserver>

@property (readonly, nonatomic) PXInboxAggregateDataSourceManager *dataSourceManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)estimatedNumberOfGadgets;
- (void).cxx_destruct;
- (void)loadDataForGadgets;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateGadgets;
- (void)generateGadgets;
- (id)initWithDataSourceManager:(id)a0;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (void)_lastExitedForYouDateDidChange:(id)a0;
- (void)_updateDataSourceRangesOfCurrentGadgets;
- (void)_updateLastSeenDateOfCurrentGadgets;

@end
