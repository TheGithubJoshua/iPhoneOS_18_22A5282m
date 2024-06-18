@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface CalDarwinNotificationListener : NSObject <CalActivatable>

@property (readonly, nonatomic) id /* block */ callback;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic) BOOL listening;
@property (readonly, nonatomic) NSString *notificationName;

- (BOOL)_removeObserver;
- (void)_notificationWithNameReceived:(id)a0;
- (void)activate;
- (BOOL)_addObserver;
- (void)deactivate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1 queue:(id)a2;
- (void)dealloc;
- (id)initWithNotificationName:(id)a0 callback:(id /* block */)a1;

@end
