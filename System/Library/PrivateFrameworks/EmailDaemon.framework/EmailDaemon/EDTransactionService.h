@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface EDTransactionService : NSObject

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;

- (void)endTransaction:(id)a0;
- (id)initWithServiceName:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasPendingTransactions;
- (id)startTransaction;
- (void)resetPendingTransactions;

@end
