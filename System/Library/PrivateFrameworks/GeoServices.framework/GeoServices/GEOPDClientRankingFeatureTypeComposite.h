@class NSMutableArray, PBUnknownFields;

@interface GEOPDClientRankingFeatureTypeComposite : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    NSMutableArray *_variableExponentPairs;
    float _featureWeight;
    struct { unsigned char has_featureWeight : 1; } _flags;
}

- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)jsonRepresentation;

@end
