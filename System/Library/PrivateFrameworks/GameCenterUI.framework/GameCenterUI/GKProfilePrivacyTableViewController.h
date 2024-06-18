@class GKLocalPlayer, NSMutableArray;
@protocol GKProfilePrivacyTableViewControllerDelegate;

@interface GKProfilePrivacyTableViewController : UITableViewController

@property (nonatomic) int currentPrivacySettings;
@property (nonatomic) int initialPrivacySettings;
@property (retain, nonatomic) NSMutableArray *availblePrivacySettings;
@property (nonatomic) BOOL isSendingRequest;
@property (retain, nonatomic) GKLocalPlayer *localPlayer;
@property (weak, nonatomic) id<GKProfilePrivacyTableViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableFooterForPrivacy:(int)a0;
- (id)titleForPrivacy:(int)a0;
- (void)updateCell:(id)a0 withCheckmark:(BOOL)a1;
- (void)updateTableViewLayoutMargins;

@end
