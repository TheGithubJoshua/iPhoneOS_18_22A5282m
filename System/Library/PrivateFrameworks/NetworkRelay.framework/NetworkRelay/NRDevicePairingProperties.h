@class NSData;

@interface NRDevicePairingProperties : NRDeviceProperties

@property (retain, nonatomic) NSData *outOfBandKey;
@property (nonatomic) BOOL wasInitiallySetupUsingIDSPairing;
@property (nonatomic) BOOL pairWithSPPLink;
@property (nonatomic) BOOL isAltAccountPairing;
@property (retain, nonatomic) NSData *bluetoothMACAddress;
@property (retain, nonatomic) NSData *awdlAddressData;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
