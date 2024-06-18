@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSMentionDetectorEnded : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *mentionDetectorSpans;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
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
- (void)addMentionDetectorSpans:(id)a0;
- (void)clearMentionDetectorSpans;
- (void)deleteLinkId;
- (void)deleteMentionDetectorSpans;
- (id)mentionDetectorSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)mentionDetectorSpansCount;

@end
