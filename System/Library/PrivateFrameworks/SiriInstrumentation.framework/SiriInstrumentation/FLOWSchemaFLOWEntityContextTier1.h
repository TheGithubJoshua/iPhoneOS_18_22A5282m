@class NSArray, FLOWSchemaFLOWEntityTier1, NSData, SISchemaUUID;

@interface FLOWSchemaFLOWEntityContextTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (copy, nonatomic) NSArray *entitiesPresenteds;
@property (retain, nonatomic) FLOWSchemaFLOWEntityTier1 *entitySelected;
@property (nonatomic) BOOL hasEntitySelected;
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
- (void)addEntitiesPresented:(id)a0;
- (void)clearEntitiesPresented;
- (void)deleteEntitiesPresented;
- (void)deleteEntitySelected;
- (void)deleteLinkId;
- (id)entitiesPresentedAtIndex:(unsigned long long)a0;
- (unsigned long long)entitiesPresentedCount;

@end
