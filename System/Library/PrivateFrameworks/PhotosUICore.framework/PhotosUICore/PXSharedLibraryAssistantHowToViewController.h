@class NSString;
@protocol PXAssistantViewControllerDelegate;

@interface PXSharedLibraryAssistantHowToViewController : OBTableWelcomeController <PXAssistantViewController, UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) id<PXAssistantViewControllerDelegate> assistantViewControllerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)init;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)_updateIcon;
- (void)continueButtonTapped:(id)a0;

@end
