@class NSData;

@interface SISchemaUUID : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSData *value;
@property (nonatomic) BOOL hasValue;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (void)willProduceDictionaryRepresentation:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)initWithNSUUID:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteValue;
- (id)initWithBytesAsData:(id)a0;
- (id)toNSUUID;

@end
