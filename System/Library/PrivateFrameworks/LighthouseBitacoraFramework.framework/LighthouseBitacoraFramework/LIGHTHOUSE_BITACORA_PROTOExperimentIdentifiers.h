@class NSString;

@interface LIGHTHOUSE_BITACORA_PROTOExperimentIdentifiers : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTrialExperimentID;
@property (retain, nonatomic) NSString *trialExperimentID;
@property (readonly, nonatomic) BOOL hasTrialDeploymentID;
@property (retain, nonatomic) NSString *trialDeploymentID;
@property (readonly, nonatomic) BOOL hasTrialTreatmentID;
@property (retain, nonatomic) NSString *trialTreatmentID;

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
