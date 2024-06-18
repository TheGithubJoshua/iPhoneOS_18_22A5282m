@class NSData;

@interface POMMESSchemaPOMMESPegasusRequestStarted : SISchemaInstrumentationMessage {
    struct { unsigned char payloadSizeInKB : 1; } _has;
}

@property (nonatomic) double payloadSizeInKB;
@property (nonatomic) BOOL hasPayloadSizeInKB;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deletePayloadSizeInKB;

@end
