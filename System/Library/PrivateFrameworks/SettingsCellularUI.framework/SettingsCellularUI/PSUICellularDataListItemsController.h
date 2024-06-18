@class RadiosPreferences;

@interface PSUICellularDataListItemsController : PSListItemsController <RadiosPreferencesDelegate>

@property (retain, nonatomic) RadiosPreferences *radioPreferences;

- (id)specifiers;
- (id)init;
- (void)airplaneModeChanged;
- (id)getLogger;
- (void).cxx_destruct;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setSpecifier:(id)a0;
- (void)reloadCache;

@end
