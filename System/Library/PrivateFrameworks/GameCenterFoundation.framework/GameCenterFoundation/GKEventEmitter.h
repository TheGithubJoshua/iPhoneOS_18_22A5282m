@class NSMutableArray, NSHashTable;

@interface GKEventEmitter : NSObject

@property (retain, nonatomic) NSHashTable *listeners;
@property (retain, nonatomic) NSMutableArray *supportedProtocols;
@property (nonatomic) BOOL shouldQueue;
@property (retain, nonatomic) NSMutableArray *queuedEvents;

+ (id)eventEmitterForProtocols:(id)a0;
+ (id)eventEmitterForProtocols:(id)a0 shouldQueue:(BOOL)a1;

- (id)invocationForProtocol:(id)a0 selector:(SEL)a1;
- (id)methodSignatureForSelector:(SEL)a0;
- (void)unregisterListener:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)unregisterAllListeners;
- (BOOL)listenerRegisteredForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)methodSignatureForProtocol:(id)a0 selector:(SEL)a1;
- (void)registerListener:(id)a0;
- (id)initWithSupportedProtocols:(id)a0 shouldQueue:(BOOL)a1;
- (void)dispatchQueuedEventsToListener:(id)a0;

@end
