@class NSString;

@interface NTPBWidgetPersonalizationFeatureCTRPair : PBCodable <NSCopying> {
    struct { unsigned char ctr : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasPersonalizationFeatureId;
@property (retain, nonatomic) NSString *personalizationFeatureId;
@property (nonatomic) BOOL hasCtr;
@property (nonatomic) float ctr;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
