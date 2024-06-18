@class NSData, SISchemaUUID;

@interface ASRSchemaASRSampledAudioFileEnqueued : SISchemaInstrumentationMessage {
    struct { unsigned char audioCodec : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *originalAsrId;
@property (nonatomic) BOOL hasOriginalAsrId;
@property (nonatomic) int audioCodec;
@property (nonatomic) BOOL hasAudioCodec;
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
- (void)deleteAudioCodec;
- (void)deleteOriginalAsrId;

@end
