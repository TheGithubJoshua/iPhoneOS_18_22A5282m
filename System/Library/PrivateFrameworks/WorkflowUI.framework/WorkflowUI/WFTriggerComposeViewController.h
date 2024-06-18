@protocol WFTriggerComposeViewControllerDelegate;

@interface WFTriggerComposeViewController : WFComposeViewController

@property (readonly, nonatomic) unsigned long long mode;
@property (weak, nonatomic) id<WFTriggerComposeViewControllerDelegate> delegate;

+ (BOOL)canShowInputAction;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)isModalInPresentation;
- (void)didTapNext:(id)a0;
- (id)doneBarButtonItem;
- (id)initWithWorkflow:(id)a0 mode:(unsigned long long)a1 database:(id)a2;
- (void)dismissForTutorial:(BOOL)a0 completionHandler:(id /* block */)a1;
- (id)emptyStateString;
- (unsigned long long)navigationUpdateBehavior;
- (BOOL)showsDetailsButton;

@end
