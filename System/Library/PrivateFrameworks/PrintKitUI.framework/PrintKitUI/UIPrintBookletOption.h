@class UISwitch;

@interface UIPrintBookletOption : UIPrintOption <UIPrintOptionViewDelegate>

@property (retain, nonatomic) UISwitch *bookletSwitch;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)summaryString;
- (void)bookletSelected:(id)a0;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionTableViewCell;
- (void)updateFromPrintInfo;

@end
