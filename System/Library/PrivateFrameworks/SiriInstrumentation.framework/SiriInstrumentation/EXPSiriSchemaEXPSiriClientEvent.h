@class SISchemaInstrumentationMessage, EXPSiriSchemaEXPClientExperimentTriggeredTier1, EXPSiriSchemaEXPAllocationChangelogSnapshot, EXPSiriSchemaEXPClientSiriRequestExperimentTriggeredTier1, NSData, EXPSiriSchemaEXPAllocationSnapshot;

@interface EXPSiriSchemaEXPSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) EXPSiriSchemaEXPAllocationSnapshot *allocationSnapshot;
@property (nonatomic) BOOL hasAllocationSnapshot;
@property (retain, nonatomic) EXPSiriSchemaEXPAllocationChangelogSnapshot *allocationChangelogSnapshot;
@property (nonatomic) BOOL hasAllocationChangelogSnapshot;
@property (retain, nonatomic) EXPSiriSchemaEXPClientExperimentTriggeredTier1 *experimentTriggered;
@property (nonatomic) BOOL hasExperimentTriggered;
@property (retain, nonatomic) EXPSiriSchemaEXPClientSiriRequestExperimentTriggeredTier1 *SiriRequestExperimentTriggered;
@property (nonatomic) BOOL hasSiriRequestExperimentTriggered;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

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
- (void)deleteAllocationChangelogSnapshot;
- (void)deleteAllocationSnapshot;
- (void)deleteExperimentTriggered;
- (void)deleteSiriRequestExperimentTriggered;

@end
