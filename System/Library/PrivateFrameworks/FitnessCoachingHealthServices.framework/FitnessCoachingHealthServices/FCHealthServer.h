@class HDDaemonTransaction, NSUUID;
@protocol FCHealthProfileExtending;

@interface FCHealthServer : HDStandardTaskServer {
    HDDaemonTransaction *_daemonTransaction;
    id<FCHealthProfileExtending> _profileExtension;
    NSUUID *_taskUUID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _unfairLock;
}

+ (id)taskIdentifier;
+ (id)requiredEntitlements;

- (id)initWithUUID:(id)a0 configuration:(id)a1 client:(id)a2 delegate:(id)a3;
- (void)connectionInvalidated;
- (id)remoteInterface;
- (void).cxx_destruct;
- (id)exportedInterface;
- (void)pluginMessage:(unsigned long long)a0 data:(id)a1 completionHandler:(id /* block */)a2;
- (void)handleRegisterGoalProgressConfigurationData:(id)a0 service:(id)a1 completion:(id /* block */)a2;

@end
