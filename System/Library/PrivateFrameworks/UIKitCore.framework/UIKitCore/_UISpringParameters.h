@interface _UISpringParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double _dampingRatio;
@property (readonly, nonatomic) double _response;

+ (id)parametersWithDampingRatio:(double)a0 response:(double)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDampingRatio:(double)a0 response:(double)a1;

@end
