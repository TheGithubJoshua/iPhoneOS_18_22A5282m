@class NSData;

@interface SADSchemaSADImmediateDownloadTriggered : SISchemaInstrumentationMessage {
    struct { unsigned char locale : 1; unsigned char existingAssets : 1; unsigned char retryCount : 1; } _has;
}

@property (nonatomic) int locale;
@property (nonatomic) BOOL hasLocale;
@property (nonatomic) BOOL existingAssets;
@property (nonatomic) BOOL hasExistingAssets;
@property (nonatomic) unsigned int retryCount;
@property (nonatomic) BOOL hasRetryCount;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteExistingAssets;
- (void)deleteLocale;
- (void)deleteRetryCount;

@end
