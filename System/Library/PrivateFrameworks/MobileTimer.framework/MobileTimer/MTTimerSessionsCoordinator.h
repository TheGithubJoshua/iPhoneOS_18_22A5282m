@class NSObject, NSString, MTTimerStorage, BSServiceConnection, MTSessionsManager;
@protocol BSServiceConnectionClient, NAScheduler, OS_dispatch_queue;

@interface MTTimerSessionsCoordinator : NSObject <MTTimerObserver, ClockAngelClient, MTSource>

@property (readonly, nonatomic) MTTimerStorage *storage;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (retain, nonatomic) MTSessionsManager *sessionsManager;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionClient> *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *connectionQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSessions;

- (id)setupInterface;
- (void)source:(id)a0 didFireTimer:(id)a1;
- (id)sourceIdentifier;
- (id)initWithStorage:(id)a0;
- (void)stopTimer;
- (void)buildConnection;
- (void)source:(id)a0 didDismissTimer:(id)a1;
- (void)handleSystemReady;
- (void)source:(id)a0 didAddTimers:(id)a1;
- (void)nextTimerDidChange:(id)a0;
- (void)source:(id)a0 didUpdateTimers:(id)a1;
- (void)source:(id)a0 didRemoveTimers:(id)a1;
- (id)currentTimer;
- (id)server;
- (id)normalizedTimeString:(double)a0 state:(unsigned long long)a1;
- (void)processTimerUpdate:(id)a0;
- (void).cxx_destruct;
- (void)resumeTimer;
- (void)dealloc;
- (void)resendTimerDataEntry;
- (void)pauseTimer;
- (void)updateTimerWithState:(unsigned long long)a0;

@end
