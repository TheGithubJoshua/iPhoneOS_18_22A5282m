@class NSObject;
@protocol OS_os_transaction, OS_dispatch_source, OS_dispatch_queue;

@interface MTOSTransaction : NSObject

@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)transactionWithDescription:(id)a0;
+ (id)transactionWithDescription:(id)a0 timeout:(double)a1;
+ (id)transactionWithDescription:(id)a0 timeout:(double)a1 timeoutBlock:(id /* block */)a2;

- (void)end;
- (void)_cancel;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDescription:(id)a0 timeout:(double)a1 timeoutBlock:(id /* block */)a2;

@end
