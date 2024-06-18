@class NSString, NSMutableArray, MSDStoreContactsModel;

@interface MSDContactsViewController : UIViewController <UITableViewDataSource>

@property (retain, nonatomic) MSDStoreContactsModel *contactsModel;
@property (retain, nonatomic) NSMutableArray *regions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;

@end
