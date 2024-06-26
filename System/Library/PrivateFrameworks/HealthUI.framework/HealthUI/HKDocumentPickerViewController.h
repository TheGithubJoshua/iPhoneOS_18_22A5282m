@class NSUUID, NSString, NSSet, HKHealthStore, NSMutableArray, HKSource, NSMutableSet, HKTitledIconHeaderView;
@protocol HKHealthPrivacyServicePickerControllerDelegate;

@interface HKDocumentPickerViewController : HKTableViewController <HKCDADocumentTableViewCellDelegate, HKDataMetadataViewControllerDelegate, HKHealthPrivacyServicePickerController> {
    NSMutableArray *_samplesList;
    long long _presentationStyle;
    HKHealthStore *_healthStore;
    BOOL _hasPendingDocumentFetch;
    BOOL _showCheckboxes;
    HKTitledIconHeaderView *_tableHeaderView;
}

@property (retain, nonatomic) NSMutableSet *enabledSamples;
@property (copy, nonatomic) HKSource *source;
@property (readonly, nonatomic) NSSet *allSamples;
@property (weak, nonatomic) id<HKHealthPrivacyServicePickerControllerDelegate> delegate;
@property (copy, nonatomic) NSUUID *sessionIdentifier;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCoder:(id)a0;
- (void)_updateForCurrentSizeCategory;
- (void)viewWillDisappear:(BOOL)a0;
- (void)_finishWithError:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_tableHeaderView;
- (void)_done:(id)a0;
- (void)_cancel:(id)a0;
- (id)initWithDocumentAuthorizations:(id)a0;
- (void)_addCancelAndDoneButtons;
- (void)_enableDocumentSample:(id)a0 enabled:(BOOL)a1;
- (BOOL)_isPrompting;
- (BOOL)_needsSampleRequestDescription;
- (void)cdaDocumentTableViewCellDidChangeValue:(id)a0;
- (void)configureHeaderView:(id)a0;
- (id)dataMetadataViewControllerForSample:(id)a0;
- (id)initWithDocuments:(id)a0 presentationStyle:(long long)a1;
- (void)pushDetailForDocumentSample:(id)a0;

@end
