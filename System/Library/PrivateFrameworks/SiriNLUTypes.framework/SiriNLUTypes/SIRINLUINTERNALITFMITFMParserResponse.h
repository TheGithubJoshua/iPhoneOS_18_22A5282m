@class SIRINLUEXTERNALParser, NSMutableArray;

@interface SIRINLUINTERNALITFMITFMParserResponse : PBCodable <NSCopying> {
    struct { unsigned char classificationProbability : 1; unsigned char classificationLabel : 1; } _has;
}

@property (nonatomic) BOOL hasClassificationLabel;
@property (nonatomic) BOOL classificationLabel;
@property (nonatomic) BOOL hasClassificationProbability;
@property (nonatomic) float classificationProbability;
@property (readonly, nonatomic) BOOL hasParser;
@property (retain, nonatomic) SIRINLUEXTERNALParser *parser;
@property (retain, nonatomic) NSMutableArray *hypotheses;

+ (Class)hypothesesType;

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
- (unsigned long long)hypothesesCount;
- (void)clearHypotheses;
- (void)addHypotheses:(id)a0;
- (id)hypothesesAtIndex:(unsigned long long)a0;

@end
