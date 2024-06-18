@class NSMutableArray;

@interface NRPBDeviceDiff : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *diffs;

+ (Class)namesType;
+ (Class)diffsType;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)clearNames;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)namesCount;
- (void)addNames:(id)a0;
- (id)namesAtIndex:(unsigned long long)a0;
- (void)clearDiffs;
- (void)addDiffs:(id)a0;
- (id)diffsAtIndex:(unsigned long long)a0;
- (unsigned long long)diffsCount;

@end
