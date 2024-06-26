@class NSString, PXContentSyndicationDataSourceManager, NSDate;

@interface PXHorizontalContentSyndicationGadgetProvider : PXGadgetProvider <PXCollectionsDataSourceManagerObserver, PXChangeObserver, PXForYouRankable>

@property (readonly, nonatomic) PXContentSyndicationDataSourceManager *dataSourceManager;
@property (readonly, nonatomic) BOOL didGenerateGadgets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (id)init;
- (unsigned long long)estimatedNumberOfGadgets;
- (void).cxx_destruct;
- (void)loadDataForGadgets;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateGadgets;
- (void)generateGadgets;
- (void)ppt_presentSeeAllViewController;
- (void)_configureDataSourceManager;
- (void)_configureDataSourceManagerIfNecessary;
- (void)_presentSeeAllViewControllerForGadget:(id)a0 animated:(BOOL)a1;

@end
