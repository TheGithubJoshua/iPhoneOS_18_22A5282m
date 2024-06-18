@class INFERENCESchemaINFERENCEResolverConfig, NSData;

@interface INFERENCESchemaINFERENCEResolutionRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char slotType : 1; } _has;
}

@property (nonatomic) int slotType;
@property (nonatomic) BOOL hasSlotType;
@property (retain, nonatomic) INFERENCESchemaINFERENCEResolverConfig *resolverConfig;
@property (nonatomic) BOOL hasResolverConfig;
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
- (void)deleteResolverConfig;
- (void)deleteSlotType;

@end
