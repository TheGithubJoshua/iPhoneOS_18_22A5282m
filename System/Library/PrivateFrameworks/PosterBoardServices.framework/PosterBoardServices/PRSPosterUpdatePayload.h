@interface PRSPosterUpdatePayload : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)nullPayload;

- (id)initWithCoder:(id)a0;
- (id)_init;
- (id)rawValue;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
