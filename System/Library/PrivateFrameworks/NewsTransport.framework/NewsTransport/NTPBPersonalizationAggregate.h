@class NSString;

@interface NTPBPersonalizationAggregate : PBCodable <NSCopying> {
    struct { unsigned char clicks : 1; unsigned char eventCount : 1; unsigned char impressions : 1; unsigned char timestamp : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFeatureKey;
@property (retain, nonatomic) NSString *featureKey;
@property (nonatomic) BOOL hasClicks;
@property (nonatomic) double clicks;
@property (nonatomic) BOOL hasImpressions;
@property (nonatomic) double impressions;
@property (nonatomic) BOOL hasEventCount;
@property (nonatomic) unsigned long long eventCount;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
