@class NTPBSession, NSMutableArray, NSData;

@interface NTPBSessionBatch : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasSession;
@property (retain, nonatomic) NTPBSession *session;
@property (retain, nonatomic) NSMutableArray *events;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSData *identifier;

+ (Class)eventsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)addEvents:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearEvents;
- (id)eventsAtIndex:(unsigned long long)a0;
- (unsigned long long)eventsCount;

@end
