@class NSArray, NSData, SISchemaUUID;

@interface EXPSiriSchemaEXPClientExperimentTriggeredTier1 : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *allocations;
@property (retain, nonatomic) SISchemaUUID *codepathId;
@property (nonatomic) BOOL hasCodepathId;
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
- (void)clearAllocation;
- (unsigned long long)allocationCount;
- (void)addAllocation:(id)a0;
- (id)allocationAtIndex:(unsigned long long)a0;
- (void)deleteAllocation;
- (void)deleteCodepathId;

@end
