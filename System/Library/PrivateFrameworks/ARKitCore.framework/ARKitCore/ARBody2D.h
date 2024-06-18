@class ARSkeleton2D;

@interface ARBody2D : NSObject

@property (readonly, nonatomic) ARSkeleton2D *skeleton;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithSkeleton2D:(id)a0;

@end
