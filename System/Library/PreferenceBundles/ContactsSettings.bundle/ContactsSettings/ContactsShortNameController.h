@class NSMutableArray, PSSpecifier;

@interface ContactsShortNameController : PSListController {
    PSSpecifier *_shortNameEnabledSpecifier;
    PSSpecifier *_shortNameFormatsGroup;
    NSMutableArray *_shortNameFormatsSpecifiers;
}

- (id)specifiers;
- (id)shortNameFormat;
- (void)setShortNameFormat:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)preferNicknames;
- (void)setPreferNicknames:(id)a0;
- (void)setShortNameEnabled:(id)a0;
- (id)shortNameEnabled;

@end
