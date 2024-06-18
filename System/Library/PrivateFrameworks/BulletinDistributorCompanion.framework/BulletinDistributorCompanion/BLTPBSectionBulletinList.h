@class NSString, NSMutableArray;

@interface BLTPBSectionBulletinList : PBCodable <NSCopying>

@property (retain, nonatomic) NSString *sectionID;
@property (retain, nonatomic) NSMutableArray *bulletinIdentifiers;

+ (Class)bulletinIdentifierType;

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
- (void)addBulletinIdentifier:(id)a0;
- (id)bulletinIdentifierAtIndex:(unsigned long long)a0;
- (unsigned long long)bulletinIdentifiersCount;
- (void)clearBulletinIdentifiers;

@end
