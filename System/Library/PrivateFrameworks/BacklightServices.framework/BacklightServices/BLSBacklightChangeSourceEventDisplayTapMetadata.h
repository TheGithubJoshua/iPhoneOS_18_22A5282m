@interface BLSBacklightChangeSourceEventDisplayTapMetadata : BLSBacklightChangeSourceEventMetadata

@property (readonly, nonatomic) struct CGPoint { double x; double y; } position;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithPosition:(struct CGPoint { double x0; double x1; })a0;

@end
