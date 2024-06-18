@class NSData, SISchemaUUID;

@interface DUSchemaDUResponse : SISchemaInstrumentationMessage {
    struct { unsigned char status : 1; } _has;
}

@property (nonatomic) int status;
@property (nonatomic) BOOL hasStatus;
@property (retain, nonatomic) SISchemaUUID *assetIdentifier;
@property (nonatomic) BOOL hasAssetIdentifier;
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
- (void)deleteAssetIdentifier;
- (void)deleteStatus;

@end
