@class NSArray, NSIndexPath, NSString;

@interface UIPrintPagesPerSheetOption : UIPrintOption <UIPrintOptionListDelegate>

@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSArray *nUpNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)summaryString;
- (id)itemList;
- (id)selectedItem;
- (long long)listItemSelected:(id)a0;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)itemNameDictForNumber:(long long)a0;
- (id)printOptionTableViewCell;
- (id)shortSummary;
- (void)updateFromPrintInfo;

@end
