@class NSArray, NSData;

@interface GRRSchemaGRRStringList : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *stringNames;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (unsigned long long)stringNameCount;
- (void)clearStringName;
- (void)addStringName:(id)a0;
- (void)deleteStringName;
- (id)stringNameAtIndex:(unsigned long long)a0;

@end
