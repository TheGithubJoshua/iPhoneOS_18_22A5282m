@protocol ICPaperStyleSheetCollectionViewControllerDelegate;

@interface ICPaperStyleSheetCollectionViewController : ICPaperStyleCollectionViewController

@property (nonatomic) unsigned long long initialPaperStyleType;
@property (weak, nonatomic) id<ICPaperStyleSheetCollectionViewControllerDelegate> paperStyleDelegate;

- (void)collectionView:(id)a0 didSelectItemAtIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (BOOL)accessibilityPerformEscape;
- (void)cancelAction:(id)a0;
- (id)indexPathForInitialSelection;
- (id)initWithInitialPaperStyleType:(unsigned long long)a0 delegate:(id)a1;

@end
