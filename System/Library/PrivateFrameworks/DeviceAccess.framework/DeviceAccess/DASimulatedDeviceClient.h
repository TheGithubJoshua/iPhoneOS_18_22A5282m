@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DASimulatedDeviceClient : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
}

@property (copy, nonatomic) NSString *deviceBonjourServiceType;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (id)descriptionWithLevel:(int)a0;
- (id)init;
- (void)activate;
- (void)_invalidated;
- (void)invalidate;
- (void).cxx_destruct;
- (id)description;

@end
