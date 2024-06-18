@class NSMutableArray;

@interface NTPBErrorResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *errors;

+ (Class)errorsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)clearErrors;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addErrors:(id)a0;
- (id)errorsAtIndex:(unsigned long long)a0;
- (unsigned long long)errorsCount;

@end
