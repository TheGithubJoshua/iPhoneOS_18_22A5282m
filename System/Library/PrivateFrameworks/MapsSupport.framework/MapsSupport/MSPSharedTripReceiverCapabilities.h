@class NSSet;

@interface MSPSharedTripReceiverCapabilities : NSObject <NSCopying> {
    NSSet *_supportedProperties;
    NSSet *_unsupportedProperties;
}

@property (readonly, nonatomic) BOOL supportsRoutingPathLeg;
@property (readonly, nonatomic) BOOL supportsWaypointRouteSharing;

+ (void)enumerateReceiverCapabilityConfigurationsForState:(id)a0 withBlock:(id /* block */)a1;
+ (void)enumerateReceiverCapabilityConfigurationsWithBlock:(id /* block */)a0;
+ (id)legacyReceiverCapabilities;
+ (id)starskyReceiverCapabilities;
+ (id)sydromeReceiverCapabilities;
+ (id)unrestrictedReceiverCapabilities;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)idsSendMessageOptions;
- (id)initWithRegistrationPropertiesSupported:(id)a0 propertiesUnsupported:(id)a1;

@end
