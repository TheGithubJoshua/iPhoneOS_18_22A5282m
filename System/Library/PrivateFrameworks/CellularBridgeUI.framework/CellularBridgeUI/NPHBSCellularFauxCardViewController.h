@class NSDate, NSString, CTXPCServiceSubscriptionContext, UIView, CAShapeLayer, UIButton, NPHCellularBridgeBarcodeScannerView, UILabel;

@interface NPHBSCellularFauxCardViewController : UIViewController <NPHCellularBridgeBarcodeScannerCaptureDelegate, NPHBSCellularConfirmationCodeViewControllerDelegate, UINavigationControllerDelegate> {
    NSString *_fauxCardData;
    NSDate *_nextTimeToAcceptScan;
    CAShapeLayer *_fillWithHoleLayer;
    CAShapeLayer *_holeOutlineLayer;
}

@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) id /* block */ codelessActivationBlock;
@property (nonatomic) long long userConsentResponse;
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (weak, nonatomic) UIView *fauxScanView;
@property (weak, nonatomic) UIView *cutoutView;
@property (weak, nonatomic) UIButton *bypassFauxCardButton;
@property (weak, nonatomic) UIButton *enterFauxCardDataManuallyButton;
@property (weak, nonatomic) UILabel *fauxDataLabel;
@property (weak, nonatomic) UILabel *activationCodeLabel;
@property (retain, nonatomic) NPHCellularBridgeBarcodeScannerView *scannerView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)captureOutput:(id)a0 didOutputMetadataObjects:(id)a1 fromConnection:(id)a2;
- (void)cancelAction:(id)a0;
- (void)enterFauxCardDataManually:(id)a0;
- (void)bypassFauxCard:(id)a0;
- (id)_getFauxCardData;
- (void)_setFauxCardData:(id)a0;
- (void)addNewRemotePlanWithCardData:(id)a0 confirmationCode:(id)a1;
- (void)captureSession:(id)a0 isRunning:(BOOL)a1;
- (void)cellularConfirmationCodeViewController:(id)a0 confirmedWithCode:(id)a1;
- (void)presentConfirmationCodeRequest;

@end
