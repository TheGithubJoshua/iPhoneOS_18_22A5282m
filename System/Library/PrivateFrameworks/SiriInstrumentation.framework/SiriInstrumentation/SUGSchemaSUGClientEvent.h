@class SISchemaInstrumentationMessage, SUGSchemaSUGEngagementReported, SUGSchemaSUGClientEventMetadata, NSData, SUGSchemaSUGSuggestionsGenerated;

@interface SUGSchemaSUGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SUGSchemaSUGClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SUGSchemaSUGSuggestionsGenerated *suggestionsGenerated;
@property (nonatomic) BOOL hasSuggestionsGenerated;
@property (retain, nonatomic) SUGSchemaSUGEngagementReported *engagementReported;
@property (nonatomic) BOOL hasEngagementReported;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

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
- (void)deleteEngagementReported;
- (void)deleteEventMetadata;
- (void)deleteSuggestionsGenerated;
- (id)getComponentId;

@end
