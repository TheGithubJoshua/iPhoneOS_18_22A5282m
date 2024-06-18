@class NSData;

@interface SADSchemaSADUODAssetsPrepared : SISchemaInstrumentationMessage {
    struct { unsigned char locale : 1; unsigned char elapsedSeconds : 1; } _has;
}

@property (nonatomic) int locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) unsigned int elapsedSeconds;
@property (nonatomic) BOOL hasElapsedSeconds;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteElapsedSeconds;
- (void)deleteLocale;

@end
