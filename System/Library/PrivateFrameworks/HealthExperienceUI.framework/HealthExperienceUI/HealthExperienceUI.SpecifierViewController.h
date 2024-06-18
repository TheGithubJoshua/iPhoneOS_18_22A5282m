@interface HealthExperienceUI.SpecifierViewController : PSListController {
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ shouldReloadSpecifiersAfterSelection;
    void /* unknown type, empty encoding */ shouldReloadSpecifiersOnViewWillAppear;
}

- (id)specifiers;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableViewStyle;
- (void)dismissNavigationController;

@end
