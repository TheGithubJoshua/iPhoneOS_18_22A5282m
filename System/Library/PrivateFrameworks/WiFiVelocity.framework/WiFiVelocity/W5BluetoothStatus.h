@class NSString, NSArray;

@interface W5BluetoothStatus : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL powerOn;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) BOOL isDiscoverable;
@property (nonatomic) BOOL isConnectable;
@property (nonatomic) BOOL isScanning;
@property (copy, nonatomic) NSArray *devices;

- (id)initWithCoder:(id)a0;
- (BOOL)conformsToProtocol:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqualToBluetoothStatus:(id)a0;

@end
