@class NSData;

@interface ORCHSchemaORCHExecutionRequestReceived : SISchemaInstrumentationMessage {
    struct { unsigned char preExecutionDecision : 1; unsigned char executionForRSKE : 1; unsigned char commandSource : 1; } _has;
}

@property (nonatomic) int preExecutionDecision;
@property (nonatomic) BOOL hasPreExecutionDecision;
@property (nonatomic) BOOL executionForRSKE;
@property (nonatomic) BOOL hasExecutionForRSKE;
@property (nonatomic) int commandSource;
@property (nonatomic) BOOL hasCommandSource;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)deleteCommandSource;
- (void)deleteExecutionForRSKE;
- (void)deletePreExecutionDecision;

@end
