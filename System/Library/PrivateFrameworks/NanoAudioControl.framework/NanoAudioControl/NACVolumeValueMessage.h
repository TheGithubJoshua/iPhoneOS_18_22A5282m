@class NSString;

@interface NACVolumeValueMessage : PBCodable <NSCopying> {
    struct { unsigned char originIdentifier : 1; unsigned char volumeValue : 1; } _has;
}

@property (nonatomic) BOOL hasVolumeValue;
@property (nonatomic) float volumeValue;
@property (readonly, nonatomic) BOOL hasCategory;
@property (retain, nonatomic) NSString *category;
@property (nonatomic) BOOL hasOriginIdentifier;
@property (nonatomic) int originIdentifier;

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
