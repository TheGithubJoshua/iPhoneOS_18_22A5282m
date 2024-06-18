@class NSMutableArray;

@interface HDCodableStaticSyncChangeSet : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *changes;

+ (id)changeSetWithChanges:(id)a0;
+ (Class)changesType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)addChanges:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)changesCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)changesAtIndex:(unsigned long long)a0;
- (void)clearChanges;

@end
