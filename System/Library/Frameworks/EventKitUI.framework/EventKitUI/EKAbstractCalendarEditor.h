@class NSString, EKEventStore, NSArray, EKCalendar;
@protocol EKStyleProvider, EKCalendarEditorDelegate;

@interface EKAbstractCalendarEditor : UITableViewController <EKCalendarEditItemDelegate, EKUIManagedViewController> {
    struct CGSize { double width; double height; } _preferredContentSize;
    NSArray *_editItems;
    BOOL _isNewCalendar;
}

@property (readonly, nonatomic) EKEventStore *eventStore;
@property (weak, nonatomic) id<EKStyleProvider> styleProvider;
@property (weak, nonatomic) id<EKCalendarEditorDelegate> delegate;
@property (retain, nonatomic) EKCalendar *calendar;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createNewCalendarForEntityType:(unsigned long long)a0 inEventStore:(id)a1;

- (void)resetBackgroundColor;
- (void)loadView;
- (void)_eventStoreChanged:(id)a0;
- (BOOL)canManagePresentationStyle;
- (void)viewWillDisappear:(BOOL)a0;
- (void)cancel:(id)a0;
- (id)rightButton;
- (void)_presentValidationAlert:(id)a0;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (void)_localeChanged;
- (void)setEventStore:(id)a0;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (id)leftButton;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)done:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updatePreferredContentSize;
- (BOOL)wantsManagement;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (BOOL)isModalInPresentation;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)saveChanges;
- (void)contentSizeCategoryDidChangeNotification:(id)a0;
- (void)reloadEditItems;
- (struct CGSize { double x0; double x1; })calculatePreferredContentSize;
- (void)calendarItemStartedEditing:(id)a0;
- (void)didSaveCalendar:(id)a0;
- (id)editItems;
- (id)editorForCalendarEditItem:(id)a0;
- (id)initWithCalendar:(id)a0 eventStore:(id)a1 entityType:(unsigned long long)a2 limitedToSource:(id)a3;
- (BOOL)isNewCalendar;
- (id)loadEditItems;
- (id)owningNavigationController;
- (void)saveCalendar;
- (int)sectionForCalendarEditItem:(id)a0;
- (void)setupForCalendar;
- (void)willSaveCalendar:(id)a0;

@end
