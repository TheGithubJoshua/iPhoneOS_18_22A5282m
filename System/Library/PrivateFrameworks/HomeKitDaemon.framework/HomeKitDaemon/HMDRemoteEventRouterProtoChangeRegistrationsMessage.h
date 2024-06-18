@class NSMutableArray;

@interface HMDRemoteEventRouterProtoChangeRegistrationsMessage : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *topicFilterAdditions;
@property (retain, nonatomic) NSMutableArray *topicFilterRemovals;
@property (retain, nonatomic) NSMutableArray *topicAdditions;
@property (retain, nonatomic) NSMutableArray *topicRemovals;

+ (Class)topicFilterAdditionsType;
+ (Class)topicFilterRemovalsType;
+ (Class)topicAdditionsType;
+ (Class)topicRemovalsType;

- (void)mergeFrom:(id)a0;
- (unsigned long long)topicFilterAdditionsCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)clearTopicFilterRemovals;
- (unsigned long long)hash;
- (unsigned long long)topicFilterRemovalsCount;
- (void)writeTo:(id)a0;
- (void)addTopicFilterAdditions:(id)a0;
- (id)topicFilterRemovalsAtIndex:(unsigned long long)a0;
- (void)clearTopicFilterAdditions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)addTopicFilterRemovals:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)topicFilterAdditionsAtIndex:(unsigned long long)a0;
- (void)addTopicAdditions:(id)a0;
- (void)addTopicRemovals:(id)a0;
- (void)clearTopicAdditions;
- (void)clearTopicRemovals;
- (id)topicAdditionsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicAdditionsCount;
- (id)topicRemovalsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicRemovalsCount;

@end
