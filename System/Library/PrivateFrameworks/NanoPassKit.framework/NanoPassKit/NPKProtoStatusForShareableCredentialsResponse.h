@class NSData, NSMutableArray;

@interface NPKProtoStatusForShareableCredentialsResponse : PBCodable <NSCopying>

@property (nonatomic) int aggregateStatus;
@property (retain, nonatomic) NSMutableArray *updatedCredentialsDatas;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (retain, nonatomic) NSData *errorData;

+ (Class)updatedCredentialsDataType;

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
- (int)StringAsAggregateStatus:(id)a0;
- (void)addUpdatedCredentialsData:(id)a0;
- (id)aggregateStatusAsString:(int)a0;
- (void)clearUpdatedCredentialsDatas;
- (id)updatedCredentialsDataAtIndex:(unsigned long long)a0;
- (unsigned long long)updatedCredentialsDatasCount;

@end
