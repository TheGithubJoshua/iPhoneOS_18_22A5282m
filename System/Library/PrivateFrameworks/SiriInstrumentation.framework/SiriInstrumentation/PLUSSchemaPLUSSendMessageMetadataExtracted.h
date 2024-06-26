@class NSData, SISchemaUUID;

@interface PLUSSchemaPLUSSendMessageMetadataExtracted : SISchemaInstrumentationMessage {
    struct { unsigned char initialSendMessageRequestNumberOfContacts : 1; unsigned char initialSendMessageRequestHasPayload : 1; unsigned char numberOfTimesMessageContactChanged : 1; unsigned char numberOfTimesMessagePayloadChanged : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalPlusId;
@property (nonatomic) BOOL hasOriginalPlusId;
@property (nonatomic) unsigned int initialSendMessageRequestNumberOfContacts;
@property (nonatomic) BOOL hasInitialSendMessageRequestNumberOfContacts;
@property (nonatomic) BOOL initialSendMessageRequestHasPayload;
@property (nonatomic) BOOL hasInitialSendMessageRequestHasPayload;
@property (nonatomic) unsigned int numberOfTimesMessageContactChanged;
@property (nonatomic) BOOL hasNumberOfTimesMessageContactChanged;
@property (nonatomic) unsigned int numberOfTimesMessagePayloadChanged;
@property (nonatomic) BOOL hasNumberOfTimesMessagePayloadChanged;
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
- (void)deleteInitialSendMessageRequestHasPayload;
- (void)deleteInitialSendMessageRequestNumberOfContacts;
- (void)deleteNumberOfTimesMessageContactChanged;
- (void)deleteNumberOfTimesMessagePayloadChanged;
- (void)deleteOriginalPlusId;

@end
