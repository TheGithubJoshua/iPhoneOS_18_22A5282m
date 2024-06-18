@class NSString;

@interface OTEscrowMoveRequestContext : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasEscrowRecordLabel;
@property (retain, nonatomic) NSString *escrowRecordLabel;
@property (readonly, nonatomic) BOOL hasCurrentFederation;
@property (retain, nonatomic) NSString *currentFederation;
@property (readonly, nonatomic) BOOL hasIntendedFederation;
@property (retain, nonatomic) NSString *intendedFederation;

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

@end
