@class AVOutputContext, AVOutputDevice;
@protocol MRUOutputContextControllerDelegate;

@interface MRUOutputContextController : NSObject {
    long long _outputContextType;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (weak, nonatomic) id<MRUOutputContextControllerDelegate> delegate;
@property (readonly, nonatomic) AVOutputContext *outputContext;
@property (readonly, nonatomic) AVOutputDevice *outputDevice;

- (void)outputDeviceChangedNotification:(id)a0;
- (void)initializeOutputContext;
- (void)unregisterNotifications;
- (void)setOutputDevice:(id)a0 completion:(id /* block */)a1;
- (void)registerNotificationsForOutputContext:(id)a0;
- (void).cxx_destruct;
- (void)mediaServicesWereResetNotification:(id)a0;
- (id)associatedOutputContext;
- (id)initWithOutputContextType:(long long)a0;

@end
