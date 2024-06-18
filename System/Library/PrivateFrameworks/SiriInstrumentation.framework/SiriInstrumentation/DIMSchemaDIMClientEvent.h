@class SISchemaInstrumentationMessage, DIMSchemaDIMSiriAccountInformation, DIMSchemaDIMDeviceFixedContext, NSData, DIMSchemaDIMLocaleNotRecognized;

@interface DIMSchemaDIMClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) DIMSchemaDIMDeviceFixedContext *deviceFixedContext;
@property (nonatomic) BOOL hasDeviceFixedContext;
@property (retain, nonatomic) DIMSchemaDIMSiriAccountInformation *siriAccountInformation;
@property (nonatomic) BOOL hasSiriAccountInformation;
@property (retain, nonatomic) DIMSchemaDIMLocaleNotRecognized *localeNotRecognized;
@property (nonatomic) BOOL hasLocaleNotRecognized;
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
- (void)deleteDeviceFixedContext;
- (void)deleteLocaleNotRecognized;
- (void)deleteSiriAccountInformation;

@end
