@class NSTimer, _UIStatusBarVPNDisconnectView;

@interface _UIStatusBarVPNDisconnectItem : _UIStatusBarItem

@property (retain, nonatomic) _UIStatusBarVPNDisconnectView *disconnectView;
@property (retain, nonatomic) NSTimer *slashBeginTimer;

- (id)dependentEntryKeys;
- (id)viewForIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)applyUpdate:(id)a0 toDisplayItem:(id)a1;
- (BOOL)canEnableDisplayItem:(id)a0 fromData:(id)a1;
- (void)_create_disconnectView;

@end
