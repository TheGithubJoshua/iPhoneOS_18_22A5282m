@class TRSession, HMDeviceSetupSession, NSString, HMAccessory, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface HMDeviceSetupOperation : NSOperation <HMDeviceSetupSessionDelegate, HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) HMDeviceSetupSession *setupSession;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (readonly, weak) TRSession *session;
@property (readonly) NSError *error;
@property (readonly) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (BOOL)isAsynchronous;
- (void)finish;
- (id)init;
- (void)setAccessory:(id)a0;
- (id)logIdentifier;
- (void)cancel;
- (void)cancelWithError:(id)a0;
- (void)start;
- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setQualityOfService:(long long)a0;
- (void)setError:(id)a0;
- (void)setupSession:(id)a0 didCloseWithError:(id)a1;
- (void)setupSession:(id)a0 didReceiveExchangeData:(id)a1 completionHandler:(id /* block */)a2;

@end
