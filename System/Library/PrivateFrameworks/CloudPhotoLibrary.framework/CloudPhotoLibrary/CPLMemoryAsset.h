@class NSString, NSData, CPLMemoryAssetFlag;

@interface CPLMemoryAsset : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasAssetIdentifier;
@property (retain, nonatomic) NSString *assetIdentifier;
@property (readonly, nonatomic) BOOL hasAssetFlag;
@property (retain, nonatomic) CPLMemoryAssetFlag *assetFlag;
@property (readonly, nonatomic) BOOL hasAssetMovieData;
@property (retain, nonatomic) NSData *assetMovieData;
@property (readonly, nonatomic) BOOL hasMasterFingerprint;
@property (retain, nonatomic) NSString *masterFingerprint;

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
