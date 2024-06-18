@class NSObject;
@protocol OS_xpc_object;

@interface CKContextSemaphore : NSObject <NSSecureCoding> {
    BOOL _semaOwner;
    unsigned int _sema;
    unsigned long long _shmSize;
    struct { _Atomic unsigned int x0; _Atomic unsigned int x1; _Atomic unsigned int x2; _Atomic unsigned int x3; _Atomic int x4; _Atomic int x5; _Atomic unsigned long long x6; _Atomic unsigned int x7; _Atomic unsigned int x8; } *_shm;
    NSObject<OS_xpc_object> *_shmObject;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (void)initialize;

- (BOOL)busy;
- (id)initWithCoder:(id)a0;
- (void)notify;
- (unsigned long long)activeGauge;
- (BOOL)tryAcquireNeedsIncPending:(BOOL)a0;
- (long long)waitFor:(double)a0;
- (long long)pendingExceptionsCount;
- (void)notifyAll;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)sharedMemorySize;
- (void)setActiveGauge:(unsigned long long)a0;
- (id)initSemaphoreForXPCService;
- (void)decPending;
- (void)dealloc;
- (void)resetPending;
- (void)incPending;
- (unsigned long long)gauge;
- (long long)pending;
- (unsigned long long)numAcquired;
- (unsigned long long)requestsServed;

@end
