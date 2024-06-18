@class NSString, AVSystemController, NSMutableSet, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface AVSystemVolumeController : NSObject <AVVolumeHUDAssertionDelegate, AVVolumeController> {
    NSObject<OS_dispatch_queue> *_systemControllerQueue;
    BOOL _observingSystemController;
}

@property (class, readonly, nonatomic) NSMutableSet *windowSceneVolumeHUDAssertions;

@property (nonatomic, getter=isChangingVolume) BOOL changingVolume;
@property (nonatomic) BOOL currentRouteHasVolumeControl;
@property (nonatomic) float volume;
@property (nonatomic) BOOL volumeChangesThrottled;
@property (retain, nonatomic) NSNumber *targetVolumeInternal;
@property (retain, nonatomic) NSNumber *maximumTargetVolumeSinceChangingVolumeBegan;
@property (readonly, nonatomic) NSString *volumeCategory;
@property (retain, nonatomic) AVSystemController *sharedSystemController;
@property (nonatomic, getter=isFullyInitialized) BOOL fullyInitialized;
@property (readonly, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) NSString *windowSceneSessionIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL prefersSystemVolumeHUDHidden;

+ (id)volumeController;

- (void)_performOnMainThread:(id /* block */)a0;
- (id)init;
- (void)_postNotificationForNameIfFullyInitialized:(id)a0 userInfo:(id)a1;
- (void)_handleSystemControllerServerDiedNotification;
- (void)setClientWithIdentifier:(id)a0 forWindowSceneSessionWithIdentifier:(id)a1;
- (void)_unobserveSystemControllerIfNeeded;
- (void)endChangingVolume;
- (void)_handleCurrentRouteHasVolumeControlDidChangeNotification:(id)a0;
- (void)_applyProposedVolumeImmediately;
- (void).cxx_destruct;
- (void)_handleSystemVolumeDidChangeNotification:(id)a0;
- (void)_removeVolumeHUDAssertionsForClientID:(id)a0;
- (void)_setupSystemController;
- (void)setTargetVolume:(float)a0;
- (void)beginChangingVolume;
- (void)setSystemVolumeHUDEnabled:(BOOL)a0 forWindowSceneSessionIdentifier:(id)a1;
- (id)_requestSharedSystemController;
- (void)dealloc;
- (void)_applyProposedVolumeIfNeeded;
- (void)_observeSystemControllerIfNeeded;
- (id)currentSystemController;
- (void)setSystemVolumeHUDEnabled:(BOOL)a0 forSceneVolumeHudAssertion:(id)a1;

@end
