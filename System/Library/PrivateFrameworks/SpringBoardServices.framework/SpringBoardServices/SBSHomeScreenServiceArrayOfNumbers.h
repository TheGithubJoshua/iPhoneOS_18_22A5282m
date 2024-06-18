@class NSArray;

@interface SBSHomeScreenServiceArrayOfNumbers : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSArray *array;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithArray:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
