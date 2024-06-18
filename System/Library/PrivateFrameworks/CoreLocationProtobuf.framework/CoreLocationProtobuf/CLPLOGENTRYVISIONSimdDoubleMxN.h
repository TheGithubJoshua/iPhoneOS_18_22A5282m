@class NSMutableArray;

@interface CLPLOGENTRYVISIONSimdDoubleMxN : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *columns;

+ (Class)columnsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)columnsCount;
- (id)columnsAtIndex:(unsigned long long)a0;
- (void)addColumns:(id)a0;
- (void)clearColumns;

@end
