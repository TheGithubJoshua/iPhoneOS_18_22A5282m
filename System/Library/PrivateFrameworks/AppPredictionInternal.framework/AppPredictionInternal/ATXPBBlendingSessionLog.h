@class NSMutableArray;

@interface ATXPBBlendingSessionLog : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *ermEvents;
@property (retain, nonatomic) NSMutableArray *blendingUpdates;

+ (Class)blendingUpdateType;
+ (Class)ermEventType;

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
- (void)addBlendingUpdate:(id)a0;
- (void)addErmEvent:(id)a0;
- (id)blendingUpdateAtIndex:(unsigned long long)a0;
- (unsigned long long)blendingUpdatesCount;
- (void)clearBlendingUpdates;
- (void)clearErmEvents;
- (id)ermEventAtIndex:(unsigned long long)a0;
- (unsigned long long)ermEventsCount;

@end
