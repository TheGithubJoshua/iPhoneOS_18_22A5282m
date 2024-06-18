@class NSString, NSDictionary;

@interface MBDeviceTransferPreflight : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *uuid;
@property (nonatomic) unsigned long long sourceDeviceDataSize;
@property (nonatomic) unsigned long long targetDeviceFreeSpaceSize;
@property (nonatomic) unsigned long long sourcePurgeableSpaceSize;
@property (retain, nonatomic) NSString *activeAppleID;
@property (retain, nonatomic) NSDictionary *appleIDs;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
