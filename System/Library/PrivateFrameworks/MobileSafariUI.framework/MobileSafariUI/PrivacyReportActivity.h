@interface PrivacyReportActivity : TabDocumentActivity

- (id)activityType;
- (long long)actionType;
- (id)activityTitle;
- (id)_systemImageName;
- (void)performActivityWithTabDocument:(id)a0;
- (id)_createPrivacyReportViewControllerWithURL:(id)a0;
- (BOOL)canPerformOnNewTabPage;

@end
