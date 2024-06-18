@class CellularLogging, NSHashTable;

@interface SBFRemoteBasebandLoggingManager : NSObject

@property (retain, nonatomic) CellularLogging *cellularLogging;
@property (retain, nonatomic) NSHashTable *observers;

+ (id)sharedInstance;

- (void)removeObserver:(id)a0;
- (id)init;
- (void)_notifyObservers;
- (void).cxx_destruct;
- (BOOL)isLogCollectionEnabled;
- (void)addObserver:(id)a0;

@end
