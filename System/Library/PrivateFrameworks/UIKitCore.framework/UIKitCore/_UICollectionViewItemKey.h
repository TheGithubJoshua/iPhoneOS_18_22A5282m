@class NSString, NSIndexPath;

@interface _UICollectionViewItemKey : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, retain, nonatomic) NSIndexPath *indexPath;
@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isClone;

+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)a0 andIndexPath:(id)a1;
+ (id)collectionItemKeyForCellWithIndexPath:(id)a0;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)a0 andIndexPath:(id)a1;
+ (id)collectionItemKeyForLayoutAttributes:(id)a0;

- (id)initWithType:(unsigned long long)a0 indexPath:(id)a1 identifier:(id)a2 clone:(BOOL)a3;
- (id)initWithType:(unsigned long long)a0 indexPath:(id)a1 identifier:(id)a2;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyAsClone:(BOOL)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
