@class NSArray, NSData, SISchemaUUID;

@interface PLUSSchemaPLUSRECTIFIPatternSequenceGenerated : SISchemaInstrumentationMessage {
    struct { unsigned char numberOfRequestsReviewed : 1; unsigned char numberOfUniqueRequestsReviewed : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *patternId;
@property (nonatomic) BOOL hasPatternId;
@property (copy, nonatomic) NSArray *sequences;
@property (copy, nonatomic) NSArray *constraints;
@property (retain, nonatomic) SISchemaUUID *originalRequestId;
@property (nonatomic) BOOL hasOriginalRequestId;
@property (nonatomic) unsigned int numberOfRequestsReviewed;
@property (nonatomic) BOOL hasNumberOfRequestsReviewed;
@property (nonatomic) unsigned int numberOfUniqueRequestsReviewed;
@property (nonatomic) BOOL hasNumberOfUniqueRequestsReviewed;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithJSON:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)sequenceCount;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (id)suppressMessageUnderConditions;
- (void)addConstraints:(id)a0;
- (void)deletePatternId;
- (void)addSequence:(id)a0;
- (void)clearConstraints;
- (void)clearSequence;
- (id)constraintsAtIndex:(unsigned long long)a0;
- (unsigned long long)constraintsCount;
- (void)deleteConstraints;
- (void)deleteNumberOfRequestsReviewed;
- (void)deleteNumberOfUniqueRequestsReviewed;
- (void)deleteOriginalRequestId;
- (void)deleteSequence;
- (id)sequenceAtIndex:(unsigned long long)a0;

@end
