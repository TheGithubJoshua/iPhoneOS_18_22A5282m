@interface PreviewsServicesUI.SceneHostingViewController : UIViewController {
    void /* unknown type, empty encoding */ deactivatedHandler;
    void /* unknown type, empty encoding */ isUserActivePreview;
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ host;
    void /* unknown type, empty encoding */ currentActivationRequest;
    void /* unknown type, empty encoding */ firstResponderStatus;
    void /* unknown type, empty encoding */ sceneObservationToken;
    void /* unknown type, empty encoding */ readyForDisplay;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (id)initWithCoder:(id)a0;
- (void)viewDidLayoutSubviews;
- (BOOL)becomeFirstResponder;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (BOOL)resignFirstResponder;

@end
