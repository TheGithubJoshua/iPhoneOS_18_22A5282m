@class NSString, NSSet, NSHashTable, AXDeviceMonitor, AXEventProcessor;

@interface AXMouseEventListener : NSObject <AXDeviceMonitorDelegate> {
    AXDeviceMonitor *_deviceMonitor;
    AXEventProcessor *_eventProcessor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cachedMouseDevicesLock;
    NSSet *_cachedMouseDevices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observerLock;
    NSHashTable *_observers;
}

@property (readonly, nonatomic) BOOL currentDevicesHaveAssistiveTouchCustomActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)_mouseMatching;

- (void)removeObserver:(id)a0;
- (id)_init;
- (void)beginFilteringButtonEvents;
- (BOOL)_handleMouseButtonEvent:(id)a0;
- (void).cxx_destruct;
- (void)_finishHandlingMouseButtonEvent:(id)a0 buttonMask:(double)a1 creatorHIDServiceClient:(struct __IOHIDServiceClient { } *)a2;
- (id)discoveredMouseDevices;
- (void)dealloc;
- (void)endFilteringButtonEvents;
- (void)mouseSettingsDidChange;
- (void)deviceMonitorDidDetectDeviceEvent:(id)a0;
- (void)addObserver:(id)a0;

@end
