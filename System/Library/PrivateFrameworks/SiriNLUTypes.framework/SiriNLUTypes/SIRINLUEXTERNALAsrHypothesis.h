@class NSString, SIRINLUEXTERNALUUID, NSMutableArray;

@interface SIRINLUEXTERNALAsrHypothesis : PBCodable <NSCopying> {
    struct { unsigned char probability : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdA;
@property (retain, nonatomic) SIRINLUEXTERNALUUID *idA;
@property (readonly, nonatomic) BOOL hasUtterance;
@property (retain, nonatomic) NSString *utterance;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) double probability;
@property (retain, nonatomic) NSMutableArray *asrTokens;
@property (retain, nonatomic) NSMutableArray *rewrittenUtterances;

+ (Class)asrTokensType;
+ (Class)rewrittenUtterancesType;

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
- (void)addRewrittenUtterances:(id)a0;
- (void)clearRewrittenUtterances;
- (id)rewrittenUtterancesAtIndex:(unsigned long long)a0;
- (unsigned long long)rewrittenUtterancesCount;
- (void)addAsrTokens:(id)a0;
- (id)asrTokensAtIndex:(unsigned long long)a0;
- (unsigned long long)asrTokensCount;
- (void)clearAsrTokens;

@end
