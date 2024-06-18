@class NSString, PTSettings, PTModule;

@interface PTUIModuleController : UITableViewController <PTModuleObserver> {
    PTModule *_module;
    NSString *_title;
    NSString *_rowTitle;
}

@property (readonly, nonatomic) PTSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)initWithSettings:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void)_updateTitle;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldIndentWhileEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)module:(id)a0 didInsertRows:(id)a1 deleteRows:(id)a2;
- (void)module:(id)a0 didInsertSections:(id)a1 deleteSections:(id)a2;
- (void)moduleDidReload:(id)a0;
- (id)initWithSettings:(id)a0 presentingRow:(id)a1;
- (void)showActionsForRowTableViewCell:(id)a0;
- (id)_initWithModule:(id)a0 presentingRow:(id)a1;
- (void)_reloadWithModule:(id)a0;

@end
