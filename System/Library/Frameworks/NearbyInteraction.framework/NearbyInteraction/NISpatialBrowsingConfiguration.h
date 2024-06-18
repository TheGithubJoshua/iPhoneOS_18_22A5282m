@class NSString;

@interface NISpatialBrowsingConfiguration : NIConfiguration

@property long long updatesPolicy;
@property (getter=isResponder) BOOL responder;
@property (copy) NSString *deviceIdentifier;
@property double maxNearbyObjectAge;

+ (BOOL)supportsSecureCoding;
+ (id)new;
+ (id)responderConfigurationWithIdentifier:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)descriptionInternal;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
