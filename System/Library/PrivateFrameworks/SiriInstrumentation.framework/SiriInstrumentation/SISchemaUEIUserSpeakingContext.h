@class SISchemaUEIUserSpeakingStarted, NSData, SISchemaUUID, SISchemaUEIUserSpeakingEnded;

@interface SISchemaUEIUserSpeakingContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUEIUserSpeakingStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) SISchemaUEIUserSpeakingEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) SISchemaUUID *trpId;
@property (nonatomic) BOOL hasTrpId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

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
- (void)deleteEnded;
- (void)deleteStartedOrChanged;
- (void)deleteTrpId;

@end
