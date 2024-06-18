@class SUNavigationMenu;

@interface SUNavigationMenuViewController : SUMenuViewController

@property (readonly, nonatomic) SUNavigationMenu *navigationMenu;

- (id)init;
- (long long)numberOfMenuItems;
- (void)dealloc;
- (void)viewWillAppear:(BOOL)a0;
- (void)_cancelAction:(id)a0;
- (void)_protocolButtonAction:(id)a0;
- (id)initWithNavigationMenu:(id)a0;
- (id)titleOfMenuItemAtIndex:(long long)a0;

@end
