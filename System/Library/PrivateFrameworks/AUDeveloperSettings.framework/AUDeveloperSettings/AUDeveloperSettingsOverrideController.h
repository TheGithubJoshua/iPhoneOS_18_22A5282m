@class PSSpecifier;

@interface AUDeveloperSettingsOverrideController : PSListController {
    PSSpecifier *_locationRadioGroup;
    PSSpecifier *_customerSpecifier;
    PSSpecifier *_publicSeedSpecifier;
    PSSpecifier *_customerStagingSpecifier;
    PSSpecifier *_descriptionSpecifier;
}

- (id)specifiers;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)updateDescriptionForSpecifier:(id)a0;

@end
