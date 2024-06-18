@class NSArray, CACSpokenCommandItem, NSDictionary;
@protocol CACCustomCommandApplicationViewControllerDelegate;

@interface CACCustomCommandApplicationViewController : UITableViewController

@property (retain, nonatomic) NSArray *sortedNames;
@property (retain, nonatomic) NSArray *sortedIdentifiers;
@property (weak, nonatomic) id<CACCustomCommandApplicationViewControllerDelegate> delegate;
@property (retain, nonatomic) CACSpokenCommandItem *commandItem;
@property (retain, nonatomic) NSDictionary *applicationIdentifiersToNames;

- (id)init;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)isModalInPresentation;

@end
