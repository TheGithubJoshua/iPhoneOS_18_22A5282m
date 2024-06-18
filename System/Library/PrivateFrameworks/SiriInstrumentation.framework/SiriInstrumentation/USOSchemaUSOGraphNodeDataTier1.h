@class NSArray, USOSchemaUSONodeDataTier1, NSData;

@interface USOSchemaUSOGraphNodeDataTier1 : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSONodeDataTier1 *linkedUsoNodeData;
@property (nonatomic) BOOL hasLinkedUsoNodeData;
@property (copy, nonatomic) NSArray *linkedUsoEntityIdentifiers;
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
- (unsigned long long)linkedUsoEntityIdentifiersCount;
- (void)clearLinkedUsoEntityIdentifiers;
- (void)addLinkedUsoEntityIdentifiers:(id)a0;
- (void)deleteLinkedUsoEntityIdentifiers;
- (void)deleteLinkedUsoNodeData;
- (id)linkedUsoEntityIdentifiersAtIndex:(unsigned long long)a0;

@end
