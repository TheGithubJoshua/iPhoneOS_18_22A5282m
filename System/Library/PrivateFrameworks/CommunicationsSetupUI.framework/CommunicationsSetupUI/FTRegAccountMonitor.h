@class IMServiceImpl, NSArray, FTRegConnectionHandler;

@interface FTRegAccountMonitor : NSObject {
    FTRegConnectionHandler *_connectionHandler;
    struct { unsigned char listeningForNotifications : 1; } _monitorFlags;
}

@property (nonatomic) long long serviceType;
@property (retain, nonatomic) IMServiceImpl *service;
@property (readonly, retain, nonatomic) NSArray *activeAccounts;

- (void).cxx_destruct;
- (id)initWithServiceType:(long long)a0;
- (void)_stopListeningForNotifications;
- (void)dealloc;
- (void)_handleDaemonConnected:(id)a0;
- (id)logName;
- (void)_startListeningForNotifications;
- (id)_activeAccounts;
- (BOOL)_shouldHandleAccountNofication:(id)a0;
- (void)_handleAccountNotification:(id)a0;
- (void)_updateAccountState:(BOOL)a0;

@end
