@class _TtC27SiriVirtualDeviceResolution19AppLaunchCapability;

@interface SVDAppLaunchCapability : SVDCapability {
    _TtC27SiriVirtualDeviceResolution19AppLaunchCapability *_backing;
}

+ (BOOL)supportsSecureCoding;
+ (id)capabilityDescriptionMatchingSupportStatus:(long long)a0;

- (id)initWithCoder:(id)a0;
- (id)_swiftBacking;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithStatus:(long long)a0;
- (long long)supportsAppLaunch;

@end
