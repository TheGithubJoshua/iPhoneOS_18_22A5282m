@class NSString, NSData;

@interface SISchemaVerticalLayoutCardSectionInvocationContext : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSString *resultIdentifier;
@property (nonatomic) BOOL hasResultIdentifier;
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
- (void)deleteResultIdentifier;

@end