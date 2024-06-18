@class BTSDevice;

@interface AccessorySubController : PSListItemsController {
    BTSDevice *_currentDevice;
}

- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)listItemSelected:(id)a0;

@end
