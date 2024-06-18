@class CellularStateRelay, SystemSettingsRelay;

@interface SmartDataModeRelay : NSObject {
    CellularStateRelay *_cellStateRelay;
    SystemSettingsRelay *_systemSettingsRelay;
}

@property (nonatomic) unsigned char cellDataStatus;

+ (id)sharedInstance;
+ (id)cellDataStatusToString:(unsigned char)a0;

- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_updateCellDataStatus;
- (void).cxx_destruct;
- (void)dealloc;

@end
