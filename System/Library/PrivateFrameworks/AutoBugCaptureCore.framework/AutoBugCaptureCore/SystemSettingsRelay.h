@class NSObject;
@protocol OS_dispatch_queue;

@interface SystemSettingsRelay : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) BOOL wifiEnabled;
@property (readonly) BOOL airplaneModeSwitchEnabled;
@property (readonly) BOOL cellDataSwitchEnabled;
@property (readonly) BOOL rnfEnabled;
@property (readonly) BOOL noBackhaulEnabled;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)defaultRelay;

- (id)init;
- (void).cxx_destruct;
- (void)_setRnfEnabled:(BOOL)a0;
- (void)_setAirplaneModeSwitchEnabled:(BOOL)a0;
- (void)_setCellDataSwitchEnabled:(BOOL)a0;
- (void)_setNoBackhaulEnabled:(BOOL)a0;
- (void)_setWifiEnabled:(BOOL)a0;

@end