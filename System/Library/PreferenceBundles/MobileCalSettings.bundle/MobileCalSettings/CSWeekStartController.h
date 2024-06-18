@class NSMutableArray, PSSpecifier;

@interface CSWeekStartController : PSListController {
    PSSpecifier *_systemWeekStartGroup;
    PSSpecifier *_systemWeekStartItem;
    PSSpecifier *_customWeekStartGroup;
    NSMutableArray *_customWeekStartItems;
}

- (id)specifiers;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)showLanguageAndRegionSettings:(id)a0;

@end
