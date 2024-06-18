@class NSString, NSDictionary;

@interface FMDExtAccessoryInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *accessoryIdentifier;
@property (retain, nonatomic) NSString *accessoryType;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *serialNumbers;
@property (retain, nonatomic) NSString *firmwareVersion;
@property (retain, nonatomic) NSString *deviceDiscoveryId;
@property (retain, nonatomic) NSDictionary *additionalInfo;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
