@interface PaperKit.SignatureCreationViewController : UIViewController <PKCanvasViewDelegate> {
    void /* unknown type, empty encoding */ panelSize;
    void /* unknown type, empty encoding */ downArrowImagePadding;
    void /* unknown type, empty encoding */ clearButtonBottomPadding;
    void /* unknown type, empty encoding */ clearButtonImagePadding;
    void /* unknown type, empty encoding */ signatureLineInset;
    void /* unknown type, empty encoding */ signatureLinePadding;
    void /* unknown type, empty encoding */ signatureMarkPadding;
    void /* unknown type, empty encoding */ signatureLineColor;
    void /* unknown type, empty encoding */ buttonImageConfiguration;
    void /* unknown type, empty encoding */ xmarkImageConfiguration;
    void /* unknown type, empty encoding */ signaturePenWidth;
    void /* unknown type, empty encoding */ navigationBar;
    void /* unknown type, empty encoding */ signatureView;
    void /* unknown type, empty encoding */ signatureLineView;
    void /* unknown type, empty encoding */ doneItem;
    void /* unknown type, empty encoding */ clearButton;
    void /* unknown type, empty encoding */ savedFirstResponder;
    void /* unknown type, empty encoding */ signatureDescription;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ customLabelDoneAction;
}

@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (id)initWithCoder:(id)a0;
- (void)clearAction;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (BOOL)becomeFirstResponder;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)cancelAction:(id)a0;
- (void)doneAction:(id)a0;
- (void)canvasViewDrawingDidChange:(id)a0;
- (void)descriptionAction;
- (void)updateDoneButtonState:(id)a0;

@end
