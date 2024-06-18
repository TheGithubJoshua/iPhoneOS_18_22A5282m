@interface AWDHomeKitCameraStreamReconfigure : PBCodable <NSCopying> {
    struct { unsigned char reconfigurationTimestamp : 1; unsigned char resolution : 1; } _has;
}

@property (nonatomic) BOOL hasReconfigurationTimestamp;
@property (nonatomic) unsigned int reconfigurationTimestamp;
@property (nonatomic) BOOL hasResolution;
@property (nonatomic) int resolution;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsResolution:(id)a0;
- (id)resolutionAsString:(int)a0;

@end
