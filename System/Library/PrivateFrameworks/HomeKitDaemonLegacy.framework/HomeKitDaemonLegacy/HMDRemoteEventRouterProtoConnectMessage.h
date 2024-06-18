@class NSMutableArray, HMEProtoEventInfo;

@interface HMDRemoteEventRouterProtoConnectMessage : PBCodable <NSCopying> {
    struct { unsigned char routerVersion : 1; } _has;
}

@property (nonatomic) BOOL hasRouterVersion;
@property (nonatomic) unsigned int routerVersion;
@property (readonly, nonatomic) BOOL hasConnectEvent;
@property (retain, nonatomic) HMEProtoEventInfo *connectEvent;
@property (readonly, nonatomic) BOOL hasUnregisterEvent;
@property (retain, nonatomic) HMEProtoEventInfo *unregisterEvent;
@property (retain, nonatomic) NSMutableArray *topicFilterAdditions;
@property (retain, nonatomic) NSMutableArray *topicAdditions;

+ (Class)topicFilterAdditionsType;
+ (Class)topicAdditionsType;

- (void)mergeFrom:(id)a0;
- (unsigned long long)topicFilterAdditionsCount;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void)addTopicFilterAdditions:(id)a0;
- (void)clearTopicFilterAdditions;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)topicFilterAdditionsAtIndex:(unsigned long long)a0;
- (void)addTopicAdditions:(id)a0;
- (void)clearTopicAdditions;
- (id)topicAdditionsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicAdditionsCount;

@end
