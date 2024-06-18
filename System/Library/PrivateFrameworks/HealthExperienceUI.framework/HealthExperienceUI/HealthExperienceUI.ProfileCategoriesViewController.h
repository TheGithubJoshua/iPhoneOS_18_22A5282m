@interface HealthExperienceUI.ProfileCategoriesViewController : HealthExperienceUI.CompoundDataSourceCollectionViewController {
    void /* unknown type, empty encoding */ providedHealthStore;
    void /* unknown type, empty encoding */ providedHealthExperienceStore;
    void /* unknown type, empty encoding */ categoriesDataSource;
    void /* unknown type, empty encoding */ navigationBarTitleView;
}

- (id)initWithCoder:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)restoreUserActivityState:(id)a0;

@end
