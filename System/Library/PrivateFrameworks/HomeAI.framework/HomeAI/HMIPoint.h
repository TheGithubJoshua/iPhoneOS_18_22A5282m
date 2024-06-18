@interface HMIPoint : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct CGPoint { double x; double y; } point;
@property (readonly) double x;
@property (readonly) double y;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0;

@end