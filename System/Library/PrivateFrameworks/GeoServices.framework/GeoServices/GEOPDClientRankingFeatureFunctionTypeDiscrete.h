@class PBUnknownFields;

@interface GEOPDClientRankingFeatureFunctionTypeDiscrete : PBCodable <NSCopying> {
    PBUnknownFields *_unknownFields;
    float _featureValueThresholdHigh;
    float _featureValueThresholdLow;
    float _featureWeightHigh;
    float _featureWeightLow;
    struct { unsigned char has_featureValueThresholdHigh : 1; unsigned char has_featureValueThresholdLow : 1; unsigned char has_featureWeightHigh : 1; unsigned char has_featureWeightLow : 1; } _flags;
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
