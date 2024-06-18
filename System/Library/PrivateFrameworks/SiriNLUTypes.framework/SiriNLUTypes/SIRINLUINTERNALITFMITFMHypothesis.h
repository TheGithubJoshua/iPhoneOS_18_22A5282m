@class NSString;

@interface SIRINLUINTERNALITFMITFMHypothesis : PBCodable <NSCopying> {
    struct { unsigned char label : 1; unsigned char probability : 1; } _has;
}

@property (nonatomic) BOOL hasLabel;
@property (nonatomic) int label;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) float probability;
@property (readonly, nonatomic) BOOL hasStringLabel;
@property (retain, nonatomic) NSString *stringLabel;

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

@end
