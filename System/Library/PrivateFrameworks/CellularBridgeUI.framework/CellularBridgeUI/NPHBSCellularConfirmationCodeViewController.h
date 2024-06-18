@class NSString, NPHSetupTableViewCell, UILabel, NSLayoutConstraint, UITableView;
@protocol NPHBSCellularConfirmationCodeViewControllerDelegate;

@interface NPHBSCellularConfirmationCodeViewController : UIViewController <UITextFieldDelegate> {
    NPHSetupTableViewCell *_confirmationCodeCell;
}

@property (weak, nonatomic) id<NPHBSCellularConfirmationCodeViewControllerDelegate> delegate;
@property (weak, nonatomic) UILabel *confirmationCodeTitleLabel;
@property (weak, nonatomic) UITableView *infoTableView;
@property (weak, nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)textFieldDidBeginEditing:(id)a0;
- (id)init;
- (void)viewDidLayoutSubviews;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)confirm:(id)a0;

@end
