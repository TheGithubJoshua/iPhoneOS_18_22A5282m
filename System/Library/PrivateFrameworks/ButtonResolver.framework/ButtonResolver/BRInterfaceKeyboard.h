@class NSMutableSet, NSMutableDictionary;

@interface BRInterfaceKeyboard : BRInterface {
    struct __IOHIDEventSystemClient { } *_client;
    NSMutableDictionary *_propertyCache;
    unsigned long long _doublePressTimeoutUs;
    unsigned long long _triplePressTimeoutUs;
    unsigned long long _longPressTimeoutUs;
    BOOL _isReady;
    unsigned long long _maxAssetSlots;
    unsigned long long _unusedAssetSlots;
}

@property (readonly, nonatomic) NSMutableSet *services;

+ (id)interface;

- (BOOL)disableStates:(id)a0 clearAsset:(BOOL)a1 error:(id *)a2;
- (BOOL)setGlobalConfigs:(id)a0 error:(id *)a1;
- (id)propertyList;
- (id)init;
- (BOOL)isReady;
- (BOOL)_setConfig:(id)a0 forState:(unsigned long long)a1 error:(id *)a2;
- (void)scheduleReadyNotificationWithBlock:(id /* block */)a0;
- (unsigned long long)unusedAssetSlots;
- (void)_findServices;
- (id)description;
- (BOOL)_setCachedPropertiesOnService:(struct __IOHIDServiceClient { } *)a0;
- (unsigned long long)maxAssetSlots;
- (BOOL)_enableState:(unsigned long long)a0;
- (BOOL)_disableState:(unsigned long long)a0;
- (void)dealloc;
- (BOOL)enableStates:(id)a0 error:(id *)a1;
- (BOOL)_servicesSetProperty:(void *)a0 forKey:(struct __CFString { } *)a1;
- (BOOL)setConfigs:(id)a0 withAssets:(id)a1 forStates:(id)a2 error:(id *)a3;

@end
