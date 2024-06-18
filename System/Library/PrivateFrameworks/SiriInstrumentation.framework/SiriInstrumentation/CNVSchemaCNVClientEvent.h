@class CNVSchemaCNVActionCandidatesGenerated, CNVSchemaCNVPreFlowPrepareContext, CNVSchemaCNVIntentFinalExecutionContext, NSData, CNVSchemaCNVFlowPluginLoadContext, SISchemaInstrumentationMessage, CNVSchemaCNVActionCandidatesCollated, CNVSchemaCNVExecutionOverridesEvaluated, CNVSchemaCNVActionCandidatesGeneratedTier1, CNVSchemaCNVFindFlowContext, CNVSchemaCNVIntentEagerExecutionContext, CNVSchemaCNVDisambiguationContext, CNVSchemaCNVExecutionPrepareContext, CNVSchemaCNVClientEventMetadata, CNVSchemaCNVPostFlowPrepareContext, CNVSchemaCNVExecutionCommitContext, CNVSchemaCNVUsoGraphTier1, CNVSchemaCNVIntentReformationContext, CNVSchemaCNVFlowPluginInputContext, CNVSchemaCNVFlowPluginExecutionContext;

@interface CNVSchemaCNVClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) CNVSchemaCNVClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) CNVSchemaCNVIntentReformationContext *intentReformationContext;
@property (nonatomic) BOOL hasIntentReformationContext;
@property (retain, nonatomic) CNVSchemaCNVUsoGraphTier1 *cnvUsoGraphTier1;
@property (nonatomic) BOOL hasCnvUsoGraphTier1;
@property (retain, nonatomic) CNVSchemaCNVIntentEagerExecutionContext *intentEagerExecutionContext;
@property (nonatomic) BOOL hasIntentEagerExecutionContext;
@property (retain, nonatomic) CNVSchemaCNVIntentFinalExecutionContext *intentFinalExecutionContext;
@property (nonatomic) BOOL hasIntentFinalExecutionContext;
@property (retain, nonatomic) CNVSchemaCNVActionCandidatesGenerated *actionCandidatesGenerated;
@property (nonatomic) BOOL hasActionCandidatesGenerated;
@property (retain, nonatomic) CNVSchemaCNVActionCandidatesGeneratedTier1 *actionCandidatesGeneratedTier1;
@property (nonatomic) BOOL hasActionCandidatesGeneratedTier1;
@property (retain, nonatomic) CNVSchemaCNVActionCandidatesCollated *actionCandidatesCollated;
@property (nonatomic) BOOL hasActionCandidatesCollated;
@property (retain, nonatomic) CNVSchemaCNVDisambiguationContext *disambiguationContext;
@property (nonatomic) BOOL hasDisambiguationContext;
@property (retain, nonatomic) CNVSchemaCNVExecutionOverridesEvaluated *executionOverridesEvaluated;
@property (nonatomic) BOOL hasExecutionOverridesEvaluated;
@property (retain, nonatomic) CNVSchemaCNVExecutionPrepareContext *executionPrepareContext;
@property (nonatomic) BOOL hasExecutionPrepareContext;
@property (retain, nonatomic) CNVSchemaCNVFlowPluginLoadContext *flowPluginLoadContext;
@property (nonatomic) BOOL hasFlowPluginLoadContext;
@property (retain, nonatomic) CNVSchemaCNVFindFlowContext *findFlowContext;
@property (nonatomic) BOOL hasFindFlowContext;
@property (retain, nonatomic) CNVSchemaCNVFlowPluginInputContext *flowPluginInputContext;
@property (nonatomic) BOOL hasFlowPluginInputContext;
@property (retain, nonatomic) CNVSchemaCNVFlowPluginExecutionContext *flowPluginExecutionContext;
@property (nonatomic) BOOL hasFlowPluginExecutionContext;
@property (retain, nonatomic) CNVSchemaCNVPreFlowPrepareContext *preFlowPrepareContext;
@property (nonatomic) BOOL hasPreFlowPrepareContext;
@property (retain, nonatomic) CNVSchemaCNVPostFlowPrepareContext *postFlowPrepareContext;
@property (nonatomic) BOOL hasPostFlowPrepareContext;
@property (retain, nonatomic) CNVSchemaCNVExecutionCommitContext *executionCommitContext;
@property (nonatomic) BOOL hasExecutionCommitContext;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (int)componentName;
- (id)initWithDictionary:(id)a0;
- (int)getAnyEventType;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)qualifiedMessageName;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteActionCandidatesGenerated;
- (void)deleteActionCandidatesCollated;
- (void)deleteActionCandidatesGeneratedTier1;
- (void)deleteCnvUsoGraphTier1;
- (void)deleteDisambiguationContext;
- (void)deleteEventMetadata;
- (void)deleteExecutionCommitContext;
- (void)deleteExecutionOverridesEvaluated;
- (void)deleteExecutionPrepareContext;
- (void)deleteFindFlowContext;
- (void)deleteFlowPluginExecutionContext;
- (void)deleteFlowPluginInputContext;
- (void)deleteFlowPluginLoadContext;
- (void)deleteIntentEagerExecutionContext;
- (void)deleteIntentFinalExecutionContext;
- (void)deleteIntentReformationContext;
- (void)deletePostFlowPrepareContext;
- (void)deletePreFlowPrepareContext;
- (id)getComponentId;

@end