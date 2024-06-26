@class NSString, NSDictionary, NSBundle, NSArray, PSSpecifier;

@interface PUIPhotoServicesAuthorizationLevelController : PSListItemsController {
    NSArray *_modifySelectionSpecifiers;
    PSSpecifier *_modifySelectionButton;
}

@property (copy, nonatomic) NSString *serviceKey;
@property (retain, nonatomic) NSDictionary *details;
@property (copy, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSBundle *entityBundle;

- (id)specifiers;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setSpecifier:(id)a0;
- (id)_modifySelectionSpecifiers;
- (void)_presentImagePickerForModifyingSelection;
- (id)footerStringForSpecifiers:(id)a0;

@end
