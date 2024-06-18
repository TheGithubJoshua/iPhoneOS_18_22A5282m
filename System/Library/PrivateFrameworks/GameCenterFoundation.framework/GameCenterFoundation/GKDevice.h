@class NSString, GKEventEmitter;
@protocol GKLockStatusObserver;

@interface GKDevice : NSObject {
    NSString *_udid;
}

@property (retain, nonatomic) GKEventEmitter<GKLockStatusObserver> *emitter;
@property (retain, nonatomic) NSString *deviceType;
@property (readonly, nonatomic) NSString *udid;
@property (readonly, nonatomic) NSString *osVersion;
@property (readonly, nonatomic) NSString *buildVersion;
@property (readonly, nonatomic) NSString *gameKitVersion;
@property (readonly, nonatomic, getter=isGameKitAvailable) BOOL gameKitAvailable;
@property (readonly, nonatomic, getter=isInternalBuild) BOOL internalBuild;

+ (id)storeUserAgentWithDeviceType:(id)a0 osVersion:(id)a1;
+ (id)currentDevice;

- (id)userAgent;
- (id)platformBuildVersion;
- (id)_platformUDID;
- (id)init;
- (id)buildVersionHeader;
- (id)storeUserAgent;
- (void)stopObservingKeyBagStatus;
- (void)_initPlatform;
- (BOOL)isProductType:(unsigned int)a0;
- (id)userAgentWithProcessName:(id)a0 protocolVersion:(id)a1;
- (BOOL)isDevelopmentDevice;
- (void).cxx_destruct;
- (id)protocolVersionHeader;
- (id)processNameHeader;
- (void)beginObservingKeyBagStatusWithCallback:(void /* function */ *)a0;
- (BOOL)isFocusDevice;
- (void)dealloc;
- (void)addLockStatusObserver:(id)a0;
- (void)removeLockStatusObserver:(id)a0;

@end
