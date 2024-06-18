@class NSArray;
@protocol MCInstallationWarningDelegate;

@interface MCInstallationWarningViewController : MCUITableViewController

@property (nonatomic) BOOL isMDMInstall;
@property (retain, nonatomic) NSArray *warnings;
@property (weak, nonatomic) id<MCInstallationWarningDelegate> warningDelegate;

- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (id)initWithStyle:(long long)a0;
- (void)_setup;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_installProfile;
- (void)_cancelInstallProfile;
- (void)_confirmInstallProfileIfNeeded;

@end
