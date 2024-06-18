@class SISchemaInstrumentationMessage, ODMSiriSchemaODMSiriCountsReported, ODMSiriSchemaODMSiriEventMetadata, ODMSiriSchemaODMSiriTaskCountsReported, NSData;

@interface ODMSiriSchemaODMSiriClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) ODMSiriSchemaODMSiriEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ODMSiriSchemaODMSiriTaskCountsReported *taskCountsReported;
@property (nonatomic) BOOL hasTaskCountsReported;
@property (retain, nonatomic) ODMSiriSchemaODMSiriCountsReported *countsReported;
@property (nonatomic) BOOL hasCountsReported;
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
- (int)clockIsolationLevel;
- (void)deleteCountsReported;
- (void)deleteEventMetadata;
- (void)deleteTaskCountsReported;

@end
