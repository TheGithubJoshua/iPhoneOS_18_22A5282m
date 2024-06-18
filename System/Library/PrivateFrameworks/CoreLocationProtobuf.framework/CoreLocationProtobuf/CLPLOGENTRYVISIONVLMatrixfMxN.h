@class NSMutableArray;

@interface CLPLOGENTRYVISIONVLMatrixfMxN : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *rows;

+ (Class)rowsType;

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
- (void)addRows:(id)a0;
- (void)clearRows;
- (id)rowsAtIndex:(unsigned long long)a0;
- (unsigned long long)rowsCount;

@end
