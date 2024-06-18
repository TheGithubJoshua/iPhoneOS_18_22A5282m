@class NSString, _TtC26MedicationsHealthAppPlugin39InteractiveTimelineCollectionViewLayout;

@interface MedicationsHealthAppPlugin.InteractiveTimelineCollectionViewController : UICollectionViewController <UIGestureRecognizerDelegate> {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ navControllerDelegateCache;
    void /* unknown type, empty encoding */ timelineDataProvider;
    void /* unknown type, empty encoding */ scrollToZoomedItemCompletionHandlers;
    void /* unknown type, empty encoding */ today;
    void /* unknown type, empty encoding */ indexableDays;
    void /* unknown type, empty encoding */ needsScrollToCurrentDay;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) _TtC26MedicationsHealthAppPlugin39InteractiveTimelineCollectionViewLayout *collectionViewLayout;

- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)collectionView:(id)a0 didEndDisplayingCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)initWithCollectionViewLayout:(id)a0;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)collectionView:(id)a0 willDisplayCell:(id)a1 forItemAtIndexPath:(id)a2;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)didMoveToParentViewController:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (void)dealloc;
- (void)didReceiveSignificantTimeChangeNotification;

@end
