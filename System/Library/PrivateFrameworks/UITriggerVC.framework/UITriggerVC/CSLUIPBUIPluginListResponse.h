@class NSMutableArray;

@interface CSLUIPBUIPluginListResponse : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *names;
@property (retain, nonatomic) NSMutableArray *usages;

- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)nameAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)clearNames;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)readFrom:(id)a0;
- (void)addName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)namesCount;
- (void)addUsage:(id)a0;
- (void)clearUsages;
- (id)usageAtIndex:(unsigned long long)a0;
- (unsigned long long)usagesCount;

@end
