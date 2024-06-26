@class UIBarButtonItem, NSString, NSArray, UITableView, UITextField, NSLayoutConstraint, UILabel, UIScrollView;
@protocol TSSIMSetupFlowDelegate;

@interface TSCellularPlanCardInfoViewController : SSUIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, TSSetupFlowItem> {
    NSString *_fauxCardData;
    NSArray *_tableData;
    UITextField *_activeTextField;
    struct CGSize { double width; double height; } _keyboardSize;
    UIBarButtonItem *_nextButton;
}

@property (weak, nonatomic) id<TSSIMSetupFlowDelegate> delegate;
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
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (BOOL)canBeShownFromSuspendedState;
- (void)onError;
- (void)keyboardWasShown:(id)a0;
- (void)keyboardWillBeHidden:(id)a0;
- (void)resetFirstResponder;
- (void)addNewPlanWithUserInfo:(id)a0;
- (void)configureCell:(id)a0 atIndexPath:(id)a1;
- (void)scrollViewForKeyboardIfNecessary;

@end
