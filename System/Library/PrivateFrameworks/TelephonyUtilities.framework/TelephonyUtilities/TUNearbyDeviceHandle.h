@class NSDictionary, NSString, TUNearbyDeviceHandleCapabilities;

@interface TUNearbyDeviceHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *knownIdentifiersByHandleType;
@property (readonly, nonatomic) NSDictionary *plistRepresentation;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) long long deviceModel;
@property (readonly, nonatomic) TUNearbyDeviceHandleCapabilities *capabilities;

- (id)initWithCoder:(id)a0;
- (id)identifierDescription;
- (BOOL)isEquivalentToDeviceHandle:(id)a0;
- (BOOL)isEqualToDeviceHandle:(id)a0;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2 capabilities:(id)a3;
- (id)initWithType:(long long)a0 identifier:(id)a1 name:(id)a2;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 knownIdentifiers:(id)a1 deviceModel:(long long)a2;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithName:(id)a0 knownIdentifiers:(id)a1;
- (id)initWithName:(id)a0 knownIdentifiers:(id)a1 deviceModel:(long long)a2 capabilities:(id)a3;
- (id)identifierWithType:(long long)a0;

@end
