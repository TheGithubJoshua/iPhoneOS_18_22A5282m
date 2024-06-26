@class NSString, NSMutableArray;

@interface AWDSymptomsNetworkTCPFlowThroughputEstimator : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char networkType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasNetworkType;
@property (nonatomic) int networkType;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) BOOL hasSourceAppIdentifier;
@property (retain, nonatomic) NSString *sourceAppIdentifier;
@property (retain, nonatomic) NSMutableArray *flowThroughputEvents;

+ (Class)flowThroughputEventType;

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
- (int)StringAsNetworkType:(id)a0;
- (id)networkTypeAsString:(int)a0;
- (void)addFlowThroughputEvent:(id)a0;
- (void)clearFlowThroughputEvents;
- (id)flowThroughputEventAtIndex:(unsigned long long)a0;
- (unsigned long long)flowThroughputEventsCount;

@end
