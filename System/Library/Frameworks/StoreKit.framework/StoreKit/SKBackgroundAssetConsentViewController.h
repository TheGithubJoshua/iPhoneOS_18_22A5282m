@interface SKBackgroundAssetConsentViewController : OBWelcomeController

@property (copy, nonatomic) id /* block */ responseBlock;

- (id)init;
- (long long)modalPresentationStyle;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isModalInPresentation;
- (void)_continueButtonPressed;

@end
