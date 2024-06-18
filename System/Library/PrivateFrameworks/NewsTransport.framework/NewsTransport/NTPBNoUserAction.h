@class NSMutableArray;

@interface NTPBNoUserAction : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *visibleViews;

+ (Class)visibleViewsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addVisibleViews:(id)a0;
- (void)clearVisibleViews;
- (id)visibleViewsAtIndex:(unsigned long long)a0;
- (unsigned long long)visibleViewsCount;

@end
