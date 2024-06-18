@class NSObject;
@protocol OS_dispatch_queue;

@interface DaemonUtils : NSObject

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serverQueue;

+ (BOOL)deviceHasTouchIDAndSecureDoublePress;
+ (void)dispatchReallyAfter:(long long)a0 tolerance:(double)a1 queue:(id)a2 block:(id /* block */)a3;
+ (id)sharedInstance;
+ (BOOL)deviceHasTouchID;
+ (BOOL)isSpecialUiAvailable;
+ (BOOL)deviceSupportsSecureDoubleClick;
+ (BOOL)deviceHasSEP;
+ (id)callerDisplayNameWithPid:(int)a0 auditToken:(struct { unsigned int x0[8]; })a1 bundleId:(id *)a2;
+ (void)dispatchSyncOnMain:(id /* block */)a0;
+ (BOOL)deviceHasPearl;
+ (BOOL)deviceHasSpecialTouchID;
+ (BOOL)callerIsAllowedNonUiExtension:(id)a0;
+ (BOOL)_isNonUiExtensionPointIdentifier:(id)a0;
+ (BOOL)deviceHasSecureDoublePressHW;
+ (BOOL)deviceIsPoseidon;

- (id)init;
- (void).cxx_destruct;

@end
