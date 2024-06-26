@interface SBSDisplayModeSettings : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long scale;
@property (readonly, nonatomic) long long overscanCompensation;

+ (id)fromDefaultsRepresentation:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)initWithSettings:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)defaultsRepresentation;
- (id)initWithScale:(unsigned long long)a0 overscanCompensation:(long long)a1;

@end
