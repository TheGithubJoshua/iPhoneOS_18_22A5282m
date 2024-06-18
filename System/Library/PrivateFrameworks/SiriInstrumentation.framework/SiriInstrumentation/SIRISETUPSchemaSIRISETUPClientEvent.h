@class SISchemaInstrumentationMessage, SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted, SIRISETUPSchemaSIRISETUPClientEventMetadata, SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted, NSData;

@interface SIRISETUPSchemaSIRISETUPClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentDigitalZeroDetectionCompleted *enrollmentZeroDetectionCompleted;
@property (nonatomic) BOOL hasEnrollmentZeroDetectionCompleted;
@property (retain, nonatomic) SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted *enrollmentUtteranceCompleted;
@property (nonatomic) BOOL hasEnrollmentUtteranceCompleted;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (int)componentName;
- (id)initWithDictionary:(id)a0;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)qualifiedMessageName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteEnrollmentUtteranceCompleted;
- (void)deleteEnrollmentZeroDetectionCompleted;
- (void)deleteEventMetadata;
- (id)getComponentId;

@end
