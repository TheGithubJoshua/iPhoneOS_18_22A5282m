@class MTTimerStorage, NSString, MTXPCConnectionListenerProvider;
@protocol NAScheduler;

@interface MTTimerServer : NSObject <MTTimerObserver, MTTimerServer, MTAgentDiagnosticDelegate>

@property (readonly, nonatomic) MTTimerStorage *storage;
@property (readonly, nonatomic) MTXPCConnectionListenerProvider *connectionListenerProvider;
@property (readonly, nonatomic, getter=isSystemReady) BOOL systemReady;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)gatherDiagnostics;
- (void)getTimersWithCompletion:(id /* block */)a0;
- (void)startListening;
- (void)printDiagnostics;
- (void)stopListening;
- (id)_systemNotReadyError;
- (void)source:(id)a0 didFireTimer:(id)a1;
- (id)initWithStorage:(id)a0 connectionListenerProvider:(id)a1;
- (id)initWithStorage:(id)a0;
- (void)source:(id)a0 didDismissTimer:(id)a1;
- (void)handleSystemReady;
- (void)checkIn;
- (void)updateTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)source:(id)a0 didAddTimers:(id)a1;
- (void)dismissTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)nextTimerDidChange:(id)a0;
- (void)source:(id)a0 didUpdateTimers:(id)a1;
- (void)source:(id)a0 didRemoveTimers:(id)a1;
- (void).cxx_destruct;
- (BOOL)_isSystemReady;
- (void)addTimer:(id)a0 withCompletion:(id /* block */)a1;
- (void)repeatTimerWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)removeTimer:(id)a0 withCompletion:(id /* block */)a1;

@end
