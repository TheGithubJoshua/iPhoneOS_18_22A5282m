@class NSString, NSArray, GKComposeHeaderWithStaticRecipients;

@interface GKSimpleComposeController : GKBaseComposeController

@property (retain, nonatomic) GKComposeHeaderWithStaticRecipients *toField;
@property (retain, nonatomic) NSString *defaultMessage;
@property (retain, nonatomic) NSArray *players;
@property (copy, nonatomic) id /* block */ doneHandler;

- (void)loadView;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)donePressed;
- (void)setupSendButton;
- (void)pushOntoNavigationController:(id)a0 withDoneHandler:(id /* block */)a1;

@end
