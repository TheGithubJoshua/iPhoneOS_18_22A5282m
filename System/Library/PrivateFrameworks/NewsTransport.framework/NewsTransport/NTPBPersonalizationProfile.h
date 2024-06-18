@class NSMutableArray;

@interface NTPBPersonalizationProfile : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *aggregates;
@property (retain, nonatomic) NSMutableArray *histories;

+ (Class)aggregatesType;
+ (Class)historiesType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)clearAggregates;
- (unsigned long long)aggregatesCount;
- (void)addAggregates:(id)a0;
- (void)addHistories:(id)a0;
- (id)aggregatesAtIndex:(unsigned long long)a0;
- (void)clearHistories;
- (id)historiesAtIndex:(unsigned long long)a0;
- (unsigned long long)historiesCount;

@end
