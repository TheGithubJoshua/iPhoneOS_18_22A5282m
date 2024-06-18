@class NSString;

@interface MCUITableViewController : UITableViewController <PSStateRestoration>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)_contentSizeCategoryDidChangeNotification:(id)a0;
- (BOOL)canBeShownFromSuspendedState;
- (void)reloadTableOnContentSizeCategoryChange;
- (void)updateExtendedLayoutIncludesOpaqueBars;

@end
