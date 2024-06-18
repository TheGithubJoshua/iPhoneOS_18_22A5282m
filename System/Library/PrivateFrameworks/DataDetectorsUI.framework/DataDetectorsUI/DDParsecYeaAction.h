@interface DDParsecYeaAction : DDParsecAction

- (id)feedbackListener;
- (void)report;
- (id)localizedName;
- (BOOL)hasUserInterface;
- (id)createViewController;
- (void)performFromView:(id)a0;
- (void)prepareViewControllerForActionController:(id)a0;
- (unsigned long long)relevancy;

@end
