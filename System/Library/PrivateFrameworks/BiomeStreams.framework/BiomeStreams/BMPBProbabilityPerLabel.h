@class NSString;

@interface BMPBProbabilityPerLabel : PBCodable <NSCopying> {
    struct { unsigned char probability : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL hasProbability;
@property (nonatomic) double probability;

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
