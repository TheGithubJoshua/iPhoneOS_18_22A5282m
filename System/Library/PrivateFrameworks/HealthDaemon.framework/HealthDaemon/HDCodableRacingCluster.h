@class HDCodableRacingMetrics, NSString, NSData, NSMutableArray;

@interface HDCodableRacingCluster : PBCodable <NSCopying> {
    struct { unsigned char relevance : 1; unsigned char activityType : 1; unsigned char clusterSize : 1; unsigned char final : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSData *uuid;
@property (readonly, nonatomic) BOOL hasWorkoutClusterUUID;
@property (retain, nonatomic) NSData *workoutClusterUUID;
@property (nonatomic) BOOL hasRelevance;
@property (nonatomic) double relevance;
@property (nonatomic) BOOL hasClusterSize;
@property (nonatomic) int clusterSize;
@property (nonatomic) BOOL hasActivityType;
@property (nonatomic) int activityType;
@property (readonly, nonatomic) BOOL hasRouteSnapshot;
@property (retain, nonatomic) NSData *routeSnapshot;
@property (readonly, nonatomic) BOOL hasRouteLabel;
@property (retain, nonatomic) NSString *routeLabel;
@property (readonly, nonatomic) BOOL hasLastWorkoutMetrics;
@property (retain, nonatomic) HDCodableRacingMetrics *lastWorkoutMetrics;
@property (readonly, nonatomic) BOOL hasBestWorkoutMetrics;
@property (retain, nonatomic) HDCodableRacingMetrics *bestWorkoutMetrics;
@property (nonatomic) BOOL hasFinal;
@property (nonatomic) BOOL final;
@property (retain, nonatomic) NSMutableArray *eligibleClusterUUIDs;

+ (Class)eligibleClusterUUIDsType;

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
- (void)addEligibleClusterUUIDs:(id)a0;
- (void)clearEligibleClusterUUIDs;
- (id)eligibleClusterUUIDsAtIndex:(unsigned long long)a0;
- (unsigned long long)eligibleClusterUUIDsCount;

@end
