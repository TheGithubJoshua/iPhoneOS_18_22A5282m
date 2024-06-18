@class NSString, EKEventStore, NSMutableArray, EKCalendar;

@interface EKCalendarAccountTableViewController : UITableViewController

@property (weak) EKEventStore *eventStore;
@property (weak) EKCalendar *calendar;
@property (readonly) NSMutableArray *accounts;
@property (retain) NSString *currentSourceIdentifier;

- (void)resetBackgroundColor;
- (void)loadView;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithCalendar:(id)a0 andStore:(id)a1;

@end
