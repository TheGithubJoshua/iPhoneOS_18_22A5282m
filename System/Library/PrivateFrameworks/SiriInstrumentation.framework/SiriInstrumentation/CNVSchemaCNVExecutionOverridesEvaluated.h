@class NSData;

@interface CNVSchemaCNVExecutionOverridesEvaluated : SISchemaInstrumentationMessage {
    struct { unsigned char executionOverrideDecision : 1; } _has;
}

@property (nonatomic) int executionOverrideDecision;
@property (nonatomic) BOOL hasExecutionOverrideDecision;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteExecutionOverrideDecision;

@end
