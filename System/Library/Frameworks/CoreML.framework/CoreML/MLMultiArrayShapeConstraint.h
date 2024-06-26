@class NSOrderedSet, NSArray;

@interface MLMultiArrayShapeConstraint : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSOrderedSet *shapeSet;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSArray *sizeRangeForDimension;
@property (readonly, nonatomic) NSArray *enumeratedShapes;

- (id)initWithCoder:(id)a0;
- (id)initWithEnumeratedShapes:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isAllowedShape:(id)a0 error:(id *)a1;
- (id)initWithSizeRangeForDimension:(id)a0;
- (id)initUnspecified;
- (id)findAvailableShape:(id)a0;

@end
