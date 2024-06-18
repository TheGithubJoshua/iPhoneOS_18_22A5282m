@interface MenstrualCyclesAppPlugin.DeviationsCalendarViewController : MenstrualCyclesAppPlugin.BaseCalendarViewController <HKMCViewModelProviderObserver> {
    void /* unknown type, empty encoding */ calendarChanges;
    void /* unknown type, empty encoding */ viewModelProvider;
    void /* unknown type, empty encoding */ dateCache;
    void /* unknown type, empty encoding */ selectedIndexPath;
    void /* unknown type, empty encoding */ dateToFocusOn;
    void /* unknown type, empty encoding */ commitChanges;
    void /* unknown type, empty encoding */ $__lazy_storage_$_logOverlay;
}

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (void)viewModelProviderDidUpdate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)cancelButtonTapped;
- (void)doneButtonTapped;

@end
