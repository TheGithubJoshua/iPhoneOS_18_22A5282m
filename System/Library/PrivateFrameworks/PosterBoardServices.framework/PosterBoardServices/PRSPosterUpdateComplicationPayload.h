@class NSArray;

@interface PRSPosterUpdateComplicationPayload : PRSPosterUpdatePayload <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *complications;

- (id)initWithCoder:(id)a0;
- (id)initWithComplications:(id)a0;
- (id)rawValue;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
