@class NSString, NSMutableArray;

@interface NPKProtoDeviceDidRegisterRequest : PBRequest <NSCopying>

@property (retain, nonatomic) NSMutableArray *tsmRegionPushTopics;
@property (retain, nonatomic) NSMutableArray *tsmRegionURLs;
@property (retain, nonatomic) NSMutableArray *brokerRegionPushTopics;
@property (readonly, nonatomic) BOOL hasPrimaryRegionTopic;
@property (retain, nonatomic) NSString *primaryRegionTopic;

+ (Class)brokerRegionPushTopicsType;
+ (Class)tsmRegionPushTopicsType;
+ (Class)tsmRegionURLsType;

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
- (void)addBrokerRegionPushTopics:(id)a0;
- (void)addTsmRegionPushTopics:(id)a0;
- (void)addTsmRegionURLs:(id)a0;
- (id)brokerRegionPushTopicsAtIndex:(unsigned long long)a0;
- (unsigned long long)brokerRegionPushTopicsCount;
- (void)clearBrokerRegionPushTopics;
- (void)clearTsmRegionPushTopics;
- (void)clearTsmRegionURLs;
- (id)tsmRegionPushTopicsAtIndex:(unsigned long long)a0;
- (unsigned long long)tsmRegionPushTopicsCount;
- (id)tsmRegionURLsAtIndex:(unsigned long long)a0;
- (unsigned long long)tsmRegionURLsCount;

@end
