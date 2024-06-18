@class NSString, ATXAnchorModelPBLaunchHistoryMetadata;

@interface ATXAnchorModelPBLinkActionMetadata : PBCodable <NSCopying> {
    struct { unsigned char relativeTimeSinceAnchorInSeconds : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasActionId;
@property (retain, nonatomic) NSString *actionId;
@property (readonly, nonatomic) BOOL hasActionHistory;
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *actionHistory;
@property (nonatomic) BOOL hasRelativeTimeSinceAnchorInSeconds;
@property (nonatomic) int relativeTimeSinceAnchorInSeconds;

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
