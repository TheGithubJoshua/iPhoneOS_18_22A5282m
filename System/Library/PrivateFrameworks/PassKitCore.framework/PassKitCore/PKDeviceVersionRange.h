@class NSString, NSArray;

@interface PKDeviceVersionRange : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *minimum;
@property (readonly, nonatomic) NSString *maximum;
@property (readonly, nonatomic) NSArray *models;
@property (readonly, nonatomic) PKDeviceVersionRange *companion;

- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)asDictionary;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_matchesDeviceVersion:(id)a0;
- (BOOL)isEqualToDeviceVersionRange:(id)a0;

@end
