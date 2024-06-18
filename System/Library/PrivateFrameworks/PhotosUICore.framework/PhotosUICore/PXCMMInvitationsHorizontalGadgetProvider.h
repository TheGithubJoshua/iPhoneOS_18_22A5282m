@class NSString, PXCMMInvitationsDataSourceManager, NSDate;
@protocol PXCMMWorkflowPresenting;

@interface PXCMMInvitationsHorizontalGadgetProvider : PXGadgetProvider <PXSettingsKeyObserver, PXChangeObserver, PXSectionedDataSourceManagerObserver, PXForYouRankable> {
    PXCMMInvitationsDataSourceManager *_dataSourceManager;
    BOOL _didGenerateGadgets;
}

@property (readonly, nonatomic) id<PXCMMWorkflowPresenting> workflowPresenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDate *mostRecentContentDate;
@property (readonly, nonatomic) long long forYouContentIdentifier;

- (id)init;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)estimatedNumberOfGadgets;
- (void).cxx_destruct;
- (void)loadDataForGadgets;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void)_updateGadgets;
- (void)settings:(id)a0 changedValueForKey:(id)a1;
- (void)generateGadgets;
- (unsigned long long)gadgetType;
- (void)_configureDataSourceManager;
- (id)initWithWorkflowPresenter:(id)a0;

@end
