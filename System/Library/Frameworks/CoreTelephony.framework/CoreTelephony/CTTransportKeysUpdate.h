@class NSArray, NSString;

@interface CTTransportKeysUpdate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSArray *keys;
@property (retain, nonatomic) NSString *sps_environment;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWith:(id)a0;
- (id)initWith:(id)a0 sps:(id)a1;

@end
