@class NSData, NSMutableArray, NSString;

@interface NTPBPersonalizationLocalData : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *openChangeGroupDeltas;
@property (retain, nonatomic) NSMutableArray *closedChangeGroups;
@property (readonly, nonatomic) BOOL hasRemoteRecordData;
@property (retain, nonatomic) NSData *remoteRecordData;
@property (readonly, nonatomic) BOOL hasCurrentInstanceIdentifier;
@property (retain, nonatomic) NSString *currentInstanceIdentifier;
@property (retain, nonatomic) NSMutableArray *aggregates;

+ (Class)aggregatesType;
+ (Class)closedChangeGroupsType;
+ (Class)openChangeGroupDeltasType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)clearAggregates;
- (unsigned long long)aggregatesCount;
- (void)addAggregates:(id)a0;
- (void)addClosedChangeGroups:(id)a0;
- (void)addOpenChangeGroupDeltas:(id)a0;
- (id)aggregatesAtIndex:(unsigned long long)a0;
- (void)clearClosedChangeGroups;
- (void)clearOpenChangeGroupDeltas;
- (id)closedChangeGroupsAtIndex:(unsigned long long)a0;
- (unsigned long long)closedChangeGroupsCount;
- (id)openChangeGroupDeltasAtIndex:(unsigned long long)a0;
- (unsigned long long)openChangeGroupDeltasCount;

@end
