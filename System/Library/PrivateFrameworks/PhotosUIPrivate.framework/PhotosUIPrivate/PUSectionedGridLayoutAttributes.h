@interface PUSectionedGridLayoutAttributes : UICollectionViewLayoutAttributes

@property (nonatomic) BOOL floating;
@property (nonatomic) double interactiveTransitionProgress;
@property (nonatomic) BOOL extendsTopContent;
@property (nonatomic) BOOL exists;

- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
