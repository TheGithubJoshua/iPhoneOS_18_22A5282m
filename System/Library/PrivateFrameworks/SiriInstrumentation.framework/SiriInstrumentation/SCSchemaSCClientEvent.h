@class SCSchemaSCClientEventMetadata, SCSchemaSCUndoChecked, SISchemaInstrumentationMessage, SCSchemaSCCorrectionChecked, NSData, SCSchemaSCUndoSet;

@interface SCSchemaSCClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) SCSchemaSCClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) SCSchemaSCUndoChecked *undoChecked;
@property (nonatomic) BOOL hasUndoChecked;
@property (retain, nonatomic) SCSchemaSCCorrectionChecked *correctionChecked;
@property (nonatomic) BOOL hasCorrectionChecked;
@property (retain, nonatomic) SCSchemaSCUndoSet *undoSet;
@property (nonatomic) BOOL hasUndoSet;
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
- (void)deleteCorrectionChecked;
- (void)deleteEventMetadata;
- (void)deleteUndoChecked;
- (void)deleteUndoSet;
- (id)getComponentId;

@end
