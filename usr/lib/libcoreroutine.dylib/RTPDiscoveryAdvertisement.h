@class NSData, NSString, NSDate;

@interface RTPDiscoveryAdvertisement : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *address;
@property (readonly, copy, nonatomic) NSData *authTag;
@property (readonly, nonatomic) long long rssi;
@property (readonly, copy, nonatomic) NSDate *scanDate;
@property (readonly, copy, nonatomic) NSString *contactID;

- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAddress:(id)a0 authTag:(id)a1 rssi:(long long)a2 scanDate:(id)a3 contactID:(id)a4;

@end
