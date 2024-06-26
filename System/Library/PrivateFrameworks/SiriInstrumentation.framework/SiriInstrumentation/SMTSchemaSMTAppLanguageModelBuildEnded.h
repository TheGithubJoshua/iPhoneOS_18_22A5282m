@class NSString, NSData;

@interface SMTSchemaSMTAppLanguageModelBuildEnded : SISchemaInstrumentationMessage {
    struct { unsigned char trainingDataSizeInTokens : 1; unsigned char numOutOfVocabulary : 1; unsigned char numCustomPronunciations : 1; unsigned char trainingTimeInNs : 1; unsigned char languageModelFileSizeInBytes : 1; } _has;
}

@property (nonatomic) unsigned long long trainingDataSizeInTokens;
@property (nonatomic) BOOL hasTrainingDataSizeInTokens;
@property (nonatomic) unsigned long long numOutOfVocabulary;
@property (nonatomic) BOOL hasNumOutOfVocabulary;
@property (nonatomic) unsigned long long numCustomPronunciations;
@property (nonatomic) BOOL hasNumCustomPronunciations;
@property (copy, nonatomic) NSString *assetName;
@property (nonatomic) BOOL hasAssetName;
@property (nonatomic) unsigned long long trainingTimeInNs;
@property (nonatomic) BOOL hasTrainingTimeInNs;
@property (nonatomic) unsigned long long languageModelFileSizeInBytes;
@property (nonatomic) BOOL hasLanguageModelFileSizeInBytes;
@property (copy, nonatomic) NSString *artifactFilepath;
@property (nonatomic) BOOL hasArtifactFilepath;
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
- (void)deleteAssetName;
- (void)deleteArtifactFilepath;
- (void)deleteLanguageModelFileSizeInBytes;
- (void)deleteNumCustomPronunciations;
- (void)deleteNumOutOfVocabulary;
- (void)deleteTrainingDataSizeInTokens;
- (void)deleteTrainingTimeInNs;

@end
