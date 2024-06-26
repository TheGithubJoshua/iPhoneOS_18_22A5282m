@class NSData, STSCHWiFiAwareSecurityInfo, STSCHWiFiAwareDiscoveryChannelInfo;

@interface STSCHWiFiAwareAlternativeCarrier : STSCHAlternativeCarrier

@property (retain, nonatomic) NSData *serviceIdentifier;
@property (retain, nonatomic) STSCHWiFiAwareSecurityInfo *securityInfo;
@property (retain, nonatomic) STSCHWiFiAwareDiscoveryChannelInfo *discoveryChannelInfo;

+ (BOOL)supportsSecureCoding;
+ (id)connectionHandoverAlternativeCarrierWithBundle:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_createCarrierConfigurationRecord;
- (void)_initWithCarrierConfiguration:(id)a0;
- (id)initWithNdefRecordBundle:(id)a0;
- (id)initWithSecurityInfo:(id)a0 discoveryChannelInfo:(id)a1 powerState:(unsigned long long)a2 auxiliaryRecords:(id)a3;

@end
