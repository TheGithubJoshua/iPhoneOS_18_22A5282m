@class FLFollowUpActionHandler;

@interface PSGTransferListController : PSListController

@property (retain, nonatomic) FLFollowUpActionHandler *prebuddyActionHandler;

- (id)specifiers;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (void)beginPrebuddy:(id)a0;
- (void)deviceFullErase:(id)a0;
- (void)presentExitBuddyWithUpsellTradeIn:(BOOL)a0 withCompletion:(id /* block */)a1;

@end
