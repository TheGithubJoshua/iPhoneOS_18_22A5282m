@class UISwitch;

@interface UIPrintFlipHorizontalOption : UIPrintOption <UIPrintOptionViewDelegate>

@property (retain, nonatomic) UISwitch *flipHorizontalSwitch;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)summaryString;
- (void)flipHorizontalSelected:(id)a0;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;

@end
