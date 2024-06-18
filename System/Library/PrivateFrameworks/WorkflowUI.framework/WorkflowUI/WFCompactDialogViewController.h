@class NSArray, WFDialogRequest, WFCompactDialogAction;
@protocol WFCompactDialogViewControllerDelegate;

@interface WFCompactDialogViewController : WFCompactPlatterViewController

@property (copy, nonatomic) NSArray *actions;
@property (retain, nonatomic) WFCompactDialogAction *preferredAction;
@property (retain, nonatomic) WFCompactDialogAction *cancelAction;
@property (weak, nonatomic) id<WFCompactDialogViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFDialogRequest *request;

- (id)initWithRequest:(id)a0;
- (void)loadView;
- (void)cancelKeyPressed;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (id)keyCommands;
- (void)prepareForPresentationWithCompletionHandler:(id /* block */)a0;
- (id)responseForInteractiveDismissal;
- (BOOL)allowsInteractiveDismiss;
- (BOOL)canHandleFollowUpRequest:(id)a0;
- (void)configureActionGroupWithActions:(id)a0;
- (void)doneKeyPressed;
- (void)finishWithResponse:(id)a0;
- (void)finishWithResponse:(id)a0 waitForFollowUpRequest:(BOOL)a1;
- (void)handleFollowUpRequest:(id)a0;
- (void)platterInteractionRequestedDismissal;
- (void)systemDismissedBanner;

@end
