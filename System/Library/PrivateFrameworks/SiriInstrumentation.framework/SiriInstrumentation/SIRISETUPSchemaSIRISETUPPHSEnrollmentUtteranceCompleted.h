@class NSString, NSData;

@interface SIRISETUPSchemaSIRISETUPPHSEnrollmentUtteranceCompleted : SISchemaInstrumentationMessage {
    struct { unsigned char pageNumber : 1; unsigned char topScoreForUtterance : 1; unsigned char startSampleCount : 1; unsigned char endSampleCount : 1; unsigned char hasSpeechDetected : 1; } _has;
}

@property (nonatomic) unsigned int pageNumber;
@property (nonatomic) BOOL hasPageNumber;
@property (copy, nonatomic) NSString *phraseId;
@property (nonatomic) BOOL hasPhraseId;
@property (nonatomic) float topScoreForUtterance;
@property (nonatomic) BOOL hasTopScoreForUtterance;
@property (nonatomic) unsigned int startSampleCount;
@property (nonatomic) BOOL hasStartSampleCount;
@property (nonatomic) unsigned int endSampleCount;
@property (nonatomic) BOOL hasEndSampleCount;
@property (nonatomic) BOOL hasSpeechDetected;
@property (nonatomic) BOOL hasHasSpeechDetected;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteEndSampleCount;
- (void)deleteHasSpeechDetected;
- (void)deletePageNumber;
- (void)deletePhraseId;
- (void)deleteStartSampleCount;
- (void)deleteTopScoreForUtterance;

@end
