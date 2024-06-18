@class NSData, NSMutableArray;

@interface NPKProtoBarcodeEventRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasRequestData;
@property (retain, nonatomic) NSData *requestData;
@property (retain, nonatomic) NSMutableArray *associatedApplicationIdentifiers;

+ (Class)associatedApplicationIdentifiersType;

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
- (void)addAssociatedApplicationIdentifiers:(id)a0;
- (id)associatedApplicationIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)associatedApplicationIdentifiersCount;
- (void)clearAssociatedApplicationIdentifiers;

@end
