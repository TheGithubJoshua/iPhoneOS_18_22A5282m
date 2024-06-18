@class NSMutableArray;

@interface NPKProtoStandalonePaymentProvisioningFlowChooseFlowStepContext : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sections;

+ (Class)sectionsType;

- (void)mergeFrom:(id)a0;
- (void)addSections:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)sectionsCount;
- (unsigned long long)hash;
- (void)clearSections;
- (void)writeTo:(id)a0;
- (id)sectionsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
