@class GKGameSettingsInternal, GKGame;

@interface GKSettingsFriendListAccessCell : PSSwitchTableCell

@property (retain, nonatomic) GKGame *currentGame;
@property (retain, nonatomic) GKGameSettingsInternal *currentGameSettings;

+ (long long)cellStyle;

- (BOOL)canReload;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)controlChanged:(id)a0;
- (id)getSwitch;

@end
