@class NSData;

@interface MHSchemaMHEndpointerTimeoutMetadata : SISchemaInstrumentationMessage {
    struct { unsigned char isTimeout : 1; unsigned char timeoutThresholdInNs : 1; } _has;
}

@property (nonatomic) BOOL isTimeout;
@property (nonatomic) BOOL hasIsTimeout;
@property (nonatomic) unsigned long long timeoutThresholdInNs;
@property (nonatomic) BOOL hasTimeoutThresholdInNs;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteIsTimeout;
- (void)deleteTimeoutThresholdInNs;

@end
