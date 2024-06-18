@class PLAgent;

@interface PLTelephonyConnection : NSObject {
    struct __CTServerConnection { } *connection;
    struct __CFMachPort { } *ctServerPort;
    struct __CFRunLoopSource { } *ctServerSource;
}

@property (readonly, nonatomic) struct __CTServerConnection { } *connection;
@property (retain) PLAgent *observerAgent;

+ (id)sharedTelephonyConnection;

- (void)registerCallback:(void /* function */ *)a0 forTelephonyNotification:(struct __CFString { } *)a1;
- (id)init;
- (void)enableDiagLogging;
- (id)humanReadableRATName:(struct __CFString { } *)a0;
- (BOOL)requestBasebandCoreDump:(id)a0;
- (void)getRAT:(id *)a0 preferredRAT:(id *)a1 campedRAT:(id *)a2;
- (id)currentCallStatus;
- (id)getProperty:(id)a0 forTrace:(id)a1;
- (id)humanReadableCallStatus:(int)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (id)getRemotePortNameWithLocalName:(id)a0;
- (void)deregisterForAllTelephonyNotifications;
- (id)activeBand;
- (void)teardownConnection;
- (BOOL)requestBasebandStateDump:(id)a0;
- (void)getSignalStrength:(long long *)a0 asPercentage:(long long *)a1 withBars:(long long *)a2;

@end
