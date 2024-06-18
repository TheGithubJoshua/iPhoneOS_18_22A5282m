@class NSData, SISchemaRequestLinkInfo;

@interface SISchemaRequestLink : SISchemaTopLevelUnionType

@property (retain, nonatomic) SISchemaRequestLinkInfo *source;
@property (nonatomic) BOOL hasSource;
@property (retain, nonatomic) SISchemaRequestLinkInfo *target;
@property (nonatomic) BOOL hasTarget;
@property (readonly, nonatomic) NSData *jsonData;

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
- (void)deleteSource;
- (void)deleteTarget;

@end
