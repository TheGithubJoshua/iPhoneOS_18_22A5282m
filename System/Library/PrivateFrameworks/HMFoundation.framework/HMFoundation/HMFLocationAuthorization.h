@class __HMFLocationAuthorizationMarkOperation, NSString, NSBundle, CLLocationManager, NSMutableSet, NSObject, __HMFLocationAuthorizationRequest;
@protocol OS_dispatch_queue;

@interface HMFLocationAuthorization : HMFObject <CLLocationManagerDelegate, HMFLogging> {
    struct hmf_unfair_data_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock; } _lock;
    int _status;
    long long _state;
    NSMutableSet *_observers;
    __HMFLocationAuthorizationRequest *_request;
    __HMFLocationAuthorizationMarkOperation *_operation;
}

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) NSBundle *bundle;
@property (readonly) CLLocationManager *internal;
@property (readonly) int status;
@property (retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly, getter=isAuthorized) BOOL authorized;
@property (readonly, getter=isMonitoring) BOOL monitoring;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedAuthorization;
+ (id)logCategory;
+ (void)initialize;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)init;
- (void)unregisterObserver:(id)a0;
- (void)locationManagerDidChangeAuthorization:(id)a0;
- (id)logIdentifier;
- (void)registerObserver:(id)a0;
- (void)mark;
- (void)requestAuthorization:(long long)a0 completionHandler:(id /* block */)a1;
- (void)locationOperationCompleted;
- (id)initWithBundleIdentifier:(id)a0;
- (id)initWithBundle:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)attributeDescriptions;

@end
