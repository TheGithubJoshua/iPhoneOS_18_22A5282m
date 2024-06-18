@class NSString, HMHomeManager, NSMutableSet, NSObject;
@protocol OS_dispatch_queue, MediaControlsHomeObserverDelegate;

@interface MediaControlsHomeObserver : NSObject <HMHomeDelegate, HMHomeManagerDelegate> {
    HMHomeManager *_homeManager;
    NSMutableSet *_knownUIDs;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_notifyQueue;
}

@property (weak, nonatomic) id<MediaControlsHomeObserverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)homeManager:(id)a0 didRemoveHome:(id)a1;
- (id)init;
- (void)stopObserving;
- (void)beginObserving;
- (void)_notifyDelegate;
- (void).cxx_destruct;
- (void)_updateUIDs;
- (BOOL)hasAccessoryWithUID:(id)a0;
- (void)home:(id)a0 didRemoveAccessory:(id)a1;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (void)homeManager:(id)a0 didAddHome:(id)a1;
- (void)home:(id)a0 didAddAccessory:(id)a1;

@end