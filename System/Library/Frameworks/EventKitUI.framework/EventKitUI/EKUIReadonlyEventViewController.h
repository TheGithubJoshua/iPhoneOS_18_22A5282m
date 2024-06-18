@interface EKUIReadonlyEventViewController : EKEventViewController

- (BOOL)shouldAutorotate;
- (id)initWithEvent:(id)a0;
- (void)willCommitPreview;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)wantsManagement;

@end
