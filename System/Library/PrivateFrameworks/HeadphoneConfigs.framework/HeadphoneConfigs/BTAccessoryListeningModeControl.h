@class NSMutableArray, BTSDevice, MediaControlsBluetoothListeningModeButton;

@interface BTAccessoryListeningModeControl : PSTableCell {
    MediaControlsBluetoothListeningModeButton *_listeningModeButton;
    NSMutableArray *_listeningModesArray;
}

@property (nonatomic) int accessoryListeningModeSupport;
@property (weak, nonatomic) BTSDevice *currentDevice;

+ (double)preferredHeight;
+ (long long)cellStyle;

- (void)applicationDidBecomeActive:(id)a0;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)listeningMode;
- (BOOL)becomeFirstResponder;
- (BOOL)setListeningMode:(id)a0;
- (void)refreshCellContentsWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)layoutSubviews;
- (void)bluetoothListeningModeButtonDidUpdateValue:(id)a0;

@end
