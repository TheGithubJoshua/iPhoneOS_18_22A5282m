@class NSTimer;

@interface WFSingleStepHomeScreenShortcutCompletionDialogViewController : WFCompactDialogViewController

@property (retain, nonatomic) NSTimer *timer;

- (id)requestIdentifier;
- (void)startTimer;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isDraggingDismissalEnabled;
- (id)responseForInteractiveDismissal;
- (BOOL)allowsInteractiveDismiss;
- (BOOL)allowsInteractiveDismissal;
- (void)platterInteractionDidBegin;
- (void)platterInteractionDidFinish;

@end
