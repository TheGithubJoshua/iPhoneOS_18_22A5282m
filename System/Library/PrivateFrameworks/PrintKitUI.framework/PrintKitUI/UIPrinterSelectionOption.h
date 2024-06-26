@class UIPrinterBrowserViewController, PKPrinter, NSString;

@interface UIPrinterSelectionOption : UIPrintOption <UIPrinterBrowserOwner>

@property (retain, nonatomic) UIPrinterBrowserViewController *browserController;
@property (nonatomic) BOOL contactingPrinter;
@property (retain, nonatomic) PKPrinter *printer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissAnimated:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void).cxx_destruct;
- (id)summary;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)filtersPrinters;
- (void)cancelPrinting;
- (void)didSelectPrintOption;
- (id)initWithPrintInfo:(id)a0 printPanelViewController:(id)a1;
- (id)printOptionTableViewCell;
- (void)printerBrowserViewDidDisappear;
- (id)printerDisplayName:(id)a0;
- (void)setShowContactingPrinter:(BOOL)a0;
- (void)showContacting;

@end
