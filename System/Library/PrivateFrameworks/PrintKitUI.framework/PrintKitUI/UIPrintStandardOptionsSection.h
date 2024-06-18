@class UIPrinterSelectionOption, UIPrintPresetsOption;

@interface UIPrintStandardOptionsSection : UIPrintOptionSection

@property (retain, nonatomic) UIPrinterSelectionOption *printerSelectionOption;
@property (retain, nonatomic) UIPrintPresetsOption *presetsOption;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (void)setShowContactingPrinter:(BOOL)a0;
- (BOOL)updatePrintOptionsList;

@end
