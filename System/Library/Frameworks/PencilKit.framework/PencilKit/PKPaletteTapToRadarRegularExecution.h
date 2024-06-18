@class NSString, UIWindow;

@interface PKPaletteTapToRadarRegularExecution : PKPaletteTapToRadarCommandExecution <PKTextInputDebugRadarViewControllerDelegate, UIAdaptivePresentationControllerDelegate> {
    UIWindow *_window;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentationControllerDidDismiss:(id)a0;
- (long long)adaptivePresentationStyleForPresentationController:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (void)_dismiss;
- (void)run;
- (void)debugRadarViewControllerDidDismiss:(id)a0;

@end
