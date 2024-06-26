@class NSString, NSDate;

@interface MBDeviceLockInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *deviceUUID;
@property (retain, nonatomic) NSString *deviceName;
@property (retain, nonatomic) NSString *ownerDeviceUUID;
@property (retain, nonatomic) NSString *ownerDeviceName;
@property (retain, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSDate *expirationDate;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;

@end
