@interface MLInternalSettings : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL restrictNeuralNetworksToUseCPUOnly;
@property BOOL restrictNeuralNetworksFromUsingANE;
@property (readonly, nonatomic) BOOL isNeuralNetworkGPUPathForbidden;

+ (id)globalSettings;
+ (id)globalSettingsFromSettings:(id)a0;
+ (BOOL)deviceHasANE;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;

@end
