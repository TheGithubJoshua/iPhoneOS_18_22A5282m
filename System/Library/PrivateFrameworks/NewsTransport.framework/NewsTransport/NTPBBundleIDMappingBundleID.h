@class NSString, NSMutableArray;

@interface NTPBBundleIDMappingBundleID : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSMutableArray *topicTags;
@property (retain, nonatomic) NSMutableArray *channelTags;
@property (retain, nonatomic) NSMutableArray *sectionTags;

+ (Class)sectionTagsType;
+ (Class)channelTagsType;
+ (Class)topicTagsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addChannelTags:(id)a0;
- (void)addSectionTags:(id)a0;
- (void)addTopicTags:(id)a0;
- (id)channelTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)channelTagsCount;
- (void)clearChannelTags;
- (void)clearSectionTags;
- (void)clearTopicTags;
- (id)sectionTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionTagsCount;
- (id)topicTagsAtIndex:(unsigned long long)a0;
- (unsigned long long)topicTagsCount;

@end
