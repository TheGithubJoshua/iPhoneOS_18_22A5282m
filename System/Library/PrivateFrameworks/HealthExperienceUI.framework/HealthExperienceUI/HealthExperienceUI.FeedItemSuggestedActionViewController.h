@interface HealthExperienceUI.FeedItemSuggestedActionViewController : UICollectionViewController {
    void /* unknown type, empty encoding */ dataSourceAdaptor;
    void /* unknown type, empty encoding */ suggestedAction;
    void /* unknown type, empty encoding */ suggestedActionDelegate;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ $__lazy_storage_$_layout;
}

- (id)initWithCoder:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;

@end
