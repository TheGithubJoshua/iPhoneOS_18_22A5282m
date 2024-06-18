@class NSString, UITableView;

@interface NCSupplementaryViewPrototypeRecipeContentAuxiliaryOptionsViewController : NCSupplementaryViewPrototypeRecipeViewController <UITableViewDelegate, UITableViewDataSource, UIColorPickerViewControllerDelegate> {
    UITableView *_tableView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)title;

- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)init;
- (void)loadView;
- (void)tableView:(id)a0 willDisplayHeaderView:(id)a1 forSection:(long long)a2;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)colorPickerViewController:(id)a0 didSelectColor:(id)a1 continuously:(BOOL)a2;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (id)_alertActionForMaterialRecipe:(long long)a0;

@end
