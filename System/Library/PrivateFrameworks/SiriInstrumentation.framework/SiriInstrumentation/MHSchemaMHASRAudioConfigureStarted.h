@class NSData;

@interface MHSchemaMHASRAudioConfigureStarted : SISchemaInstrumentationMessage {
    struct { unsigned char audioCodec : 1; unsigned char audioSkippedTimeInNs : 1; unsigned char audioSkippedNumSamples : 1; } _has;
}

@property (nonatomic) int audioCodec;
@property (nonatomic) BOOL hasAudioCodec;
@property (nonatomic) unsigned long long audioSkippedTimeInNs;
@property (nonatomic) BOOL hasAudioSkippedTimeInNs;
@property (nonatomic) unsigned long long audioSkippedNumSamples;
@property (nonatomic) BOOL hasAudioSkippedNumSamples;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteAudioCodec;
- (void)deleteAudioSkippedNumSamples;
- (void)deleteAudioSkippedTimeInNs;

@end
