@class NSArray, NSData;

@interface SADSchemaSADAvailableAssetDailyStatus : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *namespaceStatus;
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
- (void)addNamespaceStatus:(id)a0;
- (void)clearNamespaceStatus;
- (void)deleteNamespaceStatus;
- (id)namespaceStatusAtIndex:(unsigned long long)a0;
- (unsigned long long)namespaceStatusCount;

@end
