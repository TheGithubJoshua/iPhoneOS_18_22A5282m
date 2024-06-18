@class NSString;

@interface PPConnectionsCriteria : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char locationField;
@property (copy, nonatomic) NSString *bundleIdentifier;

- (id)initWithCoder:(id)a0;
- (id)initWithLocationField:(unsigned char)a0 bundleIdentifier:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
