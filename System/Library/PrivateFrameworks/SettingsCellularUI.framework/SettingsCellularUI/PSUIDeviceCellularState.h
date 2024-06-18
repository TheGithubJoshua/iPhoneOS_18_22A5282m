@interface PSUIDeviceCellularState : NSObject

+ (id)sharedInstance;

- (id)initPrivate;
- (id)init;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)getLogger;
- (void)dealloc;
- (BOOL)isConnectedOverCellular;

@end
