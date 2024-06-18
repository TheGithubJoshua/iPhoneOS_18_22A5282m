@class NSString, BTSDevice;

@interface AccessoryControlListItemsController : PSListItemsController {
    BTSDevice *_currentDevice;
    struct { BOOL normal; BOOL anc; BOOL transparency; } _listeningModeConfigs;
    NSString *_currentSelectedSpecifier;
}

- (id)specifiers;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)listItemSelected:(id)a0;

@end
