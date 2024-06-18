@class NSMutableArray;

@interface NTPBNetworkSessionList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *networkSessions;
@property (retain, nonatomic) NSMutableArray *networkEvents;

+ (Class)networkEventsType;
+ (Class)networkSessionsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)addNetworkEvents:(id)a0;
- (void)clearNetworkEvents;
- (id)networkEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)networkEventsCount;
- (void)addNetworkSessions:(id)a0;
- (void)clearNetworkSessions;
- (id)networkSessionsAtIndex:(unsigned long long)a0;
- (unsigned long long)networkSessionsCount;

@end
