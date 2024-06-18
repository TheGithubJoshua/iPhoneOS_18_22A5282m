@class NSUUID, NSString;

@interface CWFRequestParameters : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSUUID *UUID;
@property (copy, nonatomic) NSString *interfaceName;
@property (nonatomic) int virtualInterfaceRole;
@property (nonatomic) unsigned long long timeout;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long queuePriority;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRequestParameters:(id)a0;

@end
