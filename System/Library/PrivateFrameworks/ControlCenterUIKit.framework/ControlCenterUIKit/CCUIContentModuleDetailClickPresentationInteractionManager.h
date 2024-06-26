@class NSString, UIPresentationController, CCUIContentModuleDetailTransitioningDelegate, UIView, _UIClickPresentationInteraction, UIViewController;
@protocol CCUIContentModuleDetailClickPresentationInteractionManagerDelegate;

@interface CCUIContentModuleDetailClickPresentationInteractionManager : NSObject <_UIClickPresentationInteractionDelegate> {
    _UIClickPresentationInteraction *_clickPresentationInteraction;
    CCUIContentModuleDetailTransitioningDelegate *_detailTransitioningDelegate;
    UIPresentationController *_presentationController;
    BOOL _authenticated;
    struct { unsigned char delegateProvidesPresentedViewController : 1; unsigned char delegateImplementsInteractionShouldBegin : 1; unsigned char delegateRequiresAuthentication : 1; unsigned char delegateImplementsInteractionEnded : 1; } _delegateFlags;
}

@property (readonly, nonatomic) UIViewController *presentingViewController;
@property (readonly, weak, nonatomic) id<CCUIContentModuleDetailClickPresentationInteractionManagerDelegate> delegate;
@property (retain, nonatomic) UIView *viewForInteraction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)clickPresentationInteraction:(id)a0 presentationForPresentingViewController:(id)a1;
- (void)setDelegate:(id)a0;
- (BOOL)clickPresentationInteractionShouldBegin:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)activationStyleForClickPresentationInteraction:(id)a0;
- (void)clickPresentationInteractionEnded:(id)a0 wasCancelled:(BOOL)a1;
- (BOOL)clickPresentationInteractionShouldPresent:(id)a0;
- (id)initWithPresentingViewController:(id)a0 delegate:(id)a1;
- (id)clickPresentationInteraction:(id)a0 previewForHighlightingAtLocation:(struct CGPoint { double x0; double x1; })a1;

@end
