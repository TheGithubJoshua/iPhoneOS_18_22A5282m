@class NSString;
@protocol PDCApplicationIdentity, PDCApplicationRecord, PDUWelcomeViewControllerDelegate;

@interface PDUWelcomeViewController_iOS : OBWelcomeController <PDUDisclosureReviewViewControllerDelegate> {
    id<PDCApplicationIdentity> _applicationIdentity;
    id<PDCApplicationRecord> _applicationRecord;
}

@property (weak, nonatomic) id<PDUWelcomeViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)preferredUserInterfaceStyle;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)cancelPressed;
- (void)learnMorePressed;
- (void)continuePressed;
- (id)_requestIconForApplication:(id)a0;
- (void)disclosureReviewViewControllerDidDismiss:(id)a0;
- (id)initWithApplicationIdentity:(id)a0;

@end
