@class NSTimeZone, NSString, NSNumberFormatter, NSCalendar;
@protocol PKMonthDayCollectionViewControllerDelegate;

@interface PKMonthDayCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout> {
    NSNumberFormatter *_dayFormatter;
    NSCalendar *_calendar;
}

@property (nonatomic) long long dayNumber;
@property (nonatomic) long long minimumDayNumber;
@property (nonatomic) long long maximumDayNumber;
@property (weak, nonatomic) id<PKMonthDayCollectionViewControllerDelegate> dayDelegate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)collectionView:(id)a0 layout:(id)a1 minimumInteritemSpacingForSectionAtIndex:(long long)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (double)collectionView:(id)a0 layout:(id)a1 minimumLineSpacingForSectionAtIndex:(long long)a2;
- (BOOL)collectionView:(id)a0 shouldDeselectItemAtIndexPath:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (id)selectedDate;
- (BOOL)collectionView:(id)a0 shouldSelectItemAtIndexPath:(id)a1;
- (id)_indexPathForDayNumber:(long long)a0;
- (id)initWithDayDelegate:(id)a0 timeZone:(id)a1;

@end