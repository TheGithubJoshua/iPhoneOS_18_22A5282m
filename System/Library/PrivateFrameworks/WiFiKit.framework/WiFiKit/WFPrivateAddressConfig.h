@class NSString;

@interface WFPrivateAddressConfig : NSObject <NSCopying>

@property (nonatomic) unsigned long long disabledReason;
@property (nonatomic, getter=isCarrierBundleBased) BOOL carrierBundleBased;
@property (copy, nonatomic) NSString *ssid;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPrivateAddressConfigDictionary:(id)a0 ssid:(id)a1;

@end
