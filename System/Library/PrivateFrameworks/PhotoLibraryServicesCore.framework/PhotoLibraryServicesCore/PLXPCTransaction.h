@class NSObject;
@protocol OS_os_transaction;

@interface PLXPCTransaction : NSObject {
    const char *_identifier;
    NSObject<OS_os_transaction> *_transaction;
}

+ (void)discardCallStackSymbols:(id)a0;
+ (void)_startTrackingTransaction:(id)a0;
+ (void)initialize;
+ (id)openXPCTransactionStatus;
+ (void)_stopTrackingTransaction:(id)a0;
+ (id)callStackSymbols;
+ (id)transaction:(const char *)a0;

- (id)initWithIdentifier:(const char *)a0;
- (id)_statusDescription;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (void)stillAlive;

@end
