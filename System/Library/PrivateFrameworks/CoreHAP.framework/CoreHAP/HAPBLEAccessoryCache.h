@class NSString, HAPBLEPeripheralInfo, NSNumber, NSMutableArray;

@interface HAPBLEAccessoryCache : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) HAPBLEPeripheralInfo *peripheralInfo;
@property (copy, nonatomic) id /* block */ saveBlock;
@property (readonly, nonatomic) NSNumber *metadataVersion;
@property (readonly, nonatomic) NSString *pairingIdentifier;
@property (readonly, nonatomic) NSMutableArray *cachedServices;
@property (retain, nonatomic) NSNumber *lastKeyBagIdentityIndexFailingPV;
@property (nonatomic) long long discoveryVersion;

+ (long long)currentDiscoveryVersion;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void)save;
- (void)updateWithService:(id)a0;
- (id)getCachedServiceWithUUID:(id)a0;
- (id)initWithPairingIdentifier:(id)a0;
- (void)updateCurrentPairingIdentityIndexIfNeededForKeyBag:(id)a0;
- (void)updateWithPeripheralInfo:(id)a0;
- (void)updateWithSaveBlock:(id /* block */)a0;

@end
