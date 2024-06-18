@class NSString, NSMutableArray;

@interface BLTPBBulletinSummary : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasPublisherBulletinID;
@property (retain, nonatomic) NSString *publisherBulletinID;
@property (readonly, nonatomic) BOOL hasRecordID;
@property (retain, nonatomic) NSString *recordID;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic) unsigned int destinations;
@property (retain, nonatomic) NSMutableArray *keys;

+ (Class)keyType;

- (id)keyAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (void).cxx_destruct;
- (void)clearKeys;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (unsigned long long)keysCount;
- (BOOL)readFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addKey:(id)a0;

@end
