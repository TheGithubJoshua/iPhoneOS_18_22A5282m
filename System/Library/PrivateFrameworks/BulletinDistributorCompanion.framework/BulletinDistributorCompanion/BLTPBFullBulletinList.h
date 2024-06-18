@class NSMutableArray;

@interface BLTPBFullBulletinList : PBCodable <NSCopying>

@property (retain, nonatomic) NSMutableArray *sectionBulletinLists;

+ (Class)sectionBulletinListType;

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
- (void)addSectionBulletinList:(id)a0;
- (void)clearSectionBulletinLists;
- (id)sectionBulletinListAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionBulletinListsCount;

@end
