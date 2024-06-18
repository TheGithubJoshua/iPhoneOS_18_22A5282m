@class NSData, INFERENCESchemaINFERENCEContactResolverConfig;

@interface INFERENCESchemaINFERENCEResolverConfig : SISchemaInstrumentationMessage

@property (retain, nonatomic) INFERENCESchemaINFERENCEContactResolverConfig *contactConfig;
@property (nonatomic) BOOL hasContactConfig;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichConfigurationtype;

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
- (void)deleteContactConfig;

@end
