@class NSString, CapsuleNavigationBarViewController, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface CapsuleHidingStepperViewController : StepperViewController <UIGestureRecognizerDelegate> {
    UIPanGestureRecognizer *_panRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
}

@property (weak) CapsuleNavigationBarViewController *capsuleViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillDisappear:(BOOL)a0;
- (void)_didReceivePan:(id)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldReceiveTouch:(id)a1;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)_didReceiveTap:(id)a0;

@end
