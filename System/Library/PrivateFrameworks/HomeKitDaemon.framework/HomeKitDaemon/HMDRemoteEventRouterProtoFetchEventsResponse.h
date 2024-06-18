@class NSMutableArray;

@interface HMDRemoteEventRouterProtoFetchEventsResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *changedEvents;

+ (Class)changedEventsType;

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
- (void)addChangedEvents:(id)a0;
- (id)changedEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)changedEventsCount;
- (void)clearChangedEvents;

@end
