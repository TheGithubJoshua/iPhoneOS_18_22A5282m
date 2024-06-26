@class NSString, NSUUID, NSMutableArray;
@protocol _HMFLogBackendSubmitterDelegate;

@interface HMFQueuingLogBackendSession : NSObject <HMFLogBackendSession> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _isOpen;
    NSMutableArray *_queuedEvents;
}

@property (readonly, nonatomic) NSString *serviceName;
@property (readonly, nonatomic) NSUUID *sessionUUID;
@property (readonly, nonatomic) BOOL isRealtime;
@property (readonly, weak, nonatomic) id<_HMFLogBackendSubmitterDelegate> submitter;
@property (readonly, nonatomic) id /* block */ timeSourceBlock;
@property (readonly, nonatomic) double lastEventTime;

+ (id)logCategory;

- (void).cxx_destruct;
- (BOOL)sendMessage:(id)a0;
- (void)dealloc;
- (void)close;
- (id)initWithServiceName:(id)a0 sessionUUID:(id)a1 isRealtime:(BOOL)a2 submitter:(id)a3 timeSourceBlock:(id /* block */)a4;

@end
