@class NSString;

@interface ADSegmentUpdateResponse : PBCodable <NSCopying> {
    struct { unsigned char maxSegmentUpdateIntervalInSeconds : 1; unsigned char segmentRefreshIntervalInSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIdDebug;
@property (retain, nonatomic) NSString *idDebug;
@property (nonatomic) BOOL hasSegmentRefreshIntervalInSeconds;
@property (nonatomic) double segmentRefreshIntervalInSeconds;
@property (nonatomic) BOOL hasMaxSegmentUpdateIntervalInSeconds;
@property (nonatomic) double maxSegmentUpdateIntervalInSeconds;

+ (id)options;

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
