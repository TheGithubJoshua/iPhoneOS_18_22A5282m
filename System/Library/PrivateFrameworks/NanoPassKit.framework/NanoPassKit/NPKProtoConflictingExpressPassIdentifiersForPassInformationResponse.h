@class NSMutableArray;

@interface NPKProtoConflictingExpressPassIdentifiersForPassInformationResponse : PBCodable <NSCopying> {
    struct { unsigned char pending : 1; } _has;
}

@property (nonatomic) BOOL hasPending;
@property (nonatomic) BOOL pending;
@property (retain, nonatomic) NSMutableArray *conflictingExpressPassIdentifiers;
@property (retain, nonatomic) NSMutableArray *conflictingReferenceExpressPassIdentifiers;

+ (Class)conflictingExpressPassIdentifiersType;
+ (Class)conflictingReferenceExpressPassIdentifiersType;

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
- (void)addConflictingExpressPassIdentifiers:(id)a0;
- (void)addConflictingReferenceExpressPassIdentifiers:(id)a0;
- (void)clearConflictingExpressPassIdentifiers;
- (void)clearConflictingReferenceExpressPassIdentifiers;
- (id)conflictingExpressPassIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)conflictingExpressPassIdentifiersCount;
- (id)conflictingReferenceExpressPassIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)conflictingReferenceExpressPassIdentifiersCount;

@end
