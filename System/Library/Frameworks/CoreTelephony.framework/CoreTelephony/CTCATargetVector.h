@class CTCATargetVectorAxis;

@interface CTCATargetVector : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) CTCATargetVectorAxis *x;
@property (retain, nonatomic) CTCATargetVectorAxis *y;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
