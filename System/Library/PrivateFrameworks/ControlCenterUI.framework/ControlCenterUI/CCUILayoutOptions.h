@interface CCUILayoutOptions : NSObject <NSCopying, NSMutableCopying>

@property (readonly, nonatomic) double itemEdgeSize;
@property (readonly, nonatomic) double itemSpacing;

- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithLayoutOptions:(id)a0;

@end
