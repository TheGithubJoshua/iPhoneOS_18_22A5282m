@class NSMutableArray;

@interface CPLRampingResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *responses;

+ (Class)responseType;

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
- (void)addResponse:(id)a0;
- (void)clearResponses;
- (id)responseAtIndex:(unsigned long long)a0;
- (unsigned long long)responsesCount;

@end
