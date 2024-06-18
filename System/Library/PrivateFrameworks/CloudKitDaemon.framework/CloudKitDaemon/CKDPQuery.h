@class NSMutableArray;

@interface CKDPQuery : PBCodable <NSCopying> {
    struct { unsigned char queryOperator : 1; unsigned char distinct : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *types;
@property (retain, nonatomic) NSMutableArray *filters;
@property (retain, nonatomic) NSMutableArray *sorts;
@property (nonatomic) BOOL hasDistinct;
@property (nonatomic) BOOL distinct;
@property (nonatomic) BOOL hasQueryOperator;
@property (nonatomic) int queryOperator;

+ (Class)filtersType;
+ (Class)sortsType;
+ (Class)typesType;

- (void)clearFilters;
- (void)clearTypes;
- (unsigned long long)typesCount;
- (void)addFilters:(id)a0;
- (id)queryOperatorAsString:(int)a0;
- (unsigned long long)filtersCount;
- (void)mergeFrom:(id)a0;
- (id)filtersAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (int)StringAsQueryOperator:(id)a0;
- (void)clearSorts;
- (void).cxx_destruct;
- (id)typesAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)addTypes:(id)a0;
- (id)description;
- (unsigned long long)sortsCount;
- (id)sortsAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSorts:(id)a0;

@end
