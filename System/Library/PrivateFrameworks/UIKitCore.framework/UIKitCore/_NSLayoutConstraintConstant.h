@class NSString;

@interface _NSLayoutConstraintConstant : NSObject <NSCoding, NSCopying>

@property (readonly, copy, nonatomic) NSString *symbolicValue;
@property (readonly, nonatomic) double numericValue;

+ (id)constantWithSymbolicValue:(id)a0 numericValue:(double)a1;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithSymbolicValue:(id)a0 numericValue:(double)a1;

@end