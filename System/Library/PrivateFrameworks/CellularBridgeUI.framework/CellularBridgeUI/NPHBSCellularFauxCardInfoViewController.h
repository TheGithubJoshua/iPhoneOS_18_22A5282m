@class NSString, NSArray, CTXPCServiceSubscriptionContext, UITableView, UITextField, NSLayoutConstraint, UILabel, UIScrollView;

@interface NPHBSCellularFauxCardInfoViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource> {
    NSString *_fauxCardData;
    NSArray *_tableData;
    UITextField *_activeTextField;
    struct CGSize { double width; double height; } _keyboardSize;
}

@property (copy, nonatomic) id /* block */ completion;
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext;
@property (weak, nonatomic) UILabel *enterActivationLabel;
@property (weak, nonatomic) UITableView *infoTableView;
@property (weak, nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint;
@property (weak, nonatomic) UIScrollView *scrollView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidBeginEditing:(id)a0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (void)textFieldDidEndEditing:(id)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)keyboardWasShown:(id)a0;
- (void)keyboardWillBeHidden:(id)a0;
- (void)configureCell:(id)a0 atIndexPath:(id)a1;
- (void)scrollViewForKeyboardIfNecessary;
- (void)activatePlan:(id)a0;

@end