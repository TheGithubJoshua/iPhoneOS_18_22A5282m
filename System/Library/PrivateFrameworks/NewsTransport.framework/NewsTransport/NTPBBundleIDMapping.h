@class NSMutableArray;

@interface NTPBBundleIDMapping : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *bundleIds;

+ (Class)bundleIdsType;

- (void)clearBundleIds;
- (void)mergeFrom:(id)a0;
- (id)bundleIdsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)bundleIdsCount;
- (void)addBundleIds:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
