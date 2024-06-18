@class NSTimeZone, NSArray, NSString, UISearchController;
@protocol EKTimeZoneViewControllerDelegate;

@interface EKTimeZoneViewController : UITableViewController <UISearchControllerDelegate> {
    UISearchController *_searchController;
    int _style;
}

@property (retain, nonatomic) NSArray *cities;
@property (weak, nonatomic) id<EKTimeZoneViewControllerDelegate> delegate;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (readonly, nonatomic) int chooserStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)willDismissSearchController:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithChooserStyle:(int)a0;

@end
