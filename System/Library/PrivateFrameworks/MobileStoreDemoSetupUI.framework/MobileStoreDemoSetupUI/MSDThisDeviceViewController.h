@class NSString;

@interface MSDThisDeviceViewController : UIViewController <UITableViewDataSource>

@property (retain, nonatomic) NSString *osString;
@property (retain, nonatomic) NSString *serialNumber;
@property (retain, nonatomic) NSString *deviceModel;
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

@end
