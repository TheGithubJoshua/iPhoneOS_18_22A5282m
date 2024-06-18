@class NSMutableDictionary, EDMessagePersistence, EMRemoteContentURLSession;
@protocol EFScheduler;

@interface EDBIMIManager : NSObject {
    NSMutableDictionary *_activeDataTasksByRequest;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _activeDataTasksLock;
}

@property (readonly, nonatomic) EDMessagePersistence *messagePersistence;
@property (readonly, nonatomic) EMRemoteContentURLSession *urlSession;
@property (readonly, nonatomic) id<EFScheduler> downloadScheduler;

- (id)initWithMessagePersistence:(id)a0 urlSession:(id)a1;
- (id)processBIMIHeadersForMessages:(id)a0;
- (void).cxx_destruct;
- (void)scheduleRecurringActivity;
- (void)dealloc;
- (void)test_tearDown;

@end
