@class NSString, NSData;

@interface MHSchemaMHOdldFalseTriggerMitigated : SISchemaInstrumentationMessage {
    struct { unsigned char odldScore : 1; unsigned char odldScoreThreshold : 1; unsigned char errorCode : 1; } _has;
}

@property (copy, nonatomic) NSString *modelVersion;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) float odldScore;
@property (nonatomic) BOOL hasOdldScore;
@property (nonatomic) float odldScoreThreshold;
@property (nonatomic) BOOL hasOdldScoreThreshold;
@property (copy, nonatomic) NSString *errorMessage;
@property (nonatomic) BOOL hasErrorMessage;
@property (nonatomic) unsigned int errorCode;
@property (nonatomic) BOOL hasErrorCode;
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
- (void)deleteErrorCode;
- (void)deleteOdldScore;
- (void)deleteErrorMessage;
- (void)deleteModelVersion;
- (void)deleteOdldScoreThreshold;

@end
