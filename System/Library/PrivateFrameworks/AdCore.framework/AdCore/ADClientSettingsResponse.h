@class NSMutableArray;

@interface ADClientSettingsResponse : PBCodable <NSCopying> {
    struct { unsigned char expirationDate : 1; } _has;
}

@property (nonatomic) BOOL hasExpirationDate;
@property (nonatomic) double expirationDate;
@property (retain, nonatomic) NSMutableArray *searchAdsSettingsParams;
@property (retain, nonatomic) NSMutableArray *searchLandingAdsSettingsParams;

+ (Class)searchAdsSettingsParamsType;
+ (Class)searchLandingAdsSettingsParamsType;

- (unsigned long long)searchLandingAdsSettingsParamsCount;
- (void)mergeFrom:(id)a0;
- (void)clearSearchLandingAdsSettingsParams;
- (void)addSearchAdsSettingsParams:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)searchLandingAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSearchLandingAdsSettingsParams:(id)a0;
- (id)searchAdsSettingsParamsAtIndex:(unsigned long long)a0;
- (unsigned long long)searchAdsSettingsParamsCount;
- (void)clearSearchAdsSettingsParams;

@end
