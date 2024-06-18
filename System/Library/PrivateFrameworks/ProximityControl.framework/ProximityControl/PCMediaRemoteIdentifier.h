@class NSString;

@interface PCMediaRemoteIdentifier : PCDeviceIdentifier <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *mediaRemoteID;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;

@end
