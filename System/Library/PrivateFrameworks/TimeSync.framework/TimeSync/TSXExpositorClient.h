@class NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSXExpositorClient : TSXClient <TSXExpositorClientProtocol> {
    NSObject<OS_dispatch_queue> *_clockManagerNotifications;
    NSMutableArray *_clockManagerMatchNotificationsArray;
    NSMutableArray *_clockManagerTerminateNotificationsArray;
    BOOL _clockManagerAvailable;
    NSObject<OS_dispatch_queue> *_ptpManagerNotifications;
    NSMutableArray *_ptpManagerMatchNotificationsArray;
    NSMutableArray *_ptpManagerTerminateNotificationsArray;
    BOOL _ptpManagerAvailable;
    BOOL _inited;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceName;
+ (id)serverProtocol;
+ (id)clientProtocol;
+ (id)sharedExpositorClient;

- (id)exportedObject;
- (id)init;
- (void)gPTPManagerNotifyWhengPTPManagerIsAvailable:(id /* block */)a0;
- (id)clockManagerDiagnosticInfo;
- (void)gPTPManagerNotifyWhengPTPManagerIsUnavailable:(id /* block */)a0;
- (void)gPTPManagerIsAvailable;
- (id)gPTPManagerDiagnosticInfo;
- (void)clockManagerIsUnavailable;
- (id)gPTPPortDiagnosticInfoForPortWithClockIdentifier:(unsigned long long)a0 andPortNumber:(unsigned short)a1;
- (void)interruptedConnection;
- (id)clockManagerDiagnosticInfoForClockIdentifier:(unsigned long long)a0;
- (void)gPTPManagerIsUnavailable;
- (void)clockManagerNotifyWhenClockManagerIsUnavailable:(id /* block */)a0;
- (void).cxx_destruct;
- (void)invalidatedConnection;
- (void)clockManagerIsAvailable;
- (id)kernelClockAvailableKernelClockIdentifiers;
- (id)clockNameForClockIdentifier:(unsigned long long)a0;
- (id)clockManagerDaemonClassNameForClockIdentifier:(unsigned long long)a0;
- (void)clockManagerNotifyWhenClockManagerIsAvailable:(id /* block */)a0;
- (id)clockManagerDiagnosticInfoForClockIdentifier:(unsigned long long)a0 daemonClassName:(id *)a1;

@end
