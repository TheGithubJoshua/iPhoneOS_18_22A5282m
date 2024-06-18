@class NSData, SISchemaUUID;

@interface ASRSchemaASRDictationVoiceCommandMetricsReported : SISchemaInstrumentationMessage {
    struct { unsigned char commandEndTimeInNs : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *voiceCommandId;
@property (nonatomic) BOOL hasVoiceCommandId;
@property (nonatomic) unsigned long long commandEndTimeInNs;
@property (nonatomic) BOOL hasCommandEndTimeInNs;
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
- (void)deleteCommandEndTimeInNs;
- (void)deleteVoiceCommandId;

@end
