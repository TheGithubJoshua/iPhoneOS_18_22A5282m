@class NSData;

@interface MHSchemaMHAssistantDaemonAudioStopRecordingeStarted : SISchemaInstrumentationMessage {
    struct { unsigned char stopReason : 1; } _has;
}

@property (nonatomic) int stopReason;
@property (nonatomic) BOOL hasStopReason;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteStopReason;

@end
