@class OBWelcomeController, NSString, UITableView;

@interface MSDSupportViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) OBWelcomeController *contentViewController;
@property (retain, nonatomic) UITableView *optionsTableView;
@property (retain, nonatomic) NSString *countryCode;
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
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)_currentCountryStackView;

@end
