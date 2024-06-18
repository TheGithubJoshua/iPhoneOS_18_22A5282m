@class PSSpecifier;

@interface GKSettingsGlobalFriendListAccessCell : PSSwitchTableCell

@property (weak, nonatomic) PSSpecifier *specfier;

- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)controlChanged:(id)a0;
- (id)getSwitch;
- (BOOL)globalFriendListAccess;

@end
