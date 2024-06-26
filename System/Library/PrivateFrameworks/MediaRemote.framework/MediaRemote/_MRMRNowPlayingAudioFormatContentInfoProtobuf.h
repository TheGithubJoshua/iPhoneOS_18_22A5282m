@class NSString;

@interface _MRMRNowPlayingAudioFormatContentInfoProtobuf : PBCodable <NSCopying> {
    struct { unsigned char audioFormat : 1; unsigned char audioSessionID : 1; unsigned char channelCount : 1; unsigned char intendedSpatialExperience : 1; unsigned char resolvedSpatialExperience : 1; unsigned char eligibleForSpatialization : 1; unsigned char spatialized : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleID;
@property (retain, nonatomic) NSString *bundleID;
@property (nonatomic) BOOL hasAudioSessionID;
@property (nonatomic) unsigned long long audioSessionID;
@property (nonatomic) BOOL hasAudioFormat;
@property (nonatomic) unsigned long long audioFormat;
@property (nonatomic) BOOL hasChannelCount;
@property (nonatomic) unsigned long long channelCount;
@property (readonly, nonatomic) BOOL hasBestAvailableContent;
@property (retain, nonatomic) NSString *bestAvailableContent;
@property (nonatomic) BOOL hasEligibleForSpatialization;
@property (nonatomic) BOOL eligibleForSpatialization;
@property (nonatomic) BOOL hasSpatialized;
@property (nonatomic) BOOL spatialized;
@property (nonatomic) BOOL hasIntendedSpatialExperience;
@property (nonatomic) long long intendedSpatialExperience;
@property (nonatomic) BOOL hasResolvedSpatialExperience;
@property (nonatomic) long long resolvedSpatialExperience;

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
