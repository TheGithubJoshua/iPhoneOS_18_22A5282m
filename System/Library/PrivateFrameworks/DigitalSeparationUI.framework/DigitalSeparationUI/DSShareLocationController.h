@class NSArray, CNContact, FMFSession, NSString, CNContactPickerViewController;
@protocol DSNavigationDelegate;

@interface DSShareLocationController : DSTableWelcomeController <UITableViewDelegate, UITableViewDataSource, CNContactPickerDelegate, DSController>

@property (retain, nonatomic) CNContactPickerViewController *contactsViewController;
@property (retain, nonatomic) NSArray *locationSharingTypeNames;
@property (retain, nonatomic) CNContact *selectedContact;
@property (nonatomic) long long selectedLocationSharingType;
@property (retain, nonatomic) FMFSession *fmfSession;
@property (weak, nonatomic) id<DSNavigationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)fmfHandlesFromContact:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)contactPicker:(id)a0 didSelectContact:(id)a1;
- (id)fmfHandleFromContactProperty:(id)a0;
- (void)shareLocation;
- (id)endDateFromNowForOfferTimespan:(long long)a0;
- (id)bestDefaultContactProperty;
- (void)manageBoldButton;
- (void)pickContact;
- (void)presentSharingFailedAlert;

@end
