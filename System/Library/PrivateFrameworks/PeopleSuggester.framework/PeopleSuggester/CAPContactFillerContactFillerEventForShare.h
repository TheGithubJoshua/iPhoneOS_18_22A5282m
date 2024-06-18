@class NSString, NSMutableArray;

@interface CAPContactFillerContactFillerEventForShare : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSMutableArray *shareEvents;

+ (Class)shareEventsType;

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
- (void)addShareEvents:(id)a0;
- (void)clearShareEvents;
- (id)shareEventsAtIndex:(unsigned long long)a0;
- (unsigned long long)shareEventsCount;

@end
