@interface HealthExperienceUI.SummarySharingDataTypeSelectionViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ dataTypeSelectionDataSources;
    void /* unknown type, empty encoding */ selectedCategories;
    void /* unknown type, empty encoding */ selectionFlow;
    void /* unknown type, empty encoding */ selectedDataTypesContext;
    void /* unknown type, empty encoding */ selectedContact;
    void /* unknown type, empty encoding */ selectedContactPhotoPublisher;
    void /* unknown type, empty encoding */ cancellables;
}

- (id)initWithCoder:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)cancel;
- (void)viewDidLoad;
- (void)done;
- (void).cxx_destruct;

@end
