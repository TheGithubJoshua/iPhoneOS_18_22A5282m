@class NSString, HAPPairingIdentity, NSData, NSNumber;

@interface HAPAccessoryPairingRequest : HMFObject <NSCopying>

@property (copy) HAPPairingIdentity *pairingIdentity;
@property BOOL requiresUserConsent;
@property (copy) NSData *ownershipToken;
@property (copy) NSString *ssid;
@property (copy) NSData *psk;
@property (copy) NSString *isoCountryCode;
@property (copy) NSNumber *chipFabricIndex;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;

@end
