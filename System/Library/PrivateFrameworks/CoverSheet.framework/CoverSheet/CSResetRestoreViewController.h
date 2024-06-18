@protocol CSResetRestoreStatusProviding;

@interface CSResetRestoreViewController : CSModalViewControllerBase {
    id<CSResetRestoreStatusProviding> _statusProvider;
}

- (void)aggregateBehavior:(id)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (long long)presentationPriority;
- (void)aggregateAppearance:(id)a0;
- (id)_currentTextForResetOrRestoreState;
- (id)initWithStatusProvider:(id)a0;

@end
