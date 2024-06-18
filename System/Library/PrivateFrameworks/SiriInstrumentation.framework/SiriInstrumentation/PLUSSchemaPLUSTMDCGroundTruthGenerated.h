@class PLUSSchemaPLUSTMDCGroundTruth, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSTMDCGroundTruthGenerated : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) BOOL hasOriginalPlusId;
@property (retain, nonatomic) PLUSSchemaPLUSTMDCGroundTruth *groundTruth;
@property (nonatomic) BOOL hasGroundTruth;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteGroundTruth;
- (void)deleteOriginalPlusId;
- (void)deleteOriginalRequestId;

@end
