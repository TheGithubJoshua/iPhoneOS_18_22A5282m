@class RFSchemaRFGClientEventMetadata, SISchemaInstrumentationMessage, RFSchemaRFGVisualResponseShownTier1, NSData, RFSchemaRFGVisualResponseShownLink;

@interface RFGSchemaRFGClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) RFSchemaRFGClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RFSchemaRFGVisualResponseShownTier1 *visualResponseShownTier1;
@property (nonatomic) BOOL hasVisualResponseShownTier1;
@property (retain, nonatomic) RFSchemaRFGVisualResponseShownLink *visualResponseShownLink;
@property (nonatomic) BOOL hasVisualResponseShownLink;
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
- (void)deleteEventMetadata;
- (void)deleteVisualResponseShownLink;
- (void)deleteVisualResponseShownTier1;
- (id)getComponentId;

@end
