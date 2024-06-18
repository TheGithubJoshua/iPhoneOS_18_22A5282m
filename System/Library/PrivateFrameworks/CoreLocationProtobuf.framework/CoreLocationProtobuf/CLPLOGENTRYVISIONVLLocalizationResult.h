@class CLPLOGENTRYVISIONTimeStamp, CLPLOGENTRYVISIONSimdDoubleMxN, CLPLOGENTRYVISIONVLMatrixfMxN, CLPLOGENTRYVISIONVLLocalizationDebugInfo, CLPLOGENTRYVISIONVLLocation;

@interface CLPLOGENTRYVISIONVLLocalizationResult : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocation *location;
@property (readonly, nonatomic) BOOL hasTransform;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN *transform;
@property (readonly, nonatomic) BOOL hasCovariance;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLMatrixfMxN *covariance;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) float confidence;
@property (readonly, nonatomic) BOOL hasDebugInfo;
@property (retain, nonatomic) CLPLOGENTRYVISIONVLLocalizationDebugInfo *debugInfo;

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
