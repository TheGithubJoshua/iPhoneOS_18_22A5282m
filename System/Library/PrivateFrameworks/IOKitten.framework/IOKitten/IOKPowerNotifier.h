@protocol IOKPowerNotifierDelegate;

@interface IOKPowerNotifier : NSObject {
    struct IONotificationPort { } *_notificationPort;
    unsigned int _connection;
    unsigned int _notifier;
}

@property (weak, nonatomic) id<IOKPowerNotifierDelegate> delegate;

- (void)systemWillSleep;
- (void)systemHasPoweredOn;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)a0;
- (void)_handlePowerNotificationWithMessageType:(unsigned int)a0 andArgument:(long long)a1;
- (void)systemWillNotSleep;
- (void)systemWillPowerOn;

@end
