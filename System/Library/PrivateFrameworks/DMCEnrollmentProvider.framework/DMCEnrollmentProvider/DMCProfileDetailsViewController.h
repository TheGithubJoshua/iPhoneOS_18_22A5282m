@class NSArray, NSString, DMCProfileViewModel;

@interface DMCProfileDetailsViewController : DMCProfileTableViewController

@property (retain, nonatomic) DMCProfileViewModel *profileViewModel;
@property (nonatomic) BOOL showTitleIfOnlyOneSection;
@property (nonatomic) BOOL viewControllerCanPop;
@property (nonatomic) BOOL shouldShowWarningText;
@property (retain, nonatomic) NSArray *sections;
@property (nonatomic) int mode;
@property (nonatomic) double tableViewBottomInset;
@property (copy, nonatomic) NSString *tableTitle;

- (void)_setup;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_doneButtonTapped:(id)a0;
- (id)initWithProfileViewModel:(id)a0;
- (void)_profileChanged:(id)a0;
- (void)_updateStateForCurrentMode;
- (id)initWithProfileViewModel:(id)a0 mode:(int)a1;
- (void)reloadSectionArray;
- (void)setProfileDetailsMode:(int)a0;
- (void)setProfileViewModel:(id)a0 mode:(int)a1;

@end
