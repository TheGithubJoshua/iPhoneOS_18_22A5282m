@class NSString, NSData;

@interface GRPSchemaTrialExperimentIdentifiers : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (copy, nonatomic) NSString *treatmentId;
@property (nonatomic) BOOL hasTreatmentId;
@property (copy, nonatomic) NSString *deploymentId;
@property (nonatomic) BOOL hasDeploymentId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteDeploymentId;
- (void)deleteExperimentId;
- (void)deleteTreatmentId;

@end
