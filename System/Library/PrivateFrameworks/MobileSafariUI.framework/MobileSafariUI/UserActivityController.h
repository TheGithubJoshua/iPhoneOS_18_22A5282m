@class BrowserController, TabDocument, NSTimer;

@interface UserActivityController : NSObject {
    NSTimer *_tabCreationDelayTimer;
}

@property (readonly, weak, nonatomic) BrowserController *browserController;
@property (weak, nonatomic) TabDocument *tabDocumentPendingUserActivityPayload;

- (void)didFailToContinueUserActivityWithType:(id)a0 error:(id)a1;
- (void)_prepareTabDocumentForNewUserActivityWithDelay:(double)a0;
- (id)initWithBrowserController:(id)a0;
- (void)_prepareTabDocumentForNewUserActivity;
- (id)_tabDocumentWithURL:(id)a0;
- (void).cxx_destruct;
- (void)_invalidateTabCreationDelayTimer;
- (BOOL)continueUserActivity:(id)a0;
- (BOOL)willContinueUserActivityWithType:(id)a0;

@end
