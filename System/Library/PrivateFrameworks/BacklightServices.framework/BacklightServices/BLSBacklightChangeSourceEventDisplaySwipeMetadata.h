@interface BLSBacklightChangeSourceEventDisplaySwipeMetadata : BLSBacklightChangeSourceEventMetadata

@property (readonly, nonatomic) long long direction;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithDirection:(long long)a0;

@end
