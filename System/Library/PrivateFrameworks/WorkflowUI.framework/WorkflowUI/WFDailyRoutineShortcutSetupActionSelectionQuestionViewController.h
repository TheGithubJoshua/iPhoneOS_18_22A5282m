@class WFActionDrawerResults, NSString, WFDailyRoutineShortcutSetupActionSelectionQuestion;
@protocol WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate;

@interface WFDailyRoutineShortcutSetupActionSelectionQuestionViewController : UITableViewController <WFActionDrawerSiriSuggestionsTableViewCellDailyRoutineDelegate, WFDailyRoutineShortcutSetupQuestionChildViewController>

@property (retain, nonatomic) WFActionDrawerResults *results;
@property (weak, nonatomic) id<WFDailyRoutineShortcutSetupQuestionChildViewControllerDelegate> delegate;
@property (readonly, nonatomic) WFDailyRoutineShortcutSetupActionSelectionQuestion *question;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL parentShouldShowSkipButton;

- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithQuestion:(id)a0;
- (void)loadResults;
- (void)siriSuggestionsTableViewCell:(id)a0 didAppendAction:(id)a1;

@end
