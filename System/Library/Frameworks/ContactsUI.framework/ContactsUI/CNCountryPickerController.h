@class NSArray, NSString, UILocalizedIndexedCollation, UITableViewController, NSIndexPath;
@protocol CNCountryPickerControllerDelegate;

@interface CNCountryPickerController : UINavigationController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableViewController *tableViewController;
@property (retain, nonatomic) UILocalizedIndexedCollation *collation;
@property (copy, nonatomic) NSArray *countries;
@property (copy, nonatomic) NSArray *sections;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (copy, nonatomic) NSString *selectedCountryCode;
@property (weak, nonatomic) id<CNCountryPickerControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)sectionIndexTitlesForTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)windowDidRotate:(id)a0;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)_configureSections;
- (void)_loadCountryCodes;
- (void)cancelPicker:(id)a0;

@end