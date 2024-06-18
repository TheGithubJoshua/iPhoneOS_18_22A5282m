@class BrightnessSystemInternal;

@interface BrightnessSystem : NSObject {
    BrightnessSystemInternal *bsi;
}

- (id)copyPropertyForKey:(id)a0;
- (id)init;
- (void)registerNotificationBlock:(id /* block */)a0;
- (void)registerNotificationBlock:(id /* block */)a0 forProperties:(id)a1;
- (BOOL)isAlsSupported;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)dealloc;

@end
