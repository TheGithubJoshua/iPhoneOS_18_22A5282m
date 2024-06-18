@class NSString, PRUIModalController;

@interface PBFClientTesterViewController : UITableViewController <PRUIModalControllerDelegate> {
    PRUIModalController *_modalController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)modalController:(id)a0 didDismissSheetWithResponse:(id)a1;

@end
