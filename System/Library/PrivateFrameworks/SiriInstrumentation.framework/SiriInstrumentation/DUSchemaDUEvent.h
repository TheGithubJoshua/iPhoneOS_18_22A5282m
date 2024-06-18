@class SISchemaInstrumentationMessage, DUSchemaDUSpeechAudioRecord, DUSchemaDUSearchSessionRecord, DUSchemaDUEventMetadata, NSData, DUSchemaDUContent;

@interface DUSchemaDUEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) DUSchemaDUEventMetadata *metadata;
@property (nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) DUSchemaDUContent *content;
@property (nonatomic) BOOL hasContent;
@property (retain, nonatomic) DUSchemaDUSpeechAudioRecord *speechAudioRecord;
@property (nonatomic) BOOL hasSpeechAudioRecord;
@property (retain, nonatomic) DUSchemaDUSearchSessionRecord *searchSessionRecord;
@property (nonatomic) BOOL hasSearchSessionRecord;
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
- (void)deleteContent;
- (void)deleteMetadata;
- (void)deleteSearchSessionRecord;
- (void)deleteSpeechAudioRecord;

@end
