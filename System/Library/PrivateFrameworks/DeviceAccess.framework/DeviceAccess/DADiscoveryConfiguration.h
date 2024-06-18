@class NSString, NSArray;

@interface DADiscoveryConfiguration : NSObject <CUXPCCodable, NSCopying>

@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL presenceOnly;
@property (copy, nonatomic) NSArray *bluetoothCompanyIdentifiers;
@property (copy, nonatomic) NSArray *bluetoothServices;
@property (copy, nonatomic) NSArray *bonjourServiceTypes;

- (id)initWithXPCObject:(id)a0 error:(id *)a1;
- (void)encodeWithXPCObject:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
