@class NSLock, NSObject;
@protocol OS_os_transaction;

@interface MNXPCTransactionCounter : NSObject {
    NSObject<OS_os_transaction> *_osTransaction;
    NSLock *_countLock;
    unsigned long long _count;
}

- (void)decrement;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)count;
- (void)increment:(id)a0;

@end
