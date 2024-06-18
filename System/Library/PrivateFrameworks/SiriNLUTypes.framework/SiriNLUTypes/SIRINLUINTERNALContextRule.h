@class SIRINLUEXTERNALTurnContext, NSMutableArray;

@interface SIRINLUINTERNALContextRule : PBCodable <NSCopying> {
    struct { unsigned char sdaComparisonMode : 1; unsigned char applyToPromptScenarios : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTurnContext;
@property (retain, nonatomic) SIRINLUEXTERNALTurnContext *turnContext;
@property (retain, nonatomic) NSMutableArray *matchingSpans;
@property (nonatomic) BOOL hasApplyToPromptScenarios;
@property (nonatomic) BOOL applyToPromptScenarios;
@property (nonatomic) BOOL hasSdaComparisonMode;
@property (nonatomic) int sdaComparisonMode;

+ (Class)matchingSpansType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addMatchingSpans:(id)a0;
- (void)clearMatchingSpans;
- (id)matchingSpansAtIndex:(unsigned long long)a0;
- (unsigned long long)matchingSpansCount;
- (int)StringAsSdaComparisonMode:(id)a0;
- (id)sdaComparisonModeAsString:(int)a0;

@end
