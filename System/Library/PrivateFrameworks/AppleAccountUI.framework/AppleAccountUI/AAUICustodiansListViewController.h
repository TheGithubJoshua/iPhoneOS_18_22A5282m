@class NSString, AAUIProfilePictureStore, AAUIOBCustodiansListViewModel;

@interface AAUICustodiansListViewController : AAUIOBTableWelcomeController <UITableViewDelegate, UITableViewDataSource> {
    AAUIOBCustodiansListViewModel *_viewModel;
    AAUIProfilePictureStore *_pictureStore;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithContacts:(id)a0;
- (void)_setupTableView;
- (id)_pictureStore;

@end
