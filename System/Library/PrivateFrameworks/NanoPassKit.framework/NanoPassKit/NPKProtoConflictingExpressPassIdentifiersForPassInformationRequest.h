@class NSData, NSMutableArray;

@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasExpressPassInformation;
@property (retain, nonatomic) NSData *expressPassInformation;
@property (retain, nonatomic) NSMutableArray *referenceExpressPassesInformations;

+ (Class)referenceExpressPassesInformationType;

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
- (void)addReferenceExpressPassesInformation:(id)a0;
- (void)clearReferenceExpressPassesInformations;
- (id)referenceExpressPassesInformationAtIndex:(unsigned long long)a0;
- (unsigned long long)referenceExpressPassesInformationsCount;

@end
