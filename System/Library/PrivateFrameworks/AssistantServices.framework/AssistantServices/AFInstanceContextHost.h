@class AFInstanceInfo;

@interface AFInstanceContextHost : AFInstanceContext {
    AFInstanceInfo *_info;
}

+ (id)effectiveMachServiceName:(id)a0;

- (BOOL)isCurrent;
- (BOOL)isDefault;
- (id)init;
- (id)audioDeviceIdentifier;
- (id)createXPCListenerForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (BOOL)supportsTelephony;
- (id)info;
- (id)createXPCListenerWithMachServiceName:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)createXPCConnectionForMachService:(const char *)a0 targetQueue:(id)a1 flags:(unsigned long long)a2;
- (id)createXPCConnectionWithMachServiceName:(id)a0 options:(unsigned long long)a1;
- (id)mediaRouteIdentifier;
- (id)preferencesSubdomain;
- (BOOL)supportsProxyGroupPlayer;
- (BOOL)supportsAudioPowerUpdate;

@end
