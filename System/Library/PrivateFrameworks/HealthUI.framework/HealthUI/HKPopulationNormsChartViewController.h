@class HKPopulationNormsClassificationCollectionView, HKPopulationNormsDescriptionView, NSString, UIView, UILabel, UISegmentedControl, HKPopulationNormsGraphView;
@protocol HKPopulationNormsViewModelDataSource;

@interface HKPopulationNormsChartViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>

@property (retain, nonatomic) id<HKPopulationNormsViewModelDataSource> viewModel;
@property (retain, nonatomic) UILabel *chartTitleLabel;
@property (retain, nonatomic) UISegmentedControl *biologicalSexSegmentedControl;
@property (retain, nonatomic) HKPopulationNormsGraphView *populationNormsGraphView;
@property (retain, nonatomic) UILabel *classificationLevelsTitleLabel;
@property (retain, nonatomic) HKPopulationNormsClassificationCollectionView *classificationCollectionView;
@property (retain, nonatomic) HKPopulationNormsDescriptionView *classificationDescriptionView;
@property (retain, nonatomic) UILabel *attributionLabel;
@property (copy, nonatomic) NSString *baseIdentifier;
@property (readonly, nonatomic) BOOL shouldEmbedInScrollView;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)loadView;
- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 didUnhighlightItemAtIndexPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)collectionView:(id)a0 didHighlightItemAtIndexPath:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1;
- (void)_deselectClassificationCellAtIndexPath:(id)a0;
- (void)_refreshViewModelIfNecessary;
- (void)_selectClassificationCellAtIndexPath:(id)a0;
- (void)_setupFonts;
- (id)_viewModelForDisplayType:(id)a0 healthStore:(id)a1;
- (id)initWithDisplayType:(id)a0 healthStore:(id)a1 shouldEmbedInScrollView:(BOOL)a2;
- (void)segmentedControlDidChange:(id)a0;

@end
