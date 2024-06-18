@class NSArray, CNContact;
@protocol SFContactAutoFillViewControllerFiller;

@interface SFContactAutoFillViewController : UITableViewController {
    CNContact *_contact;
    NSArray *_matches;
    NSArray *_propertyValues;
}

@property (weak, nonatomic) id<SFContactAutoFillViewControllerFiller> autoFiller;

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)canBecomeFirstResponder;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)properties;
- (void)autoFill:(id)a0;
- (void)_cancel:(id)a0;
- (id)_valueForProperty:(id)a0 identifier:(id)a1;
- (id)initWithMatches:(id)a0 contact:(id)a1;
- (id)matchesForProperty:(id)a0;
- (id)valuesFromPropertyMatches:(id)a0;

@end
