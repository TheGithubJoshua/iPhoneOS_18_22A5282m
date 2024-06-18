@class NSData, SISchemaAsset;

@interface CLPInstSchemaCLPNLv4TaskEvaluationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char evaluationType : 1; unsigned char evaluationEnvironment : 1; unsigned char experimentType : 1; unsigned char recipeType : 1; unsigned char sampleCount : 1; unsigned char isDebugTask : 1; } _has;
}

@property (nonatomic) int evaluationType;
@property (nonatomic) BOOL hasEvaluationType;
@property (nonatomic) int evaluationEnvironment;
@property (nonatomic) BOOL hasEvaluationEnvironment;
@property (nonatomic) int experimentType;
@property (nonatomic) BOOL hasExperimentType;
@property (nonatomic) int recipeType;
@property (nonatomic) BOOL hasRecipeType;
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersion;
@property (nonatomic) BOOL hasNlv4AssetVersion;
@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) BOOL hasSampleCount;
@property (nonatomic) BOOL isDebugTask;
@property (nonatomic) BOOL hasIsDebugTask;
@property (retain, nonatomic) SISchemaAsset *syntheticDatasetVersion;
@property (nonatomic) BOOL hasSyntheticDatasetVersion;
@property (retain, nonatomic) SISchemaAsset *nlv4AssetVersionOverride;
@property (nonatomic) BOOL hasNlv4AssetVersionOverride;
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
- (void)deleteEvaluationEnvironment;
- (void)deleteEvaluationType;
- (void)deleteExperimentType;
- (void)deleteIsDebugTask;
- (void)deleteNlv4AssetVersion;
- (void)deleteNlv4AssetVersionOverride;
- (void)deleteRecipeType;
- (void)deleteSampleCount;
- (void)deleteSyntheticDatasetVersion;

@end
