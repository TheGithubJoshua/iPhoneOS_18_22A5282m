@class LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers, LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers;

@interface LIGHTHOUSE_BITACORA_PROTOLighthouseLedgerTrialIdentifiers : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasExperimentIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers *experimentIdentifiers;
@property (readonly, nonatomic) BOOL hasBmltIdentifiers;
@property (retain, nonatomic) LIGHTHOUSE_BITACORA_PROTOBMLTIdentifiers *bmltIdentifiers;

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
