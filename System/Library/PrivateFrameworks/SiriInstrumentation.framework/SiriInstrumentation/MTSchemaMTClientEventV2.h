@class MTSchemaMTClientEventMetadata, NSData, SISchemaInstrumentationMessage, MTSchemaMTBatchRequestContext, MTSchemaMTInvocationContext, MTSchemaMTInvocationStartedTier1, MTSchemaMTLocalePairResolved, MTSchemaMTASRStateUpdated;

@interface MTSchemaMTClientEventV2 : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) MTSchemaMTClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) MTSchemaMTBatchRequestContext *batchRequestContext;
@property (nonatomic) BOOL hasBatchRequestContext;
@property (retain, nonatomic) MTSchemaMTInvocationContext *invocationContext;
@property (nonatomic) BOOL hasInvocationContext;
@property (retain, nonatomic) MTSchemaMTASRStateUpdated *asrStateUpdated;
@property (nonatomic) BOOL hasAsrStateUpdated;
@property (retain, nonatomic) MTSchemaMTLocalePairResolved *localePairResolved;
@property (nonatomic) BOOL hasLocalePairResolved;
@property (retain, nonatomic) MTSchemaMTInvocationStartedTier1 *invocationStartedTier1;
@property (nonatomic) BOOL hasInvocationStartedTier1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

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
- (int)clockIsolationLevel;
- (void)deleteAsrStateUpdated;
- (void)deleteBatchRequestContext;
- (void)deleteEventMetadata;
- (void)deleteInvocationContext;
- (void)deleteInvocationStartedTier1;
- (void)deleteLocalePairResolved;
- (id)getComponentId;

@end
